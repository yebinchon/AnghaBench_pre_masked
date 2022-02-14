
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtnl_link_stats64 {int tx_bytes; int tx_packets; int tx_fifo_errors; } ;
struct qman_fq {int dummy; } ;
struct qm_fd {scalar_t__ bpid; int cmd; } ;
struct dpaa_priv {int net_dev; int * conf_fqs; struct qman_fq** egress_fqs; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct qm_fd*) ;
 int FUNC_2 (struct qman_fq*,struct qm_fd*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,struct qman_fq*,struct qm_fd*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static inline int FUNC_6(struct dpaa_priv *VAR_3,
       struct rtnl_link_stats64 *VAR_4,
       int VAR_5,
       struct qm_fd *VAR_6)
{
 struct qman_fq *VAR_7;
 int VAR_8, VAR_9;

 VAR_7 = VAR_3->egress_fqs[VAR_5];
 if (VAR_6->bpid == VAR_2)
  VAR_6->cmd |= FUNC_0(FUNC_3(VAR_3->conf_fqs[VAR_5]));


 FUNC_4(VAR_3->net_dev, VAR_7, VAR_6);

 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  VAR_8 = FUNC_2(VAR_7, VAR_6);
  if (VAR_8 != -VAR_1)
   break;
 }

 if (FUNC_5(VAR_8 < 0)) {
  VAR_4->tx_fifo_errors++;
  return VAR_8;
 }

 VAR_4->tx_packets++;
 VAR_4->tx_bytes += FUNC_1(VAR_6);

 return 0;
}
