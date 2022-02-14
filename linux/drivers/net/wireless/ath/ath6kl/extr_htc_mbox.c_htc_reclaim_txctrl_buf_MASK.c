
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct htc_target {int htc_lock; int free_ctrl_txbuf; } ;
struct htc_packet {int list; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct htc_target *VAR_0,
       struct htc_packet *VAR_1)
{
 FUNC_1(&VAR_0->htc_lock);
 FUNC_0(&VAR_1->list, &VAR_0->free_ctrl_txbuf);
 FUNC_2(&VAR_0->htc_lock);
}
