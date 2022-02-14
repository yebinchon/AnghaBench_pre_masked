
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_pipe; } ;
struct file {int private_data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct file*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct file*) ;
 struct file* FUNC_2 (struct file*,int,int *) ;
 struct file* FUNC_3 (struct inode*,int ,char*,int,int *) ;
 int FUNC_4 (struct file*) ;
 int FUNC_5 (int ) ;
 struct inode* FUNC_6 () ;
 int FUNC_7 (struct inode*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (struct inode*,int ) ;

int FUNC_9(struct file **VAR_7, int VAR_8)
{
 struct inode *VAR_9 = FUNC_6();
 struct file *VAR_10;

 if (!VAR_9)
  return -VAR_0;

 VAR_10 = FUNC_3(VAR_9, VAR_5, "",
    VAR_4 | (VAR_8 & (VAR_2 | VAR_1)),
    &VAR_6);
 if (FUNC_0(VAR_10)) {
  FUNC_5(VAR_9->i_pipe);
  FUNC_7(VAR_9);
  return FUNC_1(VAR_10);
 }

 VAR_10->private_data = VAR_9->i_pipe;

 VAR_7[0] = FUNC_2(VAR_10, VAR_3 | (VAR_8 & VAR_2),
      &VAR_6);
 if (FUNC_0(VAR_7[0])) {
  FUNC_8(VAR_9, VAR_9->i_pipe);
  FUNC_4(VAR_10);
  return FUNC_1(VAR_7[0]);
 }
 VAR_7[0]->private_data = VAR_9->i_pipe;
 VAR_7[1] = VAR_10;
 return 0;
}
