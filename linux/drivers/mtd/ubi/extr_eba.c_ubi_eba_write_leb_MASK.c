
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ubi_volume {int vol_id; int data_pad; TYPE_2__* eba_tbl; } ;
struct ubi_vid_io_buf {int dummy; } ;
struct ubi_vid_hdr {void* sqnum; void* data_pad; int compat; void* lnum; void* vol_id; int vol_type; } ;
struct ubi_device {scalar_t__ bad_allowed; scalar_t__ ro_mode; } ;
struct TYPE_4__ {TYPE_1__* entries; } ;
struct TYPE_3__ {int pnum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ubi_device*,struct ubi_volume*,int,int*) ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (char*,int,int,int,int,int) ;
 int FUNC_4 (struct ubi_device*,int,int) ;
 int FUNC_5 (struct ubi_device*,int,int) ;
 int FUNC_6 (struct ubi_device*,int,int,int,void const*,int,int) ;
 int FUNC_7 (struct ubi_volume*,int,struct ubi_vid_io_buf*,void const*,int,int) ;
 struct ubi_vid_io_buf* FUNC_8 (struct ubi_device*,int ) ;
 int FUNC_9 (struct ubi_vid_io_buf*) ;
 int FUNC_10 (struct ubi_device*,int) ;
 struct ubi_vid_hdr* FUNC_11 (struct ubi_vid_io_buf*) ;
 int FUNC_12 (struct ubi_device*,void const*,int,int,int) ;
 int FUNC_13 (struct ubi_device*,char*) ;
 int FUNC_14 (struct ubi_device*) ;
 int FUNC_15 (struct ubi_device*) ;
 int FUNC_16 (struct ubi_device*,char*,int) ;

int FUNC_17(struct ubi_device *VAR_6, struct ubi_volume *VAR_7, int VAR_8,
        const void *VAR_9, int VAR_10, int VAR_11)
{
 int VAR_12, VAR_13, VAR_14, VAR_15 = VAR_7->vol_id;
 struct ubi_vid_io_buf *VAR_16;
 struct ubi_vid_hdr *VAR_17;

 if (VAR_6->ro_mode)
  return -VAR_2;

 VAR_12 = FUNC_4(VAR_6, VAR_15, VAR_8);
 if (VAR_12)
  return VAR_12;

 VAR_13 = VAR_7->eba_tbl->entries[VAR_8].pnum;
 if (VAR_13 >= 0) {
  VAR_12 = FUNC_0(VAR_6, VAR_7, VAR_8, &VAR_13);
  if (VAR_12 < 0)
   goto out;
 }

 if (VAR_13 >= 0) {
  FUNC_3("write %d bytes at offset %d of LEB %d:%d, PEB %d",
   VAR_11, VAR_10, VAR_15, VAR_8, VAR_13);

  VAR_12 = FUNC_12(VAR_6, VAR_9, VAR_13, VAR_10, VAR_11);
  if (VAR_12) {
   FUNC_16(VAR_6, "failed to write data to PEB %d", VAR_13);
   if (VAR_12 == -VAR_0 && VAR_6->bad_allowed)
    VAR_12 = FUNC_6(VAR_6, VAR_13, VAR_15, VAR_8, VAR_9,
        VAR_10, VAR_11);
  }

  goto out;
 }





 VAR_16 = FUNC_8(VAR_6, VAR_3);
 if (!VAR_16) {
  FUNC_5(VAR_6, VAR_15, VAR_8);
  return -VAR_1;
 }

 VAR_17 = FUNC_11(VAR_16);

 VAR_17->vol_type = VAR_5;
 VAR_17->sqnum = FUNC_2(FUNC_14(VAR_6));
 VAR_17->vol_id = FUNC_1(VAR_15);
 VAR_17->lnum = FUNC_1(VAR_8);
 VAR_17->compat = FUNC_10(VAR_6, VAR_15);
 VAR_17->data_pad = FUNC_1(VAR_7->data_pad);

 for (VAR_14 = 0; VAR_14 <= VAR_4; VAR_14++) {
  VAR_12 = FUNC_7(VAR_7, VAR_8, VAR_16, VAR_9, VAR_10, VAR_11);
  if (VAR_12 != -VAR_0 || !VAR_6->bad_allowed)
   break;







  VAR_17->sqnum = FUNC_2(FUNC_14(VAR_6));
  FUNC_13(VAR_6, "try another PEB");
 }

 FUNC_9(VAR_16);

out:
 if (VAR_12)
  FUNC_15(VAR_6);

 FUNC_5(VAR_6, VAR_15, VAR_8);

 return VAR_12;
}
