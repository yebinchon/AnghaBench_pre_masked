
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct devlog_info* private; } ;
struct devlog_info {int dummy; } ;
typedef int loff_t ;


 void* FUNC_0 (struct devlog_info*,int ) ;

__attribute__((used)) static void *FUNC_1(struct seq_file *VAR_0, void *VAR_1, loff_t *VAR_2)
{
 struct devlog_info *VAR_3 = VAR_0->private;

 (*VAR_2)++;
 return FUNC_0(VAR_3, *VAR_2);
}
