
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct seq_file {int private; } ;


 int FUNC_0 (struct seq_file*,char*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int *,int) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_0, void *VAR_1)
{
 u32 VAR_2[10];

 FUNC_1(VAR_0->private, VAR_2, 1);
 FUNC_0(VAR_0, "%08x%08x%08x%08x%08x%08x%08x%08x%08x%08x\n",
     VAR_2[9], VAR_2[8], VAR_2[7], VAR_2[6], VAR_2[5], VAR_2[4], VAR_2[3],
     VAR_2[2], VAR_2[1], VAR_2[0]);
 return 0;
}
