
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct device_node {int dummy; } ;
struct denali_controller {int dev; } ;
struct denali_chip {int nsels; int chip; TYPE_1__* sels; } ;
struct TYPE_2__ {int bank; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct denali_controller*,struct denali_chip*) ;
 struct denali_chip* FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *,struct device_node*) ;
 int FUNC_3 (struct device_node*,char*) ;
 int FUNC_4 (struct device_node*,char*,int,int *) ;
 int VAR_2 ;
 int FUNC_5 (struct denali_chip*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct denali_controller *VAR_3,
          struct device_node *VAR_4)
{
 struct denali_chip *VAR_5;
 u32 VAR_6;
 int VAR_7, VAR_8, VAR_9;

 VAR_7 = FUNC_3(VAR_4, "reg");
 if (VAR_7 < 0)
  return VAR_7;

 VAR_5 = FUNC_1(VAR_3->dev, FUNC_5(VAR_5, VAR_2, VAR_7),
        VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->nsels = VAR_7;

 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  VAR_9 = FUNC_4(VAR_4, "reg", VAR_8, &VAR_6);
  if (VAR_9)
   return VAR_9;

  VAR_5->sels[VAR_8].bank = VAR_6;

  FUNC_2(&VAR_5->chip, VAR_4);
 }

 return FUNC_0(VAR_3, VAR_5);
}
