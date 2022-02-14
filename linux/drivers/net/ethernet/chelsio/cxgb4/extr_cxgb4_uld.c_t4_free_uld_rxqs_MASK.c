
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ size; } ;
struct TYPE_3__ {scalar_t__ desc; } ;
struct sge_ofld_rxq {TYPE_2__ fl; TYPE_1__ rspq; } ;
struct adapter {int dummy; } ;


 int FUNC_0 (struct adapter*,TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(struct adapter *VAR_0, int VAR_1,
        struct sge_ofld_rxq *VAR_2)
{
 for ( ; VAR_1; VAR_1--, VAR_2++) {
  if (VAR_2->rspq.desc)
   FUNC_0(VAR_0, &VAR_2->rspq,
         VAR_2->fl.size ? &VAR_2->fl : ((void*)0));
 }
}
