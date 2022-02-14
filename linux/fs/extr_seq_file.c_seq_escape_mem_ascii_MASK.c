
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;


 int FUNC_0 (struct seq_file*,int) ;
 size_t FUNC_1 (struct seq_file*,char**) ;
 int FUNC_2 (char const*,size_t,char*,size_t) ;

void FUNC_3(struct seq_file *VAR_0, const char *VAR_1, size_t VAR_2)
{
 char *VAR_3;
 size_t VAR_4 = FUNC_1(VAR_0, &VAR_3);
 int VAR_5;

 VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4);
 FUNC_0(VAR_0, VAR_5 < VAR_4 ? VAR_5 : -1);
}
