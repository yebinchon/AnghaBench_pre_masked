
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct seq_file {int dummy; } ;


 int FUNC_0 (struct seq_file*,char*,int,int ,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_0, void *VAR_1, int VAR_2)
{
 u16 *VAR_3 = VAR_1;

 FUNC_0(VAR_0, "%4d:  %4u  %4u  %4u  %4u  %4u  %4u  %4u  %4u\n",
     VAR_2 * 8, VAR_3[0], VAR_3[1], VAR_3[2], VAR_3[3], VAR_3[4],
     VAR_3[5], VAR_3[6], VAR_3[7]);
 return 0;
}
