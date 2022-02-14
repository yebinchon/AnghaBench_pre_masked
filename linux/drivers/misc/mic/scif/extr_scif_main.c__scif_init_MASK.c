
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int p2p_enable; int conn_work; int mmu_notif_work; int misc_work; scalar_t__ en_msg_log; int rma_tc_limit; int exitwq; int nb_connect_list; int fence; int mmu_notif_cleanup; int rma_tc; int rma; int disconnected; int connected; int zombie; int listen; int uaccept; int fencelock; int connlock; int conflock; int port_lock; int nb_connect_lock; int rmalock; int eplock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int ,int ,int ,int *) ;
 int FUNC_5 (int *) ;
 int VAR_4 ;
 int FUNC_6 () ;
 TYPE_1__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_9(void)
{
 int VAR_10;

 FUNC_5(&VAR_5.eplock);
 FUNC_8(&VAR_5.rmalock);
 FUNC_8(&VAR_5.nb_connect_lock);
 FUNC_8(&VAR_5.port_lock);
 FUNC_5(&VAR_5.conflock);
 FUNC_5(&VAR_5.connlock);
 FUNC_5(&VAR_5.fencelock);
 FUNC_0(&VAR_5.uaccept);
 FUNC_0(&VAR_5.listen);
 FUNC_0(&VAR_5.zombie);
 FUNC_0(&VAR_5.connected);
 FUNC_0(&VAR_5.disconnected);
 FUNC_0(&VAR_5.rma);
 FUNC_0(&VAR_5.rma_tc);
 FUNC_0(&VAR_5.mmu_notif_cleanup);
 FUNC_0(&VAR_5.fence);
 FUNC_0(&VAR_5.nb_connect_list);
 FUNC_3(&VAR_5.exitwq);
 VAR_5.rma_tc_limit = VAR_2;
 VAR_5.en_msg_log = 0;
 VAR_5.p2p_enable = 1;
 VAR_10 = FUNC_7();
 if (VAR_10)
  goto error;
 VAR_9 = FUNC_4("Unaligned_DMA",
         VAR_1,
         0, VAR_3, ((void*)0));
 if (!VAR_9) {
  VAR_10 = -VAR_0;
  goto free_sdev;
 }
 FUNC_1(&VAR_5.misc_work, VAR_6);
 FUNC_1(&VAR_5.mmu_notif_work, VAR_7);
 FUNC_1(&VAR_5.conn_work, VAR_4);
 FUNC_2(&VAR_8);
 return 0;
free_sdev:
 FUNC_6();
error:
 return VAR_10;
}
