
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qm_fd {int dummy; } ;
struct TYPE_4__ {struct qm_fd fd; } ;
union qm_mr_entry {TYPE_2__ ern; } ;
struct sk_buff {int dummy; } ;
struct qman_portal {int dummy; } ;
struct qman_fq {int dummy; } ;
struct net_device {int dummy; } ;
struct dpaa_priv {int percpu_priv; } ;
struct TYPE_3__ {int tx_fifo_errors; int tx_dropped; } ;
struct dpaa_percpu_priv {TYPE_1__ stats; } ;
struct dpaa_fq {struct net_device* net_dev; } ;


 int FUNC_0 (struct dpaa_percpu_priv*,union qm_mr_entry const*) ;
 int FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (struct dpaa_priv const*,struct qm_fd const*) ;
 struct dpaa_priv* FUNC_3 (struct net_device*) ;
 struct dpaa_percpu_priv* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct qman_portal *VAR_0,
         struct qman_fq *VAR_1,
         const union qm_mr_entry *VAR_2)
{
 const struct qm_fd *VAR_3 = &VAR_2->ern.fd;
 struct dpaa_percpu_priv *VAR_4;
 const struct dpaa_priv *VAR_5;
 struct net_device *VAR_6;
 struct sk_buff *VAR_7;

 VAR_6 = ((struct dpaa_fq *)VAR_1)->net_dev;
 VAR_5 = FUNC_3(VAR_6);
 VAR_4 = FUNC_4(VAR_5->percpu_priv);

 VAR_4->stats.tx_dropped++;
 VAR_4->stats.tx_fifo_errors++;
 FUNC_0(VAR_4, VAR_2);

 VAR_7 = FUNC_2(VAR_5, VAR_3);
 FUNC_1(VAR_7);
}
