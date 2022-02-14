
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;


 int FUNC_0 (struct seq_file*,char*,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct seq_file *VAR_0,
  unsigned int VAR_1,
  unsigned int VAR_2)
{
 FUNC_0(VAR_0, ",vers=%u", VAR_1);
 if (VAR_1 == 4)
  FUNC_0(VAR_0, ".%u", VAR_2);
}
