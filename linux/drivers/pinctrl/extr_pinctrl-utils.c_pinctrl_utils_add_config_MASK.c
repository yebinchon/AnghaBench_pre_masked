
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 unsigned long* FUNC_1 (unsigned long*,int,int ) ;

int FUNC_2(struct pinctrl_dev *VAR_2,
  unsigned long **VAR_3, unsigned *VAR_4,
  unsigned long VAR_5)
{
 unsigned VAR_6 = *VAR_4;
 unsigned VAR_7 = VAR_6 + 1;
 unsigned long *VAR_8;

 VAR_8 = FUNC_1(*VAR_3, sizeof(*VAR_8) * VAR_7,
          VAR_1);
 if (!VAR_8) {
  FUNC_0(VAR_2->dev, "krealloc(configs) failed\n");
  return -VAR_0;
 }

 VAR_8[VAR_6] = VAR_5;

 *VAR_3 = VAR_8;
 *VAR_4 = VAR_7;

 return 0;
}
