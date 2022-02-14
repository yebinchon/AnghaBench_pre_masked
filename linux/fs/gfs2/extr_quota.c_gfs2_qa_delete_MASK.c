
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_inode {int i_rw_mutex; int * i_qadata; } ;
typedef int atomic_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct gfs2_inode *VAR_1, atomic_t *VAR_2)
{
 FUNC_1(&VAR_1->i_rw_mutex);
 if (VAR_1->i_qadata && ((VAR_2 == ((void*)0)) || (FUNC_0(VAR_2) <= 1))) {
  FUNC_2(VAR_0, VAR_1->i_qadata);
  VAR_1->i_qadata = ((void*)0);
 }
 FUNC_3(&VAR_1->i_rw_mutex);
}
