
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct TYPE_3__ {unsigned int pin; int offset; int bit; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 unsigned int FUNC_1 (int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (struct regmap*,int ,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct regmap *VAR_1, unsigned int VAR_2,
   unsigned int VAR_3)
{
 unsigned int VAR_4, VAR_5, VAR_6;
 unsigned int VAR_7 = FUNC_0(VAR_0);
 unsigned int VAR_8;

 for (VAR_4 = 0; VAR_4 < VAR_7; VAR_4++) {
  if (VAR_2 == VAR_0[VAR_4].pin)
   break;
 }

 if (VAR_4 == VAR_7)
  return;

 VAR_8 = (VAR_3 >> 3);
 VAR_6 = FUNC_1(VAR_0[VAR_4].bit);
 if (!VAR_8)
  VAR_5 = VAR_6;
 else
  VAR_5 = 0;
 FUNC_2(VAR_1, VAR_0[VAR_4].offset, VAR_6, VAR_5);
}
