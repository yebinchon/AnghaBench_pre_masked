
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct backlight_device {int dummy; } ;
struct appledisplay {int* msgdata; int sysfslock; int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct appledisplay* FUNC_0 (struct backlight_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int ,int,int ,int ,int*,int,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct backlight_device *VAR_6)
{
 struct appledisplay *VAR_7 = FUNC_0(VAR_6);
 int VAR_8, VAR_9;

 FUNC_1(&VAR_7->sysfslock);
 VAR_8 = FUNC_3(
  VAR_7->udev,
  FUNC_4(VAR_7->udev, 0),
  VAR_4,
  VAR_2 | VAR_5 | VAR_3,
  VAR_0,
  0,
  VAR_7->msgdata, 2,
  VAR_1);
 VAR_9 = VAR_7->msgdata[1];
 FUNC_2(&VAR_7->sysfslock);

 if (VAR_8 < 0)
  return VAR_8;
 else
  return VAR_9;
}
