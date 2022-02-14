
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_inode {int i_inode; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct gfs2_inode*,int ,int ) ;
 int FUNC_2 (struct gfs2_inode*) ;

int FUNC_3(struct gfs2_inode *VAR_0)
{
 int VAR_1;
 VAR_1 = FUNC_1(VAR_0, FUNC_0(&VAR_0->i_inode), 0);
 if (!VAR_1)
  VAR_1 = FUNC_2(VAR_0);
 return VAR_1;
}
