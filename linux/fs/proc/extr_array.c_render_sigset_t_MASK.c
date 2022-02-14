
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
typedef int sigset_t ;


 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (struct seq_file*,char) ;
 int FUNC_1 (struct seq_file*,char const*) ;
 scalar_t__ FUNC_2 (int *,int) ;

void FUNC_3(struct seq_file *VAR_2, const char *VAR_3,
    sigset_t *VAR_4)
{
 int VAR_5;

 FUNC_1(VAR_2, VAR_3);

 VAR_5 = VAR_0;
 do {
  int VAR_6 = 0;

  VAR_5 -= 4;
  if (FUNC_2(VAR_4, VAR_5+1)) VAR_6 |= 1;
  if (FUNC_2(VAR_4, VAR_5+2)) VAR_6 |= 2;
  if (FUNC_2(VAR_4, VAR_5+3)) VAR_6 |= 4;
  if (FUNC_2(VAR_4, VAR_5+4)) VAR_6 |= 8;
  FUNC_0(VAR_2, VAR_1[VAR_6]);
 } while (VAR_5 >= 4);

 FUNC_0(VAR_2, '\n');
}
