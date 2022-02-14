
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct imx214_mode {int reg_table; } ;
struct TYPE_2__ {int height; int width; } ;
struct imx214 {int mutex; int dev; int regmap; int ctrls; TYPE_1__ fmt; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct imx214*,int ) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int,int) ;
 struct imx214_mode* FUNC_7 (int ,int ,int ,int ,int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_8(struct imx214 *VAR_4)
{
 const struct imx214_mode *VAR_5;
 int VAR_6;

 FUNC_4(&VAR_4->mutex);
 VAR_6 = FUNC_3(VAR_4, VAR_2);
 if (VAR_6 < 0) {
  FUNC_2(VAR_4->dev, "could not sent common table %d\n", VAR_6);
  goto error;
 }

 VAR_5 = FUNC_7(VAR_1,
    FUNC_0(VAR_1), VAR_3, VAR_0,
    VAR_4->fmt.width, VAR_4->fmt.height);
 VAR_6 = FUNC_3(VAR_4, VAR_5->reg_table);
 if (VAR_6 < 0) {
  FUNC_2(VAR_4->dev, "could not sent mode table %d\n", VAR_6);
  goto error;
 }
 VAR_6 = FUNC_1(&VAR_4->ctrls);
 if (VAR_6 < 0) {
  FUNC_2(VAR_4->dev, "could not sync v4l2 controls\n");
  goto error;
 }
 VAR_6 = FUNC_6(VAR_4->regmap, 0x100, 1);
 if (VAR_6 < 0) {
  FUNC_2(VAR_4->dev, "could not sent start table %d\n", VAR_6);
  goto error;
 }

 FUNC_5(&VAR_4->mutex);
 return 0;

error:
 FUNC_5(&VAR_4->mutex);
 return VAR_6;
}
