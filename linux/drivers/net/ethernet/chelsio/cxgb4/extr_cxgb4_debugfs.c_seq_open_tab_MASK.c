
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_tab {int (* show ) (struct seq_file*,void*,int) ;unsigned int rows; unsigned int width; int skip_first; } ;
struct file {int dummy; } ;


 struct seq_tab* FUNC_0 (struct file*,int *,int) ;
 int VAR_0 ;

struct seq_tab *FUNC_1(struct file *VAR_1, unsigned int VAR_2,
        unsigned int VAR_3, unsigned int VAR_4,
        int (*VAR_5)(struct seq_file *VAR_6, void *VAR_7, int VAR_8))
{
 struct seq_tab *VAR_9;

 VAR_9 = FUNC_0(VAR_1, &VAR_0, sizeof(*VAR_9) + VAR_2 * VAR_3);
 if (VAR_9) {
  VAR_9->show = VAR_5;
  VAR_9->rows = VAR_2;
  VAR_9->width = VAR_3;
  VAR_9->skip_first = VAR_4 != 0;
 }
 return VAR_9;
}
