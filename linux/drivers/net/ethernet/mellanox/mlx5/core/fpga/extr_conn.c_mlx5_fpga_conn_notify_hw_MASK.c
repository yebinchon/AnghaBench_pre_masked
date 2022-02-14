
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int pc; } ;
struct TYPE_8__ {int * db; } ;
struct TYPE_9__ {TYPE_1__ sq; } ;
struct TYPE_11__ {TYPE_3__ sq; TYPE_2__ wq; } ;
struct mlx5_fpga_conn {TYPE_7__* fdev; TYPE_4__ qp; } ;
struct TYPE_13__ {TYPE_5__* uar; } ;
struct TYPE_14__ {TYPE_6__ conn_res; } ;
struct TYPE_12__ {scalar_t__ map; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (void*,scalar_t__) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct mlx5_fpga_conn *VAR_1, void *VAR_2)
{

 FUNC_1();
 *VAR_1->qp.wq.sq.db = FUNC_0(VAR_1->qp.sq.pc);

 FUNC_3();
 FUNC_2(VAR_2, VAR_1->fdev->conn_res.uar->map + VAR_0);
}
