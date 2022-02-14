
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct netdev_queue {int dummy; } ;
struct mvneta_tx_queue {int size; scalar_t__ descs_phys; scalar_t__ next_desc_to_proc; scalar_t__ last_desc; int * descs; scalar_t__ tso_hdrs_phys; int * tso_hdrs; int tx_skb; int id; } ;
struct mvneta_port {TYPE_2__* dev; } ;
struct TYPE_3__ {int parent; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int *,scalar_t__) ;
 int FUNC_1 (int ) ;
 struct netdev_queue* FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (struct netdev_queue*) ;

__attribute__((used)) static void FUNC_4(struct mvneta_port *VAR_2,
     struct mvneta_tx_queue *VAR_3)
{
 struct netdev_queue *VAR_4 = FUNC_2(VAR_2->dev, VAR_3->id);

 FUNC_1(VAR_3->tx_skb);

 if (VAR_3->tso_hdrs)
  FUNC_0(VAR_2->dev->dev.parent,
      VAR_3->size * VAR_1,
      VAR_3->tso_hdrs, VAR_3->tso_hdrs_phys);
 if (VAR_3->descs)
  FUNC_0(VAR_2->dev->dev.parent,
      VAR_3->size * VAR_0,
      VAR_3->descs, VAR_3->descs_phys);

 FUNC_3(VAR_4);

 VAR_3->descs = ((void*)0);
 VAR_3->last_desc = 0;
 VAR_3->next_desc_to_proc = 0;
 VAR_3->descs_phys = 0;
}
