
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_vid_io_buf {int dummy; } ;
struct ubi_vid_hdr {int compat; int lnum; int vol_id; } ;
struct ubi_ec_hdr {scalar_t__ version; int image_seq; int ec; } ;
struct ubi_device {int image_seq; int ro_mode; } ;
struct ubi_attach_info {int bad_peb_count; int empty_peb_count; int maybe_bad_peb_count; int force_full_scan; long long ec_sum; int ec_count; long long max_ec; long long min_ec; int alien; int erase; int free; struct ubi_vid_io_buf* vidb; struct ubi_ec_hdr* ech; } ;


 int VAR_0 ;
 long long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct ubi_attach_info*,int,long long) ;
 int FUNC_1 (struct ubi_attach_info*,int,struct ubi_vid_hdr*,long long) ;
 int FUNC_2 (struct ubi_attach_info*,int,int,int,long long,int,int *) ;
 int FUNC_3 (int ) ;
 long long FUNC_4 (int ) ;
 int FUNC_5 (struct ubi_device*,struct ubi_vid_hdr*,int) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (struct ubi_device*,struct ubi_attach_info*,int,long long,struct ubi_vid_hdr*,int) ;
 int FUNC_8 (struct ubi_ec_hdr*) ;
 int FUNC_9 (struct ubi_device*,char*,int,...) ;
 struct ubi_vid_hdr* FUNC_10 (struct ubi_vid_io_buf*) ;
 int FUNC_11 (struct ubi_device*,int) ;
 int FUNC_12 (struct ubi_device*,int,struct ubi_ec_hdr*,int ) ;
 int FUNC_13 (struct ubi_device*,int,struct ubi_vid_io_buf*,int ) ;
 scalar_t__ FUNC_14 (int) ;
 int FUNC_15 (struct ubi_device*,char*,int,int) ;
 int FUNC_16 (struct ubi_device*,char*,int) ;
 int FUNC_17 (int) ;

