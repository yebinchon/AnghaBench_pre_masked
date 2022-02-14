
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * val; } ;
struct qdio_q {TYPE_1__ slsb; scalar_t__ sl; scalar_t__ slib; } ;
struct qdio_irq {TYPE_3__* qdr; } ;
struct TYPE_6__ {TYPE_2__* qdf0; } ;
struct TYPE_5__ {unsigned long sliba; unsigned long sla; unsigned long slsba; int akey; int bkey; int ckey; int dkey; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct qdio_irq *VAR_1,
         struct qdio_q **VAR_2,
         int VAR_3, int VAR_4)
{
 VAR_1->qdr->qdf0[VAR_3 + VAR_4].sliba =
  (unsigned long)VAR_2[VAR_3]->slib;

 VAR_1->qdr->qdf0[VAR_3 + VAR_4].sla =
  (unsigned long)VAR_2[VAR_3]->sl;

 VAR_1->qdr->qdf0[VAR_3 + VAR_4].slsba =
  (unsigned long)&VAR_2[VAR_3]->slsb.val[0];

 VAR_1->qdr->qdf0[VAR_3 + VAR_4].akey = VAR_0 >> 4;
 VAR_1->qdr->qdf0[VAR_3 + VAR_4].bkey = VAR_0 >> 4;
 VAR_1->qdr->qdf0[VAR_3 + VAR_4].ckey = VAR_0 >> 4;
 VAR_1->qdr->qdf0[VAR_3 + VAR_4].dkey = VAR_0 >> 4;
}
