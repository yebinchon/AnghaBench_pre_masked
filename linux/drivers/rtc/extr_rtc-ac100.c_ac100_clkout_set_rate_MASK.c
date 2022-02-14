
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk_hw {int dummy; } ;
struct ac100_clkout {int offset; int regmap; } ;
struct TYPE_2__ {unsigned long div; int val; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 int FUNC_0 (unsigned long,unsigned long,int *,int,int ) ;
 int FUNC_1 (int ,int ,int,int) ;
 struct ac100_clkout* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_7, unsigned long VAR_8,
     unsigned long VAR_9)
{
 struct ac100_clkout *VAR_10 = FUNC_2(VAR_7);
 int VAR_11 = 0, VAR_12 = 0;

 do {
  VAR_11 = FUNC_0(VAR_8 * VAR_6[VAR_12].div,
          VAR_9, ((void*)0), VAR_1,
          VAR_5);
  if (VAR_11 >= 0)
   break;
 } while (VAR_9 != VAR_4 &&
   VAR_6[++VAR_12].div);

 if (VAR_11 < 0)
  return VAR_11;

 VAR_12 = VAR_6[VAR_12].val;

 FUNC_1(VAR_10->regmap, VAR_10->offset,
      ((1 << VAR_1) - 1) << VAR_0 |
      ((1 << VAR_3) - 1) << VAR_2,
      (VAR_11 - 1) << VAR_0 |
      (VAR_12 - 1) << VAR_2);

 return 0;
}
