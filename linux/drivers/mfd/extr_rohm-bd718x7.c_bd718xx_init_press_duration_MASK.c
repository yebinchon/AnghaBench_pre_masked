
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct device {int of_node; } ;
struct TYPE_2__ {int regmap; struct device* dev; } ;
struct bd718xx {TYPE_1__ chip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (unsigned int,int) ;
 int FUNC_2 (int ,char*,int*) ;
 int FUNC_3 (int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct bd718xx *VAR_3)
{
 struct device* VAR_4 = VAR_3->chip.dev;
 u32 VAR_5, VAR_6;
 u32 VAR_7, VAR_8;
 int VAR_9;

 VAR_9 = FUNC_2(VAR_4->of_node, "rohm,short-press-ms",
       &VAR_5);
 if (!VAR_9) {
  VAR_7 = FUNC_1(15u, (VAR_5 + 250) / 500);
  VAR_9 = FUNC_3(VAR_3->chip.regmap,
      VAR_1,
      VAR_0,
      VAR_7);
  if (VAR_9) {
   FUNC_0(VAR_4, "Failed to init pwron short press\n");
   return VAR_9;
  }
 }

 VAR_9 = FUNC_2(VAR_4->of_node, "rohm,long-press-ms",
       &VAR_6);
 if (!VAR_9) {
  VAR_8 = FUNC_1(15u, (VAR_6 + 500) / 1000);
  VAR_9 = FUNC_3(VAR_3->chip.regmap,
      VAR_2,
      VAR_0,
      VAR_8);
  if (VAR_9) {
   FUNC_0(VAR_4, "Failed to init pwron long press\n");
   return VAR_9;
  }
 }

 return 0;
}
