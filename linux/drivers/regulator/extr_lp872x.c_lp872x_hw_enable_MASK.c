
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lp872x {scalar_t__ chipid; int dev; TYPE_1__* pdata; } ;
struct TYPE_2__ {int enable_gpio; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 double VAR_3 ;
 double VAR_4 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int,int ,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (double,double) ;

__attribute__((used)) static int FUNC_4(struct lp872x *VAR_5)
{
 int VAR_6, VAR_7;

 if (!VAR_5->pdata)
  return -VAR_0;

 VAR_7 = VAR_5->pdata->enable_gpio;
 if (!FUNC_2(VAR_7))
  return 0;


 VAR_6 = FUNC_1(VAR_5->dev, VAR_7, VAR_1, "LP872X EN");
 if (VAR_6) {
  FUNC_0(VAR_5->dev, "gpio request err: %d\n", VAR_6);
  return VAR_6;
 }


 if (VAR_5->chipid == VAR_2)
  FUNC_3(VAR_3, 1.5 * VAR_3);
 else
  FUNC_3(VAR_4, 1.5 * VAR_4);

 return 0;
}
