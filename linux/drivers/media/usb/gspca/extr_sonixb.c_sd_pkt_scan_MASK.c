
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sd {scalar_t__ bridge; int* header; int prev_avg_lum; int frames_to_drop; int avg_lum; } ;
struct cam {TYPE_1__* cam_mode; } ;
struct gspca_dev {size_t curr_mode; int image_len; struct cam cam; } ;
struct TYPE_2__ {int priv; int sizeimage; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int) ;
 int * FUNC_1 (struct gspca_dev*,int *,int) ;
 int FUNC_2 (struct gspca_dev*,int ,int *,int) ;

__attribute__((used)) static void FUNC_3(struct gspca_dev *VAR_5,
   u8 *VAR_6,
   int VAR_7)
{
 int VAR_8 = 0, VAR_9 = 0, VAR_10 = 0;
 struct sd *VAR_11 = (struct sd *) VAR_5;
 struct cam *VAR_12 = &VAR_5->cam;
 u8 *VAR_13;

 VAR_13 = FUNC_1(VAR_5, VAR_6, VAR_7);
 if (VAR_13) {
  if (VAR_11->bridge == VAR_0) {
   VAR_8 = 18;
   VAR_9 = 3;
  } else {
   VAR_8 = 12;
   VAR_9 = 2;
  }

  VAR_10 = VAR_7 - (VAR_13 - VAR_6);
  VAR_7 = (VAR_13 - VAR_6) - VAR_8;
  if (VAR_7 < 0)
   VAR_7 = 0;
 }

 if (VAR_12->cam_mode[VAR_5->curr_mode].priv & VAR_4) {


  int VAR_14;
  int VAR_15 = VAR_12->cam_mode[VAR_5->curr_mode].sizeimage;

  VAR_14 = VAR_5->image_len;
  if (VAR_14 + VAR_7 > VAR_15)
   VAR_7 = VAR_15 - VAR_14;
 }

 FUNC_2(VAR_5, VAR_2, VAR_6, VAR_7);

 if (VAR_13) {
  int VAR_16 = VAR_11->header[VAR_9] +
     (VAR_11->header[VAR_9 + 1] << 8);
  if (VAR_16 == 0 && VAR_11->prev_avg_lum != 0) {
   VAR_16 = -1;
   VAR_11->frames_to_drop = 2;
   VAR_11->prev_avg_lum = 0;
  } else
   VAR_11->prev_avg_lum = VAR_16;
  FUNC_0(&VAR_11->avg_lum, VAR_16);

  if (VAR_11->frames_to_drop)
   VAR_11->frames_to_drop--;
  else
   FUNC_2(VAR_5, VAR_3, ((void*)0), 0);

  FUNC_2(VAR_5, VAR_1, VAR_13, VAR_10);
 }
}
