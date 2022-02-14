
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qman_fq {int dummy; } ;
struct dpaa_priv {int channel; int net_dev; } ;
struct dpaa_fq {int channel; int flags; int net_dev; struct qman_fq fq_base; } ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(const struct dpaa_priv *VAR_1,
          struct dpaa_fq *VAR_2,
          const struct qman_fq *VAR_3)
{
 VAR_2->fq_base = *VAR_3;
 VAR_2->net_dev = VAR_1->net_dev;

 VAR_2->flags = VAR_0;
 VAR_2->channel = VAR_1->channel;
}
