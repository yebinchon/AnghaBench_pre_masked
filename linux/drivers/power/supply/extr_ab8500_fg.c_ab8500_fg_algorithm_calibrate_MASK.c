
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int calibrate; } ;
struct ab8500_fg {int calib_state; int fg_periodic_work; int fg_wq; TYPE_1__ flags; int dev; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int *,int ) ;

__attribute__((used)) static void FUNC_4(struct ab8500_fg *VAR_6)
{
 int VAR_7;

 switch (VAR_6->calib_state) {
 case 129:
  FUNC_1(VAR_6->dev, "Calibration ongoing...\n");

  VAR_7 = FUNC_0(VAR_6->dev,
   VAR_1, VAR_0,
   VAR_3, VAR_4);
  if (VAR_7 < 0)
   goto err;

  VAR_7 = FUNC_0(VAR_6->dev,
   VAR_1, VAR_0,
   VAR_2, VAR_2);
  if (VAR_7 < 0)
   goto err;
  VAR_6->calib_state = 128;
  break;
 case 130:
  VAR_7 = FUNC_0(VAR_6->dev,
   VAR_1, VAR_0,
   VAR_5, VAR_5);
  if (VAR_7 < 0)
   goto err;
  VAR_6->flags.calibrate = 0;
  FUNC_1(VAR_6->dev, "Calibration done...\n");
  FUNC_3(VAR_6->fg_wq, &VAR_6->fg_periodic_work, 0);
  break;
 case 128:
  FUNC_1(VAR_6->dev, "Calibration WFI\n");
 default:
  break;
 }
 return;
err:

 FUNC_2(VAR_6->dev, "failed to calibrate the CC\n");
 VAR_6->flags.calibrate = 0;
 VAR_6->calib_state = 129;
 FUNC_3(VAR_6->fg_wq, &VAR_6->fg_periodic_work, 0);
}
