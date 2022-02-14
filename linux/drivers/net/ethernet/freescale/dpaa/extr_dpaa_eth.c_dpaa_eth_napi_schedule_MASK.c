
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qman_portal {int dummy; } ;
struct TYPE_2__ {int napi; struct qman_portal* p; } ;
struct dpaa_percpu_priv {int in_interrupt; TYPE_1__ np; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct qman_portal*,int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static inline int FUNC_5(struct dpaa_percpu_priv *VAR_1,
      struct qman_portal *VAR_2)
{
 if (FUNC_4(FUNC_0() || !FUNC_1())) {

  FUNC_3(VAR_2, VAR_0);

  VAR_1->np.p = VAR_2;
  FUNC_2(&VAR_1->np.napi);
  VAR_1->in_interrupt++;
  return 1;
 }
 return 0;
}
