
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct seq_file {int dummy; } ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (struct seq_file*,char*,char const*,unsigned int,unsigned int,char*) ;
 int FUNC_1 (scalar_t__,int,int ,char*,int) ;

__attribute__((used)) static void FUNC_2(struct seq_file *VAR_1, const char *VAR_2,
       unsigned int VAR_3, unsigned int VAR_4)
{
 char VAR_5[40];

 FUNC_1((u64)VAR_4 - VAR_3 + 1, 1, VAR_0, VAR_5,
   sizeof(VAR_5));
 FUNC_0(VAR_1, "%-15s %#x-%#x [%s]\n", VAR_2, VAR_3, VAR_4, VAR_5);
}
