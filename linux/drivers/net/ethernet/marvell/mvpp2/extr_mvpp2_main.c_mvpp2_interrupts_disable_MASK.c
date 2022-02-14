
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mvpp2_port {int nqvecs; int id; int priv; TYPE_1__* qvecs; } ;
struct TYPE_2__ {int sw_thread_mask; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static inline void FUNC_3(struct mvpp2_port *VAR_0)
{
 int VAR_1, VAR_2 = 0;

 for (VAR_1 = 0; VAR_1 < VAR_0->nqvecs; VAR_1++)
  VAR_2 |= VAR_0->qvecs[VAR_1].sw_thread_mask;

 FUNC_2(VAR_0->priv, FUNC_1(VAR_0->id),
      FUNC_0(VAR_2));
}
