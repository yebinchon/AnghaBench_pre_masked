
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct seq_file*,int) ;
 size_t FUNC_1 (struct seq_file*,char**) ;
 int FUNC_2 (char const*,char*,size_t,int ,char const*) ;

void FUNC_3(struct seq_file *VAR_1, const char *VAR_2, const char *VAR_3)
{
 char *VAR_4;
 size_t VAR_5 = FUNC_1(VAR_1, &VAR_4);
 int VAR_6;

 VAR_6 = FUNC_2(VAR_2, VAR_4, VAR_5, VAR_0, VAR_3);
 FUNC_0(VAR_1, VAR_6 < VAR_5 ? VAR_6 : -1);
}
