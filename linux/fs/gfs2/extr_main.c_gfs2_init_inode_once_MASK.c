
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rs_node; } ;
struct gfs2_inode {int i_iopen_gh; int * i_hash_cache; TYPE_1__ i_res; int i_rgd_gh; int * i_qadata; int i_trunc_list; int i_rw_mutex; int i_sizehint; int i_inode; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_7(void *VAR_0)
{
 struct gfs2_inode *VAR_1 = VAR_0;

 FUNC_5(&VAR_1->i_inode);
 FUNC_2(&VAR_1->i_sizehint, 0);
 FUNC_4(&VAR_1->i_rw_mutex);
 FUNC_0(&VAR_1->i_trunc_list);
 VAR_1->i_qadata = ((void*)0);
 FUNC_3(&VAR_1->i_rgd_gh);
 FUNC_6(&VAR_1->i_res, 0, sizeof(VAR_1->i_res));
 FUNC_1(&VAR_1->i_res.rs_node);
 VAR_1->i_hash_cache = ((void*)0);
 FUNC_3(&VAR_1->i_iopen_gh);
}
