
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_tab {unsigned int rows; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct seq_tab *VAR_1, unsigned int VAR_2)
{
 if (VAR_2 > VAR_1->rows)
  return -VAR_0;
 VAR_1->rows = VAR_2;
 return 0;
}
