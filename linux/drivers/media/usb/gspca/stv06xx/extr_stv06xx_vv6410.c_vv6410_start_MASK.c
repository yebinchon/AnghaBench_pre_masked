
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct cam {TYPE_1__* cam_mode; } ;
struct TYPE_4__ {size_t curr_mode; struct cam cam; } ;
struct sd {TYPE_2__ gspca_dev; } ;
struct gspca_dev {int dummy; } ;
struct TYPE_3__ {int priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct gspca_dev*,int ,char*) ;
 int FUNC_1 (struct sd*,int ,int) ;
 int FUNC_2 (struct sd*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct sd *VAR_9)
{
 int VAR_10;
 struct gspca_dev *VAR_11 = (struct gspca_dev *)VAR_9;
 struct cam *VAR_12 = &VAR_9->gspca_dev.cam;
 u32 VAR_13 = VAR_12->cam_mode[VAR_9->gspca_dev.curr_mode].priv;

 if (VAR_13 & VAR_8) {
  FUNC_0(VAR_11, VAR_0, "Enabling subsampling\n");
  FUNC_1(VAR_9, VAR_6, 0x02);
  FUNC_1(VAR_9, VAR_5, 0x06);

  FUNC_1(VAR_9, VAR_4, 0x10);
 } else {
  FUNC_1(VAR_9, VAR_6, 0x01);
  FUNC_1(VAR_9, VAR_5, 0x0a);
  FUNC_1(VAR_9, VAR_4, 0x00);

 }


 VAR_10 = FUNC_1(VAR_9, VAR_3, VAR_2);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_10 = FUNC_2(VAR_9, VAR_7, 0);
 if (VAR_10 < 0)
  return VAR_10;

 FUNC_0(VAR_11, VAR_1, "Starting stream\n");

 return 0;
}
