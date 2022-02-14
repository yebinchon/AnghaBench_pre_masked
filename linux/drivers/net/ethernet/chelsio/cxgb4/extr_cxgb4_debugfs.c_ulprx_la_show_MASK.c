
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct seq_file {int dummy; } ;


 void* VAR_0 ;
 int FUNC_0 (struct seq_file*,char*,int const,int const,int const,int const,int const,int const,int const,int const) ;
 int FUNC_1 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_1, void *VAR_2, int VAR_3)
{
 const u32 *VAR_4 = VAR_2;

 if (VAR_2 == VAR_0)
  FUNC_1(VAR_1, "      Pcmd        Type   Message"
    "                Data\n");
 else
  FUNC_0(VAR_1, "%08x%08x  %4x  %08x  %08x%08x%08x%08x\n",
      VAR_4[1], VAR_4[0], VAR_4[2], VAR_4[3], VAR_4[7], VAR_4[6], VAR_4[5], VAR_4[4]);
 return 0;
}
