
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk_hw {int dummy; } ;
struct TYPE_2__ {int val; scalar_t__ div; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (unsigned long,int ) ;
 TYPE_1__* VAR_3 ;
 long FUNC_1 (struct clk_hw*,unsigned long,unsigned long*,int *,int ,int ) ;

__attribute__((used)) static long FUNC_2(struct clk_hw *VAR_4, unsigned long VAR_5,
        unsigned long VAR_6)
{
 unsigned long VAR_7 = 0, VAR_8, VAR_9;
 int VAR_10;

 if (VAR_6 == VAR_1)
  return FUNC_1(VAR_4, VAR_5, &VAR_6, ((void*)0),
       VAR_0,
       VAR_2);

 for (VAR_10 = 0; VAR_3[VAR_10].div; VAR_10++) {
  VAR_9 = FUNC_0(VAR_6, VAR_3[VAR_10].val);
  VAR_8 = FUNC_1(VAR_4, VAR_5, &VAR_9, ((void*)0),
           VAR_0,
           VAR_2);

  if (VAR_8 > VAR_5)
   continue;
  if (VAR_5 - VAR_8 < VAR_7 - VAR_8)
   VAR_7 = VAR_8;
 }

 return VAR_7;
}
