
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct goldfish_pipe_dev {int lock; int ** pipes; } ;
struct goldfish_pipe {size_t id; scalar_t__ command_buffer; struct goldfish_pipe_dev* dev; } ;
struct file {struct goldfish_pipe* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (struct goldfish_pipe*,int ) ;
 int FUNC_2 (struct goldfish_pipe*) ;
 int FUNC_3 (struct goldfish_pipe_dev*,struct goldfish_pipe*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_1, struct file *VAR_2)
{
 unsigned long VAR_3;
 struct goldfish_pipe *VAR_4 = VAR_2->private_data;
 struct goldfish_pipe_dev *VAR_5 = VAR_4->dev;


 FUNC_1(VAR_4, VAR_0);

 FUNC_4(&VAR_5->lock, VAR_3);
 VAR_5->pipes[VAR_4->id] = ((void*)0);
 FUNC_3(VAR_5, VAR_4);
 FUNC_5(&VAR_5->lock, VAR_3);

 VAR_2->private_data = ((void*)0);
 FUNC_0((unsigned long)VAR_4->command_buffer);
 FUNC_2(VAR_4);
 return 0;
}
