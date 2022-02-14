
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tps65218 {TYPE_1__* dev; } ;
struct TYPE_2__ {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_1 (int ,char*,int*) ;
 int FUNC_2 (struct tps65218*,int ,int ,int,int ) ;

__attribute__((used)) static int FUNC_3(struct tps65218 *VAR_8)
{
 u32 VAR_9;
 int VAR_10;

 if (FUNC_1(VAR_8->dev->of_node,
     "ti,under-voltage-limit-microvolt", &VAR_9))
  return 0;

 switch (VAR_9) {
 case 2750000:
  VAR_10 = VAR_1;
  break;
 case 2950000:
  VAR_10 = VAR_2;
  break;
 case 3250000:
  VAR_10 = VAR_3;
  break;
 case 3350000:
  VAR_10 = VAR_4;
  break;
 default:
  FUNC_0(VAR_8->dev,
   "Invalid ti,under-voltage-limit-microvolt value\n");
  return -VAR_0;
 }

 FUNC_2(VAR_8, VAR_7,
        VAR_5, VAR_10,
        VAR_6);
 return 0;
}
