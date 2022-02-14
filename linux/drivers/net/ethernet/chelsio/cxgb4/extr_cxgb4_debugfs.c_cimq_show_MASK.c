
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct seq_file {int dummy; } ;


 int FUNC_0 (struct seq_file*,char*,int,int const,int const,int const,int const) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_0, void *VAR_1, int VAR_2)
{
 const u32 *VAR_3 = VAR_1;

 FUNC_0(VAR_0, "%#06x: %08x %08x %08x %08x\n", VAR_2 * 16, VAR_3[0], VAR_3[1],
     VAR_3[2], VAR_3[3]);
 return 0;
}
