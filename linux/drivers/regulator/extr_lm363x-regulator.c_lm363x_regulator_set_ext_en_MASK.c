
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct TYPE_2__ {int enable_reg; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;


 TYPE_1__* VAR_3 ;
 int FUNC_0 (struct regmap*,int ,int,int) ;

__attribute__((used)) static int FUNC_1(struct regmap *VAR_4, int VAR_5)
{
 int VAR_6 = 0;

 switch (VAR_5) {
 case 128:
 case 129:
  VAR_6 = VAR_2;
  break;
 case 130:
 case 131:
  VAR_6 = VAR_1;
  break;
 default:
  return -VAR_0;
 }

 return FUNC_0(VAR_4, VAR_3[VAR_5].enable_reg,
     VAR_6, VAR_6);
}
