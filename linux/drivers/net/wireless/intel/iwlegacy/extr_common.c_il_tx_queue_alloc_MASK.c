
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sk_buff {int dummy; } ;
struct TYPE_6__ {scalar_t__ id; int dma_addr; } ;
struct il_tx_queue {int * skbs; TYPE_3__ q; int tfds; } ;
struct TYPE_5__ {size_t tfd_size; } ;
struct il_priv {scalar_t__ cmd_queue; TYPE_2__ hw_params; TYPE_1__* pci_dev; } ;
struct device {int dummy; } ;
struct TYPE_4__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 size_t VAR_2 ;
 int FUNC_1 (struct device*,size_t,int *,int ) ;
 int * FUNC_2 (size_t,int,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(struct il_priv *VAR_3, struct il_tx_queue *VAR_4, u32 VAR_5)
{
 struct device *VAR_6 = &VAR_3->pci_dev->dev;
 size_t VAR_7 = VAR_3->hw_params.tfd_size * VAR_2;



 if (VAR_5 != VAR_3->cmd_queue) {
  VAR_4->skbs = FUNC_2(VAR_2,
        sizeof(struct sk_buff *),
        VAR_1);
  if (!VAR_4->skbs) {
   FUNC_0("Fail to alloc skbs\n");
   goto error;
  }
 } else
  VAR_4->skbs = ((void*)0);



 VAR_4->tfds =
     FUNC_1(VAR_6, VAR_7, &VAR_4->q.dma_addr, VAR_1);
 if (!VAR_4->tfds)
  goto error;

 VAR_4->q.id = VAR_5;

 return 0;

error:
 FUNC_3(VAR_4->skbs);
 VAR_4->skbs = ((void*)0);

 return -VAR_0;
}
