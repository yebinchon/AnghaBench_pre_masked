
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfar_extra_stats {int rx_alloc_err; } ;
struct gfar_private {struct gfar_extra_stats extra_stats; } ;
struct gfar_priv_rx_q {int ndev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 struct gfar_private* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct gfar_priv_rx_q *VAR_0)
{
 struct gfar_private *VAR_1 = FUNC_2(VAR_0->ndev);
 struct gfar_extra_stats *VAR_2 = &VAR_1->extra_stats;

 FUNC_1(VAR_0->ndev, "Can't alloc RX buffers\n");
 FUNC_0(&VAR_2->rx_alloc_err);
}
