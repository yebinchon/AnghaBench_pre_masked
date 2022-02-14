
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mvpp2_queue_vector {int nrxqs; int sw_thread_id; int first_rxq; } ;
struct mvpp2_port {int id; int nrxqs; int nqvecs; struct mvpp2_queue_vector* qvecs; struct mvpp2* priv; } ;
struct mvpp2 {scalar_t__ hw_version; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct mvpp2*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct mvpp2_port *VAR_5)
{
 struct mvpp2 *VAR_6 = VAR_5->priv;
 u32 VAR_7;
 int VAR_8;

 if (VAR_6->hw_version == VAR_0) {
  FUNC_1(VAR_6, FUNC_0(VAR_5->id),
       VAR_5->nrxqs);
  return;
 }


 for (VAR_8 = 0; VAR_8 < VAR_5->nqvecs; VAR_8++) {
  struct mvpp2_queue_vector *VAR_9 = VAR_5->qvecs + VAR_8;

  if (!VAR_9->nrxqs)
   continue;

  VAR_7 = VAR_9->sw_thread_id;
  VAR_7 |= VAR_5->id << VAR_1;
  FUNC_1(VAR_6, VAR_2, VAR_7);

  VAR_7 = VAR_9->first_rxq;
  VAR_7 |= VAR_9->nrxqs << VAR_4;
  FUNC_1(VAR_6, VAR_3, VAR_7);
 }
}
