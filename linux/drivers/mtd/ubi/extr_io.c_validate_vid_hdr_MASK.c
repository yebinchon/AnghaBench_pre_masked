
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_vid_hdr {int vol_type; int copy_flag; int compat; int data_crc; int data_pad; int used_ebs; int data_size; int lnum; int vol_id; } ;
struct ubi_device {int leb_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (struct ubi_vid_hdr const*) ;
 int FUNC_3 (struct ubi_device const*,char*) ;

__attribute__((used)) static int FUNC_4(const struct ubi_device *VAR_8,
       const struct ubi_vid_hdr *VAR_9)
{
 int VAR_10 = VAR_9->vol_type;
 int VAR_11 = VAR_9->copy_flag;
 int VAR_12 = FUNC_0(VAR_9->vol_id);
 int VAR_13 = FUNC_0(VAR_9->lnum);
 int VAR_14 = VAR_9->compat;
 int VAR_15 = FUNC_0(VAR_9->data_size);
 int VAR_16 = FUNC_0(VAR_9->used_ebs);
 int VAR_17 = FUNC_0(VAR_9->data_pad);
 int VAR_18 = FUNC_0(VAR_9->data_crc);
 int VAR_19 = VAR_8->leb_size - VAR_17;

 if (VAR_11 != 0 && VAR_11 != 1) {
  FUNC_3(VAR_8, "bad copy_flag");
  goto bad;
 }

 if (VAR_12 < 0 || VAR_13 < 0 || VAR_15 < 0 || VAR_16 < 0 ||
     VAR_17 < 0) {
  FUNC_3(VAR_8, "negative values");
  goto bad;
 }

 if (VAR_12 >= VAR_5 && VAR_12 < VAR_4) {
  FUNC_3(VAR_8, "bad vol_id");
  goto bad;
 }

 if (VAR_12 < VAR_4 && VAR_14 != 0) {
  FUNC_3(VAR_8, "bad compat");
  goto bad;
 }

 if (VAR_12 >= VAR_4 && VAR_14 != VAR_0 &&
     VAR_14 != VAR_3 && VAR_14 != VAR_1 &&
     VAR_14 != VAR_2) {
  FUNC_3(VAR_8, "bad compat");
  goto bad;
 }

 if (VAR_10 != VAR_6 && VAR_10 != VAR_7) {
  FUNC_3(VAR_8, "bad vol_type");
  goto bad;
 }

 if (VAR_17 >= VAR_8->leb_size / 2) {
  FUNC_3(VAR_8, "bad data_pad");
  goto bad;
 }

 if (VAR_15 > VAR_8->leb_size) {
  FUNC_3(VAR_8, "bad data_size");
  goto bad;
 }

 if (VAR_10 == VAR_7) {






  if (VAR_16 == 0) {
   FUNC_3(VAR_8, "zero used_ebs");
   goto bad;
  }
  if (VAR_15 == 0) {
   FUNC_3(VAR_8, "zero data_size");
   goto bad;
  }
  if (VAR_13 < VAR_16 - 1) {
   if (VAR_15 != VAR_19) {
    FUNC_3(VAR_8, "bad data_size");
    goto bad;
   }
  } else if (VAR_13 == VAR_16 - 1) {
   if (VAR_15 == 0) {
    FUNC_3(VAR_8, "bad data_size at last LEB");
    goto bad;
   }
  } else {
   FUNC_3(VAR_8, "too high lnum");
   goto bad;
  }
 } else {
  if (VAR_11 == 0) {
   if (VAR_18 != 0) {
    FUNC_3(VAR_8, "non-zero data CRC");
    goto bad;
   }
   if (VAR_15 != 0) {
    FUNC_3(VAR_8, "non-zero data_size");
    goto bad;
   }
  } else {
   if (VAR_15 == 0) {
    FUNC_3(VAR_8, "zero data_size of copy");
    goto bad;
   }
  }
  if (VAR_16 != 0) {
   FUNC_3(VAR_8, "bad used_ebs");
   goto bad;
  }
 }

 return 0;

bad:
 FUNC_3(VAR_8, "bad VID header");
 FUNC_2(VAR_9);
 FUNC_1();
 return 1;
}
