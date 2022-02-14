
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wm8350 {int dev; int regmap; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int,int *,int) ;

int FUNC_2(struct wm8350 *VAR_0, int VAR_1, int VAR_2,
        u16 *VAR_3)
{
 int VAR_4 = 0;

 VAR_4 = FUNC_1(VAR_0->regmap, VAR_1, VAR_3, VAR_2);
 if (VAR_4)
  FUNC_0(VAR_0->dev, "block read starting from R%d failed\n",
   VAR_1);

 return VAR_4;
}
