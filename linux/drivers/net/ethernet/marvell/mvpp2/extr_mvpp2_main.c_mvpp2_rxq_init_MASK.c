
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct mvpp2_rx_queue {int size; int descs_dma; int last_desc; int id; int descs; } ;
struct mvpp2_port {int rx_ring_size; TYPE_3__* priv; TYPE_2__* dev; } ;
struct TYPE_8__ {scalar_t__ hw_version; } ;
struct TYPE_6__ {int parent; } ;
struct TYPE_7__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int VAR_9 ;
 int FUNC_1 (int ,int,int*,int ) ;
 int FUNC_2 () ;
 unsigned int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (struct mvpp2_port*,struct mvpp2_rx_queue*) ;
 int FUNC_5 (struct mvpp2_port*,struct mvpp2_rx_queue*) ;
 int FUNC_6 (struct mvpp2_port*,int,int ) ;
 int FUNC_7 (struct mvpp2_port*,int,int ,int) ;
 int FUNC_8 (TYPE_3__*,unsigned int,int ,int) ;
 int FUNC_9 (TYPE_3__*,int ,int ) ;
 int FUNC_10 () ;

__attribute__((used)) static int FUNC_11(struct mvpp2_port *VAR_10,
     struct mvpp2_rx_queue *VAR_11)

{
 unsigned int VAR_12;
 u32 VAR_13;

 VAR_11->size = VAR_10->rx_ring_size;


 VAR_11->descs = FUNC_1(VAR_10->dev->dev.parent,
     VAR_11->size * VAR_4,
     &VAR_11->descs_dma, VAR_1);
 if (!VAR_11->descs)
  return -VAR_0;

 VAR_11->last_desc = VAR_11->size - 1;


 FUNC_9(VAR_10->priv, FUNC_0(VAR_11->id), 0);


 VAR_12 = FUNC_3(VAR_10->priv, FUNC_2());
 FUNC_8(VAR_10->priv, VAR_12, VAR_8, VAR_11->id);
 if (VAR_10->priv->hw_version == VAR_2)
  VAR_13 = VAR_11->descs_dma;
 else
  VAR_13 = VAR_11->descs_dma >> VAR_3;
 FUNC_8(VAR_10->priv, VAR_12, VAR_5, VAR_13);
 FUNC_8(VAR_10->priv, VAR_12, VAR_6, VAR_11->size);
 FUNC_8(VAR_10->priv, VAR_12, VAR_7, 0);
 FUNC_10();


 FUNC_6(VAR_10, VAR_11->id, VAR_9);


 FUNC_4(VAR_10, VAR_11);
 FUNC_5(VAR_10, VAR_11);


 FUNC_7(VAR_10, VAR_11->id, 0, VAR_11->size);

 return 0;
}
