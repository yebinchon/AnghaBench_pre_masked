
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
typedef int atomic_long_t ;


 unsigned long FUNC_0 (int *) ;
 int FUNC_1 (struct seq_file*,char*,unsigned long,char*) ;

__attribute__((used)) static void FUNC_2(struct seq_file *VAR_0, atomic_long_t *VAR_1, char *VAR_2)
{
 unsigned long VAR_3 = FUNC_0(VAR_1);

 FUNC_1(VAR_0, "%16lu %s\n", VAR_3, VAR_2);
}
