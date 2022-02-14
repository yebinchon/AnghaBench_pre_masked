
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct cam {TYPE_1__* cam_mode; } ;
struct gspca_dev {size_t curr_mode; int image_len; struct cam cam; } ;
struct TYPE_2__ {int sizeimage; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gspca_dev*,int ,int *,int) ;
 int FUNC_1 (struct gspca_dev*,int *,int) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_2, u8 *VAR_3, int VAR_4)
{
 struct cam *VAR_5 = &VAR_2->cam;
 int VAR_6 = VAR_5->cam_mode[VAR_2->curr_mode].sizeimage;

 if (VAR_2->image_len == 0) {
  FUNC_0(VAR_2, VAR_0, VAR_3, VAR_4);
  return;
 }

 if (VAR_2->image_len + VAR_4 >= VAR_6) {
  FUNC_1(VAR_2, VAR_3, VAR_4);
  return;
 }

 FUNC_0(VAR_2, VAR_1, VAR_3, VAR_4);
}
