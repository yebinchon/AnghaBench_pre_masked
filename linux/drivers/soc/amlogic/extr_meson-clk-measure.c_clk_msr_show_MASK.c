
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct meson_msr_id* private; } ;
struct meson_msr_id {int dummy; } ;


 int FUNC_0 (struct meson_msr_id*,unsigned int*) ;
 int FUNC_1 (struct seq_file*,char*,int,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_0, void *VAR_1)
{
 struct meson_msr_id *VAR_2 = VAR_0->private;
 unsigned int VAR_3 = 0;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2, &VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 FUNC_1(VAR_0, "%d\t+/-%dHz\n", VAR_4, VAR_3);

 return 0;
}
