
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tp_rdma_stats {int rqe_dfr_pkt; int rqe_dfr_mod; } ;
struct seq_file {struct adapter* private; } ;
struct adapter {int stats_lock; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct adapter*,struct tp_rdma_stats*,int) ;

__attribute__((used)) static void FUNC_4(struct seq_file *VAR_0)
{
 struct adapter *VAR_1 = VAR_0->private;
 struct tp_rdma_stats VAR_2;

 FUNC_1(&VAR_1->stats_lock);
 FUNC_3(VAR_1, &VAR_2, 0);
 FUNC_2(&VAR_1->stats_lock);

 FUNC_0("rdma_no_rqe_mod_defer:", VAR_2.rqe_dfr_mod);
 FUNC_0("rdma_no_rqe_pkt_defer:", VAR_2.rqe_dfr_pkt);
}
