
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_inode {int i_rw_mutex; int i_res; } ;
typedef int atomic_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct gfs2_inode*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct gfs2_inode *VAR_0, atomic_t *VAR_1)
{
 FUNC_1(&VAR_0->i_rw_mutex);
 if ((VAR_1 == ((void*)0)) || (FUNC_0(VAR_1) <= 1))
  FUNC_3(&VAR_0->i_res);
 FUNC_4(&VAR_0->i_rw_mutex);
 FUNC_2(VAR_0, VAR_1);
}
