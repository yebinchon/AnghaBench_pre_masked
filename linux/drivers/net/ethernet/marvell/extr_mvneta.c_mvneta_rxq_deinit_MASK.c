
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mvneta_rx_queue {int size; scalar_t__ left_size; int * skb; scalar_t__ refill_num; scalar_t__ first_to_refill; scalar_t__ descs_phys; scalar_t__ next_desc_to_proc; scalar_t__ last_desc; int * descs; } ;
struct mvneta_port {TYPE_2__* dev; } ;
struct TYPE_3__ {int parent; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int,int *,scalar_t__) ;
 int FUNC_2 (struct mvneta_port*,struct mvneta_rx_queue*) ;

__attribute__((used)) static void FUNC_3(struct mvneta_port *VAR_1,
         struct mvneta_rx_queue *VAR_2)
{
 FUNC_2(VAR_1, VAR_2);

 if (VAR_2->skb)
  FUNC_0(VAR_2->skb);

 if (VAR_2->descs)
  FUNC_1(VAR_1->dev->dev.parent,
      VAR_2->size * VAR_0,
      VAR_2->descs,
      VAR_2->descs_phys);

 VAR_2->descs = ((void*)0);
 VAR_2->last_desc = 0;
 VAR_2->next_desc_to_proc = 0;
 VAR_2->descs_phys = 0;
 VAR_2->first_to_refill = 0;
 VAR_2->refill_num = 0;
 VAR_2->skb = ((void*)0);
 VAR_2->left_size = 0;
}
