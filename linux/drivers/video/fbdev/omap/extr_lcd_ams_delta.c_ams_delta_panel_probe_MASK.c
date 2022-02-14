
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct TYPE_2__ {int max_contrast; } ;
struct lcd_device {TYPE_1__ props; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct lcd_device*) ;
 int FUNC_1 (struct lcd_device*) ;
 int VAR_4 ;
 int FUNC_2 (struct lcd_device*,int ) ;
 int FUNC_3 (struct lcd_device*,int ) ;
 int VAR_5 ;
 int FUNC_4 (int *,char*,...) ;
 struct lcd_device* FUNC_5 (int *,char*,int ) ;
 struct lcd_device* VAR_6 ;
 struct lcd_device* VAR_7 ;
 struct lcd_device* FUNC_6 (char*,int *,int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct platform_device*,struct lcd_device*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_8)
{
 struct lcd_device *VAR_9 = ((void*)0);
 int VAR_10;

 VAR_7 = FUNC_5(&VAR_8->dev, "vblen", VAR_3);
 if (FUNC_0(VAR_7)) {
  VAR_10 = FUNC_1(VAR_7);
  FUNC_4(&VAR_8->dev, "VBLEN GPIO request failed (%d)\n", VAR_10);
  return VAR_10;
 }

 VAR_6 = FUNC_5(&VAR_8->dev, "ndisp", VAR_3);
 if (FUNC_0(VAR_6)) {
  VAR_10 = FUNC_1(VAR_6);
  FUNC_4(&VAR_8->dev, "NDISP GPIO request failed (%d)\n", VAR_10);
  return VAR_10;
 }
 FUNC_2(VAR_9, VAR_0);
 FUNC_3(VAR_9, VAR_2);

 FUNC_7(&VAR_5);
 return 0;
}
