
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reg_table {int n; int regs; } ;
struct mt7601u_dev {int temp_mode; size_t bw; } ;


 int VAR_0 ;
 struct reg_table** VAR_1 ;
 int FUNC_0 (struct mt7601u_dev*,int ,int ,int ) ;
 int FUNC_1 (struct mt7601u_dev*,int) ;

__attribute__((used)) static int FUNC_2(struct mt7601u_dev *VAR_2, int VAR_3, const char *VAR_4)
{
 const struct reg_table *VAR_5;
 int VAR_6;

 if (VAR_2->temp_mode == VAR_3)
  return 0;

 VAR_2->temp_mode = VAR_3;
 FUNC_1(VAR_2, VAR_3);

 VAR_5 = VAR_1[VAR_2->temp_mode];
 VAR_6 = FUNC_0(VAR_2, VAR_0,
          VAR_5[2].regs, VAR_5[2].n);
 if (VAR_6)
  return VAR_6;

 return FUNC_0(VAR_2, VAR_0,
           VAR_5[VAR_2->bw].regs, VAR_5[VAR_2->bw].n);
}
