
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_termtbl_handle {scalar_t__ ref_count; int termtbl; int rule; int termtbl_hlist; } ;
struct TYPE_2__ {int termtbl_mutex; } ;
struct mlx5_eswitch {TYPE_1__ offloads; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct mlx5_termtbl_handle*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void
FUNC_6(struct mlx5_eswitch *VAR_0,
    struct mlx5_termtbl_handle *VAR_1)
{
 FUNC_4(&VAR_0->offloads.termtbl_mutex);
 if (--VAR_1->ref_count == 0)
  FUNC_0(&VAR_1->termtbl_hlist);
 FUNC_5(&VAR_0->offloads.termtbl_mutex);

 if (!VAR_1->ref_count) {
  FUNC_2(VAR_1->rule);
  FUNC_3(VAR_1->termtbl);
  FUNC_1(VAR_1);
 }
}
