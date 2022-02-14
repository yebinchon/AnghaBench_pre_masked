
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct ci_hdrc* private; } ;
struct ci_hdrc {int dev; int lock; } ;


 unsigned int FUNC_0 (struct ci_hdrc*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct seq_file*,char*,unsigned int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct seq_file *VAR_0, void *VAR_1)
{
 struct ci_hdrc *VAR_2 = VAR_0->private;
 unsigned long VAR_3;
 unsigned VAR_4;

 FUNC_1(VAR_2->dev);
 FUNC_4(&VAR_2->lock, VAR_3);
 VAR_4 = FUNC_0(VAR_2);
 FUNC_5(&VAR_2->lock, VAR_3);
 FUNC_2(VAR_2->dev);

 FUNC_3(VAR_0, "mode = %u\n", VAR_4);

 return 0;
}
