
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* dentry; } ;
struct nameidata {int flags; TYPE_2__ root; int root_seq; } ;
struct fs_struct {TYPE_2__ root; int seq; } ;
struct TYPE_6__ {struct fs_struct* fs; } ;
struct TYPE_4__ {int d_seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 TYPE_3__* VAR_2 ;
 int FUNC_1 (struct fs_struct*,TYPE_2__*) ;
 unsigned int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct nameidata *VAR_3)
{
 struct fs_struct *VAR_4 = VAR_2->fs;

 if (VAR_3->flags & VAR_0) {
  unsigned VAR_5;

  do {
   VAR_5 = FUNC_2(&VAR_4->seq);
   VAR_3->root = VAR_4->root;
   VAR_3->root_seq = FUNC_0(&VAR_3->root.dentry->d_seq);
  } while (FUNC_3(&VAR_4->seq, VAR_5));
 } else {
  FUNC_1(VAR_4, &VAR_3->root);
  VAR_3->flags |= VAR_1;
 }
}
