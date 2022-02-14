
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct axp288_fg_info {void* status; TYPE_1__* pdev; int * iio_channel; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct axp288_fg_info*,int ) ;
 int FUNC_2 (int ,int*) ;

__attribute__((used)) static void FUNC_3(struct axp288_fg_info *VAR_9)
{
 int VAR_10, VAR_11, VAR_12, VAR_13;

 VAR_10 = FUNC_1(VAR_9, VAR_1);
 if (VAR_10 < 0) {
  FUNC_0(&VAR_9->pdev->dev,
   "PWR STAT read failed:%d\n", VAR_10);
  return;
 }


 if (!(VAR_10 & VAR_8))
  goto not_full;

 VAR_11 = FUNC_1(VAR_9, VAR_0);
 if (VAR_11 < 0) {
  FUNC_0(&VAR_9->pdev->dev, "FG RES read failed: %d\n", VAR_11);
  return;
 }
 if (!(VAR_11 & VAR_3))
  goto not_full;

 VAR_11 &= ~VAR_3;
 if (VAR_11 == 100) {
  VAR_9->status = VAR_6;
  return;
 }






 if (VAR_11 < 90 || (VAR_10 & VAR_7))
  goto not_full;

 VAR_13 = FUNC_2(VAR_9->iio_channel[VAR_2], &VAR_12);
 if (VAR_13 < 0) {
  FUNC_0(&VAR_9->pdev->dev, "FG get current failed: %d\n", VAR_13);
  return;
 }
 if (VAR_12 == 0) {
  VAR_9->status = VAR_6;
  return;
 }

not_full:
 if (VAR_10 & VAR_7)
  VAR_9->status = VAR_4;
 else
  VAR_9->status = VAR_5;
}
