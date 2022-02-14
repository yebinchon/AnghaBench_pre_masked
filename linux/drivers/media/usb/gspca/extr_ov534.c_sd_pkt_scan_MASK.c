
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct sd {int last_pts; int last_fid; } ;
struct TYPE_4__ {scalar_t__ pixelformat; int sizeimage; } ;
struct TYPE_3__ {scalar_t__ bulk; } ;
struct gspca_dev {scalar_t__ last_packet_type; int image_len; TYPE_2__ pixfmt; TYPE_1__ cam; } ;
typedef int __u32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct gspca_dev*,int ,char*) ;
 int FUNC_1 (struct gspca_dev*,scalar_t__,int*,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3(struct gspca_dev *VAR_10,
   u8 *VAR_11, int VAR_12)
{
 struct sd *VAR_13 = (struct sd *) VAR_10;
 __u32 VAR_14;
 u16 VAR_15;
 int VAR_16 = VAR_12;
 int VAR_17;

 VAR_17 = VAR_10->cam.bulk ? 2048 : 2040;
 do {
  VAR_12 = FUNC_2(VAR_16, VAR_17);







  if (VAR_11[0] != 12 || VAR_12 < 12) {
   FUNC_0(VAR_10, VAR_1, "bad header\n");
   goto discard;
  }


  if (VAR_11[1] & VAR_6) {
   FUNC_0(VAR_10, VAR_1, "payload error\n");
   goto discard;
  }


  if (!(VAR_11[1] & VAR_8)) {
   FUNC_0(VAR_10, VAR_1, "PTS not present\n");
   goto discard;
  }
  VAR_14 = (VAR_11[5] << 24) | (VAR_11[4] << 16)
      | (VAR_11[3] << 8) | VAR_11[2];
  VAR_15 = (VAR_11[1] & VAR_7) ? 1 : 0;


  if (VAR_14 != VAR_13->last_pts || VAR_15 != VAR_13->last_fid) {
   if (VAR_10->last_packet_type == VAR_3)
    FUNC_1(VAR_10, VAR_4,
      ((void*)0), 0);
   VAR_13->last_pts = VAR_14;
   VAR_13->last_fid = VAR_15;
   FUNC_1(VAR_10, VAR_2,
     VAR_11 + 12, VAR_12 - 12);

  } else if (VAR_11[1] & VAR_5) {
   VAR_13->last_pts = 0;
   if (VAR_10->pixfmt.pixelformat != VAR_9
    && VAR_10->image_len + VAR_12 - 12 !=
       VAR_10->pixfmt.sizeimage) {
    FUNC_0(VAR_10, VAR_1, "wrong sized frame\n");
    goto discard;
   }
   FUNC_1(VAR_10, VAR_4,
     VAR_11 + 12, VAR_12 - 12);
  } else {


   FUNC_1(VAR_10, VAR_3,
     VAR_11 + 12, VAR_12 - 12);
  }


  goto scan_next;

discard:

  VAR_10->last_packet_type = VAR_0;

scan_next:
  VAR_16 -= VAR_12;
  VAR_11 += VAR_12;
 } while (VAR_16 > 0);
}
