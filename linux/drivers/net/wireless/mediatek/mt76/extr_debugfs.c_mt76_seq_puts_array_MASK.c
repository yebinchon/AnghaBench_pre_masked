
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
typedef char const* s8 ;


 int FUNC_0 (struct seq_file*,char*,char const*) ;
 int FUNC_1 (struct seq_file*,char*) ;

void FUNC_2(struct seq_file *VAR_0, const char *VAR_1,
    s8 *VAR_2, int VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_0, "%10s:", VAR_1);
 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
  FUNC_0(VAR_0, " %2d", VAR_2[VAR_4]);
 FUNC_1(VAR_0, "\n");
}
