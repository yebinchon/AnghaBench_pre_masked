
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvpp2_queue_vector {int sw_thread_id; int first_rxq; int nrxqs; int irq; int napi; int type; int sw_thread_mask; struct mvpp2_port* port; } ;
struct mvpp2_port {int nqvecs; int flags; int nrxqs; struct mvpp2_queue_vector* qvecs; int dev; int fwnode; struct mvpp2* priv; } ;
struct mvpp2 {int nthreads; } ;
struct device_node {int dummy; } ;
typedef int irqname ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int FUNC_3 (int ,int *,int ,int ) ;
 int FUNC_4 (struct device_node*,char*) ;
 int VAR_6 ;
 int FUNC_5 (char*,int,char*,int) ;
 int FUNC_6 (char*,char*,int) ;

__attribute__((used)) static int FUNC_7(struct mvpp2_port *VAR_7,
       struct device_node *VAR_8)
{
 struct mvpp2 *VAR_9 = VAR_7->priv;
 struct mvpp2_queue_vector *VAR_10;
 int VAR_11, VAR_12;

 switch (VAR_6) {
 case 128:
  VAR_7->nqvecs = VAR_9->nthreads + 1;
  break;
 case 129:
  VAR_7->nqvecs = VAR_9->nthreads;
  break;
 }

 for (VAR_11 = 0; VAR_11 < VAR_7->nqvecs; VAR_11++) {
  char VAR_13[16];

  VAR_10 = VAR_7->qvecs + VAR_11;

  VAR_10->port = VAR_7;
  VAR_10->type = VAR_2;
  VAR_10->sw_thread_id = VAR_11;
  VAR_10->sw_thread_mask = FUNC_0(VAR_11);

  if (VAR_7->flags & VAR_1)
   FUNC_5(VAR_13, sizeof(VAR_13), "tx-cpu%d", VAR_11);
  else
   FUNC_5(VAR_13, sizeof(VAR_13), "hif%d", VAR_11);

  if (VAR_6 == 129) {
   VAR_10->first_rxq = VAR_11;
   VAR_10->nrxqs = 1;
  } else if (VAR_6 == 128 &&
      VAR_11 == (VAR_7->nqvecs - 1)) {
   VAR_10->first_rxq = 0;
   VAR_10->nrxqs = VAR_7->nrxqs;
   VAR_10->type = VAR_3;

   if (VAR_7->flags & VAR_1)
    FUNC_6(VAR_13, "rx-shared", sizeof(VAR_13));
  }

  if (VAR_8)
   VAR_10->irq = FUNC_4(VAR_8, VAR_13);
  else
   VAR_10->irq = FUNC_1(VAR_7->fwnode, VAR_11);
  if (VAR_10->irq <= 0) {
   VAR_12 = -VAR_0;
   goto err;
  }

  FUNC_3(VAR_7->dev, &VAR_10->napi, VAR_5,
          VAR_4);
 }

 return 0;

err:
 for (VAR_11 = 0; VAR_11 < VAR_7->nqvecs; VAR_11++)
  FUNC_2(VAR_7->qvecs[VAR_11].irq);
 return VAR_12;
}