__attribute__((used)) static int FUNC_18(struct ubi_device *VAR_5, struct ubi_attach_info *VAR_6,
      int VAR_7, bool VAR_8)
{
 struct ubi_ec_hdr *VAR_9 = VAR_6->ech;
 struct ubi_vid_io_buf *VAR_10 = VAR_6->vidb;
 struct ubi_vid_hdr *VAR_11 = FUNC_10(VAR_10);
 long long VAR_12;
 int VAR_13, VAR_14 = 0, VAR_15 = -1, VAR_16 = 0;

 FUNC_6("scan PEB %d", VAR_7);


 VAR_13 = FUNC_11(VAR_5, VAR_7);
 if (VAR_13 < 0)
  return VAR_13;
 else if (VAR_13) {
  VAR_6->bad_peb_count += 1;
  return 0;
 }

 VAR_13 = FUNC_12(VAR_5, VAR_7, VAR_9, 0);
 if (VAR_13 < 0)
  return VAR_13;
 switch (VAR_13) {
 case 0:
  break;
 case 130:
  VAR_14 = 1;
  break;
 case 129:
  VAR_6->empty_peb_count += 1;
  return FUNC_2(VAR_6, VAR_7, VAR_3, VAR_3,
       VAR_3, 0, &VAR_6->erase);
 case 128:
  VAR_6->empty_peb_count += 1;
  return FUNC_2(VAR_6, VAR_7, VAR_3, VAR_3,
       VAR_3, 1, &VAR_6->erase);
 case 131:
 case 132:





  VAR_16 = VAR_13;
  VAR_12 = VAR_3;
  VAR_14 = 1;
  break;
 default:
  FUNC_9(VAR_5, "'ubi_io_read_ec_hdr()' returned unknown code %d",
   VAR_13);
  return -VAR_0;
 }

 if (!VAR_16) {
  int VAR_17;


  if (VAR_9->version != VAR_4) {
   FUNC_9(VAR_5, "this UBI version is %d, image version is %d",
    VAR_4, (int)VAR_9->version);
   return -VAR_0;
  }

  VAR_12 = FUNC_4(VAR_9->ec);
  if (VAR_12 > VAR_1) {







   FUNC_9(VAR_5, "erase counter overflow, max is %d",
    VAR_1);
   FUNC_8(VAR_9);
   return -VAR_0;
  }
  VAR_17 = FUNC_3(VAR_9->image_seq);
  if (!VAR_5->image_seq)
   VAR_5->image_seq = VAR_17;
  if (VAR_17 && VAR_5->image_seq != VAR_17) {
   FUNC_9(VAR_5, "bad image sequence number %d in PEB %d, expected %d",
    VAR_17, VAR_7, VAR_5->image_seq);
   FUNC_8(VAR_9);
   return -VAR_0;
  }
 }



 VAR_13 = FUNC_13(VAR_5, VAR_7, VAR_10, 0);
 if (VAR_13 < 0)
  return VAR_13;
 switch (VAR_13) {
 case 0:
  break;
 case 130:
  VAR_14 = 1;
  break;
 case 131:
  if (VAR_16 == 131)






   VAR_6->maybe_bad_peb_count += 1;

 case 132:
   if (VAR_8)
    VAR_6->force_full_scan = 1;

  if (VAR_16)
   VAR_13 = 0;
  else




   VAR_13 = FUNC_5(VAR_5, VAR_11, VAR_7);

  if (VAR_13 < 0)
   return VAR_13;
  else if (!VAR_13)

   VAR_13 = FUNC_2(VAR_6, VAR_7, VAR_3,
       VAR_3, VAR_12, 1, &VAR_6->erase);
  else

   VAR_13 = FUNC_0(VAR_6, VAR_7, VAR_12);
  if (VAR_13)
   return VAR_13;
  goto adjust_mean_ec;
 case 128:
  VAR_13 = FUNC_2(VAR_6, VAR_7, VAR_3, VAR_3,
      VAR_12, 1, &VAR_6->erase);
  if (VAR_13)
   return VAR_13;
  goto adjust_mean_ec;
 case 129:
  if (VAR_16 || VAR_14)
   VAR_13 = FUNC_2(VAR_6, VAR_7, VAR_3,
       VAR_3, VAR_12, 1, &VAR_6->erase);
  else
   VAR_13 = FUNC_2(VAR_6, VAR_7, VAR_3,
       VAR_3, VAR_12, 0, &VAR_6->free);
  if (VAR_13)
   return VAR_13;
  goto adjust_mean_ec;
 default:
  FUNC_9(VAR_5, "'ubi_io_read_vid_hdr()' returned unknown code %d",
   VAR_13);
  return -VAR_0;
 }

 VAR_15 = FUNC_3(VAR_11->vol_id);
 if (VAR_15 > VAR_2 && !FUNC_17(VAR_15)) {
  int VAR_18 = FUNC_3(VAR_11->lnum);


  switch (VAR_11->compat) {
  case 136:
   FUNC_15(VAR_5, "\"delete\" compatible internal volume %d:%d found, will remove it",
    VAR_15, VAR_18);

   VAR_13 = FUNC_2(VAR_6, VAR_7, VAR_15, VAR_18,
       VAR_12, 1, &VAR_6->erase);
   if (VAR_13)
    return VAR_13;
   return 0;

  case 133:
   FUNC_15(VAR_5, "read-only compatible internal volume %d:%d found, switch to read-only mode",
    VAR_15, VAR_18);
   VAR_5->ro_mode = 1;
   break;

  case 135:
   FUNC_15(VAR_5, "\"preserve\" compatible internal volume %d:%d found",
    VAR_15, VAR_18);
   VAR_13 = FUNC_2(VAR_6, VAR_7, VAR_15, VAR_18,
       VAR_12, 0, &VAR_6->alien);
   if (VAR_13)
    return VAR_13;
   return 0;

  case 134:
   FUNC_9(VAR_5, "incompatible internal volume %d:%d found",
    VAR_15, VAR_18);
   return -VAR_0;
  }
 }

 if (VAR_16)
  FUNC_16(VAR_5, "valid VID header but corrupted EC header at PEB %d",
    VAR_7);

 if (FUNC_14(VAR_15))
  VAR_13 = FUNC_1(VAR_6, VAR_7, VAR_11, VAR_12);
 else
  VAR_13 = FUNC_7(VAR_5, VAR_6, VAR_7, VAR_12, VAR_11, VAR_14);

 if (VAR_13)
  return VAR_13;

adjust_mean_ec:
 if (!VAR_16) {
  VAR_6->ec_sum += VAR_12;
  VAR_6->ec_count += 1;
  if (VAR_12 > VAR_6->max_ec)
   VAR_6->max_ec = VAR_12;
  if (VAR_12 < VAR_6->min_ec)
   VAR_6->min_ec = VAR_12;
 }

 return 0;
}
