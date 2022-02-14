
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct seq_file {int dummy; } ;


 int FUNC_0 (struct seq_file*,char*,...) ;

__attribute__((used)) static void FUNC_1(struct seq_file *VAR_0, u32 VAR_1, char *VAR_2)
{
 FUNC_0(VAR_0, "%s\t0x%08X\t", VAR_2, VAR_1);
 FUNC_0(VAR_0, "%dx%d\n", VAR_1 & 0x1FFF, (VAR_1 >> 16) & 0x1FFF);
}
