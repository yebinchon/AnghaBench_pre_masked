
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct mvpp2_queue_vector {scalar_t__ type; int sw_thread_id; } ;
struct mvpp2_port {int nqvecs; int id; TYPE_1__* priv; struct mvpp2_queue_vector* qvecs; } ;
struct TYPE_2__ {scalar_t__ hw_version; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (TYPE_1__*,int ,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct mvpp2_port *VAR_2, bool VAR_3)
{
 u32 VAR_4;
 int VAR_5;

 if (VAR_2->priv->hw_version != VAR_0)
  return;

 if (VAR_3)
  VAR_4 = 0;
 else
  VAR_4 = FUNC_0(VAR_0);

 for (VAR_5 = 0; VAR_5 < VAR_2->nqvecs; VAR_5++) {
  struct mvpp2_queue_vector *VAR_6 = VAR_2->qvecs + VAR_5;

  if (VAR_6->type != VAR_1)
   continue;

  FUNC_2(VAR_2->priv, VAR_6->sw_thread_id,
       FUNC_1(VAR_2->id), VAR_4);
 }
}
