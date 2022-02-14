
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
struct seq_file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct seq_file*,unsigned long long const,int ) ;
 int FUNC_1 (struct seq_file*,char) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_2, void *VAR_3, int VAR_4)
{
 const u64 *VAR_5 = VAR_3;

 if (VAR_4)
  FUNC_1(VAR_2, '\n');
 FUNC_0(VAR_2, VAR_5[0], VAR_1);
 if (VAR_4 < (VAR_0 / 2 - 1) || VAR_5[1] != ~0ULL)
  FUNC_0(VAR_2, VAR_5[1], VAR_1);
 return 0;
}
