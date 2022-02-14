
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qman_portal {int dummy; } ;
struct qman_fq {int fqid; } ;
struct qm_dqrr_entry {int fd; } ;
struct net_device {int dummy; } ;
struct dpaa_priv {int percpu_priv; } ;
struct dpaa_percpu_priv {int dummy; } ;
struct dpaa_fq {struct net_device* net_dev; } ;
typedef enum qman_cb_dqrr_result { ____Placeholder_qman_cb_dqrr_result } qman_cb_dqrr_result ;


 scalar_t__ FUNC_0 (struct dpaa_percpu_priv*,struct qman_portal*) ;
 int FUNC_1 (struct net_device*,struct dpaa_priv*,struct dpaa_percpu_priv*,int *,int ) ;
 struct dpaa_priv* FUNC_2 (struct net_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct dpaa_percpu_priv* FUNC_3 (int ) ;

__attribute__((used)) static enum qman_cb_dqrr_result FUNC_4(struct qman_portal *VAR_2,
      struct qman_fq *VAR_3,
      const struct qm_dqrr_entry *VAR_4)
{
 struct dpaa_percpu_priv *VAR_5;
 struct net_device *VAR_6;
 struct dpaa_priv *VAR_7;

 VAR_6 = ((struct dpaa_fq *)VAR_3)->net_dev;
 VAR_7 = FUNC_2(VAR_6);

 VAR_5 = FUNC_3(VAR_7->percpu_priv);

 if (FUNC_0(VAR_5, VAR_2))
  return VAR_1;

 FUNC_1(VAR_6, VAR_7, VAR_5, &VAR_4->fd, VAR_3->fqid);

 return VAR_0;
}
