
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max77620_pctrl_info {int dev; int rmap; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int,unsigned int*) ;

__attribute__((used)) static int FUNC_2(struct max77620_pctrl_info *VAR_2,
        int VAR_3, int *VAR_4)
{
 unsigned int VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_2->rmap, VAR_3, &VAR_5);
 if (VAR_6 < 0) {
  FUNC_0(VAR_2->dev, "Reg PUE_GPIO read failed: %d\n", VAR_6);
  return VAR_6;
 }
 *VAR_4 = (VAR_5 & VAR_0) >> VAR_1;

 return 0;
}
