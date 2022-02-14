
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int pc; } ;
struct TYPE_5__ {int * db; } ;
struct TYPE_6__ {TYPE_1__ sq; } ;
struct mlx5dr_qp {TYPE_4__* uar; TYPE_3__ sq; TYPE_2__ wq; } ;
struct TYPE_8__ {scalar_t__ map; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (void*,scalar_t__) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct mlx5dr_qp *VAR_1, void *VAR_2)
{
 FUNC_1();
 *VAR_1->wq.sq.db = FUNC_0(VAR_1->sq.pc & 0xfffff);


 FUNC_3();

 FUNC_2(VAR_2, VAR_1->uar->map + VAR_0);
}
