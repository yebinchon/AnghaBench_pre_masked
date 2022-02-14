
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvpp2_queue_vector {scalar_t__ irq; int napi; struct mvpp2_port* port; int sw_thread_mask; scalar_t__ sw_thread_id; int type; int nrxqs; scalar_t__ first_rxq; } ;
struct mvpp2_port {int nqvecs; int dev; int nrxqs; struct mvpp2_queue_vector* qvecs; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct device_node*,int ) ;
 int VAR_4 ;
 int FUNC_2 (int ,int *,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct mvpp2_port *VAR_5,
        struct device_node *VAR_6)
{
 struct mvpp2_queue_vector *VAR_7 = &VAR_5->qvecs[0];

 VAR_7->first_rxq = 0;
 VAR_7->nrxqs = VAR_5->nrxqs;
 VAR_7->type = VAR_1;
 VAR_7->sw_thread_id = 0;
 VAR_7->sw_thread_mask = *FUNC_0(VAR_3);
 VAR_7->port = VAR_5;
 VAR_7->irq = FUNC_1(VAR_6, 0);
 if (VAR_7->irq <= 0)
  return -VAR_0;
 FUNC_2(VAR_5->dev, &VAR_7->napi, VAR_4,
         VAR_2);

 VAR_5->nqvecs = 1;

 return 0;
}
