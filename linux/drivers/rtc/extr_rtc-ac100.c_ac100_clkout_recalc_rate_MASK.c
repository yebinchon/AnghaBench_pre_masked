
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;
struct ac100_clkout {int offset; int regmap; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int * VAR_6 ;
 unsigned long FUNC_1 (struct clk_hw*,unsigned long,unsigned int,int *,int ,int) ;
 int FUNC_2 (int ,int ,unsigned int*) ;
 struct ac100_clkout* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_4(struct clk_hw *VAR_7,
           unsigned long VAR_8)
{
 struct ac100_clkout *VAR_9 = FUNC_3(VAR_7);
 unsigned int VAR_10, VAR_11;

 FUNC_2(VAR_9->regmap, VAR_9->offset, &VAR_10);


 if (VAR_8 != VAR_4) {
  VAR_11 = (VAR_10 >> VAR_2) &
   ((1 << VAR_3) - 1);
  VAR_8 = FUNC_1(VAR_7, VAR_8, VAR_11,
         VAR_6, 0,
         VAR_3);
 }

 VAR_11 = (VAR_10 >> VAR_0) &
  (FUNC_0(VAR_1) - 1);
 return FUNC_1(VAR_7, VAR_8, VAR_11, ((void*)0),
       VAR_5,
       VAR_1);
}
