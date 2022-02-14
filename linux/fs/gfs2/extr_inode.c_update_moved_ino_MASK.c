
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int i_ctime; } ;
struct gfs2_inode {TYPE_1__ i_inode; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct gfs2_inode*,int *,struct gfs2_inode*,int ) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(struct gfs2_inode *VAR_2, struct gfs2_inode *VAR_3,
       int VAR_4)
{
 if (VAR_4)
  return FUNC_1(VAR_2, &VAR_1, VAR_3, VAR_0);

 VAR_2->i_inode.i_ctime = FUNC_0(&VAR_2->i_inode);
 FUNC_2(&VAR_2->i_inode);
 return 0;
}
