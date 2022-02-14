
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reg_table {int n; int regs; } ;
struct mt7601u_dev {size_t temp_mode; size_t bw; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 struct reg_table** VAR_3 ;
 int FUNC_1 (struct mt7601u_dev*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct mt7601u_dev *VAR_4)
{
 const struct reg_table *VAR_5;

 if (FUNC_0(VAR_4->temp_mode > VAR_2))
  return -VAR_0;

 VAR_5 = &VAR_3[VAR_4->temp_mode][VAR_4->bw];

 return FUNC_1(VAR_4, VAR_1, VAR_5->regs, VAR_5->n);
}
