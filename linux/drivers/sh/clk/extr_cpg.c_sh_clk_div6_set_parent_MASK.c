
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_div_mult_table {int nr_divisors; } ;
struct clk {int parent_num; int src_width; int src_shift; int freq_table; struct clk** parent_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct clk*,int ,int ,struct clk_div_mult_table*,int *) ;
 int FUNC_1 (struct clk*,struct clk*) ;
 struct clk_div_mult_table* FUNC_2 (struct clk*) ;
 int FUNC_3 (struct clk*) ;
 int FUNC_4 (int,struct clk*) ;

__attribute__((used)) static int FUNC_5(struct clk *VAR_2, struct clk *VAR_3)
{
 struct clk_div_mult_table *VAR_4 = FUNC_2(VAR_2);
 u32 VAR_5;
 int VAR_6, VAR_7;

 if (!VAR_2->parent_table || !VAR_2->parent_num)
  return -VAR_0;


 for (VAR_7 = 0; VAR_7 < VAR_2->parent_num; VAR_7++)
  if (VAR_2->parent_table[VAR_7] == VAR_3)
   break;

 if (VAR_7 == VAR_2->parent_num)
  return -VAR_1;

 VAR_6 = FUNC_1(VAR_2, VAR_3);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_5 = FUNC_3(VAR_2) &
  ~(((1 << VAR_2->src_width) - 1) << VAR_2->src_shift);

 FUNC_4(VAR_5 | (VAR_7 << VAR_2->src_shift), VAR_2);


 FUNC_0(VAR_2, VAR_2->freq_table, VAR_4->nr_divisors,
        VAR_4, ((void*)0));

 return 0;
}
