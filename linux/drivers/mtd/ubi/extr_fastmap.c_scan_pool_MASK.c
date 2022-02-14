
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_vid_io_buf {int dummy; } ;
struct ubi_vid_hdr {int copy_flag; int sqnum; int lnum; } ;
struct ubi_ec_hdr {int ec; int image_seq; } ;
struct ubi_device {int image_seq; int ec_hdr_alsize; } ;
struct ubi_attach_info {int dummy; } ;
struct ubi_ainf_peb {unsigned long long sqnum; int scrub; int copy_flag; void* lnum; } ;
struct list_head {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ubi_attach_info*,struct list_head*,int,unsigned long long,int) ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (struct ubi_ec_hdr*) ;
 struct ubi_ec_hdr* FUNC_5 (int ,int ) ;
 int FUNC_6 (struct ubi_device*,struct ubi_attach_info*,struct ubi_vid_hdr*,struct ubi_ainf_peb*) ;
 struct ubi_ainf_peb* FUNC_7 (struct ubi_attach_info*,int,void*) ;
 struct ubi_vid_io_buf* FUNC_8 (struct ubi_device*,int ) ;
 int FUNC_9 (struct ubi_device*,char*,...) ;
 int FUNC_10 (struct ubi_vid_io_buf*) ;
 struct ubi_vid_hdr* FUNC_11 (struct ubi_vid_io_buf*) ;
 scalar_t__ FUNC_12 (struct ubi_device*,int) ;
 int FUNC_13 (struct ubi_device*,int,struct ubi_ec_hdr*,int ) ;
 int FUNC_14 (struct ubi_device*,int,struct ubi_vid_io_buf*,int ) ;
 int FUNC_15 (struct ubi_attach_info*,int) ;

__attribute__((used)) static int FUNC_16(struct ubi_device *VAR_6, struct ubi_attach_info *VAR_7,
       __be32 *VAR_8, int VAR_9, unsigned long long *VAR_10,
       struct list_head *VAR_11)
{
 struct ubi_vid_io_buf *VAR_12;
 struct ubi_vid_hdr *VAR_13;
 struct ubi_ec_hdr *VAR_14;
 struct ubi_ainf_peb *VAR_15;
 int VAR_16, VAR_17, VAR_18, VAR_19 = 0;

 VAR_14 = FUNC_5(VAR_6->ec_hdr_alsize, VAR_1);
 if (!VAR_14)
  return -VAR_0;

 VAR_12 = FUNC_8(VAR_6, VAR_1);
 if (!VAR_12) {
  FUNC_4(VAR_14);
  return -VAR_0;
 }

 VAR_13 = FUNC_11(VAR_12);

 FUNC_3("scanning fastmap pool: size = %i", VAR_9);





 for (VAR_16 = 0; VAR_16 < VAR_9; VAR_16++) {
  int VAR_20 = 0;
  int VAR_21;

  VAR_17 = FUNC_1(VAR_8[VAR_16]);

  if (FUNC_12(VAR_6, VAR_17)) {
   FUNC_9(VAR_6, "bad PEB in fastmap pool!");
   VAR_19 = VAR_2;
   goto out;
  }

  VAR_18 = FUNC_13(VAR_6, VAR_17, VAR_14, 0);
  if (VAR_18 && VAR_18 != VAR_3) {
   FUNC_9(VAR_6, "unable to read EC header! PEB:%i err:%i",
    VAR_17, VAR_18);
   VAR_19 = VAR_18 > 0 ? VAR_2 : VAR_18;
   goto out;
  } else if (VAR_18 == VAR_3)
   VAR_20 = 1;





  VAR_21 = FUNC_1(VAR_14->image_seq);

  if (VAR_21 && (VAR_21 != VAR_6->image_seq)) {
   FUNC_9(VAR_6, "bad image seq: 0x%x, expected: 0x%x",
    FUNC_1(VAR_14->image_seq), VAR_6->image_seq);
   VAR_19 = VAR_2;
   goto out;
  }

  VAR_18 = FUNC_14(VAR_6, VAR_17, VAR_12, 0);
  if (VAR_18 == VAR_4 || VAR_18 == VAR_5) {
   unsigned long long VAR_22 = FUNC_2(VAR_14->ec);
   FUNC_15(VAR_7, VAR_17);
   FUNC_3("Adding PEB to free: %i", VAR_17);

   if (VAR_18 == VAR_5)
    VAR_20 = 1;

   FUNC_0(VAR_7, VAR_11, VAR_17, VAR_22, VAR_20);
   continue;
  } else if (VAR_18 == 0 || VAR_18 == VAR_3) {
   FUNC_3("Found non empty PEB:%i in pool", VAR_17);

   if (VAR_18 == VAR_3)
    VAR_20 = 1;

   VAR_15 = FUNC_7(VAR_7, VAR_17, FUNC_2(VAR_14->ec));
   if (!VAR_15) {
    VAR_19 = -VAR_0;
    goto out;
   }

   VAR_15->lnum = FUNC_1(VAR_13->lnum);
   VAR_15->sqnum = FUNC_2(VAR_13->sqnum);
   VAR_15->copy_flag = VAR_13->copy_flag;
   VAR_15->scrub = VAR_20;

   if (*VAR_10 < VAR_15->sqnum)
    *VAR_10 = VAR_15->sqnum;

   VAR_18 = FUNC_6(VAR_6, VAR_7, VAR_13, VAR_15);
   if (VAR_18) {
    VAR_19 = VAR_18 > 0 ? VAR_2 : VAR_18;
    goto out;
   }
  } else {

   FUNC_9(VAR_6, "fastmap pool PEBs contains damaged PEBs!");
   VAR_19 = VAR_18 > 0 ? VAR_2 : VAR_18;
   goto out;
  }

 }

out:
 FUNC_10(VAR_12);
 FUNC_4(VAR_14);
 return VAR_19;
}
