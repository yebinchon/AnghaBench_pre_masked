
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mvpp2_rx_queue {int size; int id; scalar_t__ descs_dma; scalar_t__ next_desc_to_proc; scalar_t__ last_desc; int * descs; } ;
struct mvpp2_port {int priv; TYPE_2__* dev; } ;
struct TYPE_3__ {int parent; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int *,scalar_t__) ;
 int FUNC_2 () ;
 unsigned int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct mvpp2_port*,struct mvpp2_rx_queue*) ;
 int FUNC_5 (int ,unsigned int,int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 () ;

__attribute__((used)) static void FUNC_8(struct mvpp2_port *VAR_4,
        struct mvpp2_rx_queue *VAR_5)
{
 unsigned int VAR_6;

 FUNC_4(VAR_4, VAR_5);

 if (VAR_5->descs)
  FUNC_1(VAR_4->dev->dev.parent,
      VAR_5->size * VAR_0,
      VAR_5->descs,
      VAR_5->descs_dma);

 VAR_5->descs = ((void*)0);
 VAR_5->last_desc = 0;
 VAR_5->next_desc_to_proc = 0;
 VAR_5->descs_dma = 0;




 FUNC_6(VAR_4->priv, FUNC_0(VAR_5->id), 0);
 VAR_6 = FUNC_3(VAR_4->priv, FUNC_2());
 FUNC_5(VAR_4->priv, VAR_6, VAR_3, VAR_5->id);
 FUNC_5(VAR_4->priv, VAR_6, VAR_1, 0);
 FUNC_5(VAR_4->priv, VAR_6, VAR_2, 0);
 FUNC_7();
}
