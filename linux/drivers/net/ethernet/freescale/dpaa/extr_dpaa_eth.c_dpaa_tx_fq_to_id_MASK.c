
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qman_fq {int dummy; } ;
struct dpaa_priv {struct qman_fq** egress_fqs; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline int FUNC_0(const struct dpaa_priv *VAR_2,
       struct qman_fq *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  if (VAR_2->egress_fqs[VAR_4] == VAR_3)
   return VAR_4;

 return -VAR_1;
}
