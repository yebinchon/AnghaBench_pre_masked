
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_tab {int (* show ) (struct seq_file*,void*,int) ;char* data; int width; } ;
struct seq_file {struct seq_tab* private; } ;


 int FUNC_0 (struct seq_file*,void*,int) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_0, void *VAR_1)
{
 const struct seq_tab *VAR_2 = VAR_0->private;

 return VAR_2->show(VAR_0, VAR_1, ((char *)VAR_1 - VAR_2->data) / VAR_2->width);
}
