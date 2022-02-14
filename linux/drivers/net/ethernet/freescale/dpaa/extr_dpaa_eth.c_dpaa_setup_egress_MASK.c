
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct qman_fq {int dummy; } ;
struct fman_port {int dummy; } ;
struct dpaa_priv {int net_dev; } ;
struct dpaa_fq {int flags; scalar_t__ channel; int net_dev; struct qman_fq fq_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct fman_port*) ;

__attribute__((used)) static inline void FUNC_1(const struct dpaa_priv *VAR_2,
         struct dpaa_fq *VAR_3,
         struct fman_port *VAR_4,
         const struct qman_fq *VAR_5)
{
 VAR_3->fq_base = *VAR_5;
 VAR_3->net_dev = VAR_2->net_dev;

 if (VAR_4) {
  VAR_3->flags = VAR_1;
  VAR_3->channel = (u16)FUNC_0(VAR_4);
 } else {
  VAR_3->flags = VAR_0;
 }
}
