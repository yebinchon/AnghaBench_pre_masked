
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pipe_inode_info {int files; } ;
struct inode {int i_lock; int * i_pipe; } ;


 int FUNC_0 (struct pipe_inode_info*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct inode *VAR_0, struct pipe_inode_info *VAR_1)
{
 int VAR_2 = 0;

 FUNC_1(&VAR_0->i_lock);
 if (!--VAR_1->files) {
  VAR_0->i_pipe = ((void*)0);
  VAR_2 = 1;
 }
 FUNC_2(&VAR_0->i_lock);

 if (VAR_2)
  FUNC_0(VAR_1);
}
