
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {int rs_node; } ;
struct gfs2_inode {struct inode i_inode; scalar_t__ i_rahead; TYPE_1__ i_res; int * i_gl; scalar_t__ i_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 struct gfs2_inode* FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

__attribute__((used)) static struct inode *FUNC_3(struct super_block *VAR_2)
{
 struct gfs2_inode *VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_0);
 if (!VAR_3)
  return ((void*)0);
 VAR_3->i_flags = 0;
 VAR_3->i_gl = ((void*)0);
 FUNC_2(&VAR_3->i_res, 0, sizeof(VAR_3->i_res));
 FUNC_0(&VAR_3->i_res.rs_node);
 VAR_3->i_rahead = 0;
 return &VAR_3->i_inode;
}
