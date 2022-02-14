
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fs_struct {int users; int lock; int pwd; int root; int umask; int seq; scalar_t__ in_exec; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct fs_struct* FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

struct fs_struct *FUNC_6(struct fs_struct *VAR_2)
{
 struct fs_struct *VAR_3 = FUNC_0(VAR_1, VAR_0);

 if (VAR_3) {
  VAR_3->users = 1;
  VAR_3->in_exec = 0;
  FUNC_4(&VAR_3->lock);
  FUNC_2(&VAR_3->seq);
  VAR_3->umask = VAR_2->umask;

  FUNC_3(&VAR_2->lock);
  VAR_3->root = VAR_2->root;
  FUNC_1(&VAR_3->root);
  VAR_3->pwd = VAR_2->pwd;
  FUNC_1(&VAR_3->pwd);
  FUNC_5(&VAR_2->lock);
 }
 return VAR_3;
}
