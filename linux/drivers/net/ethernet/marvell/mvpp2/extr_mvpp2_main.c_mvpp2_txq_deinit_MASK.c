
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct mvpp2_txq_pcpu {int size; int * tso_headers; scalar_t__ tso_headers_dma; int buffs; } ;
struct mvpp2_tx_queue {int size; int id; int log_id; scalar_t__ descs_dma; scalar_t__ next_desc_to_proc; scalar_t__ last_desc; int * descs; int pcpu; } ;
struct mvpp2_port {TYPE_3__* priv; TYPE_2__* dev; } ;
struct TYPE_8__ {unsigned int nthreads; } ;
struct TYPE_6__ {int parent; } ;
struct TYPE_7__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int ,int,int *,scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 unsigned int FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (TYPE_3__*,unsigned int,int ,int ) ;
 int FUNC_6 (TYPE_3__*,int ,int ) ;
 struct mvpp2_txq_pcpu* FUNC_7 (int ,unsigned int) ;
 int FUNC_8 () ;

__attribute__((used)) static void FUNC_9(struct mvpp2_port *VAR_5,
        struct mvpp2_tx_queue *VAR_6)
{
 struct mvpp2_txq_pcpu *VAR_7;
 unsigned int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_5->priv->nthreads; VAR_8++) {
  VAR_7 = FUNC_7(VAR_6->pcpu, VAR_8);
  FUNC_3(VAR_7->buffs);

  if (VAR_7->tso_headers)
   FUNC_1(VAR_5->dev->dev.parent,
       VAR_7->size * VAR_4,
       VAR_7->tso_headers,
       VAR_7->tso_headers_dma);

  VAR_7->tso_headers = ((void*)0);
 }

 if (VAR_6->descs)
  FUNC_1(VAR_5->dev->dev.parent,
      VAR_6->size * VAR_0,
      VAR_6->descs, VAR_6->descs_dma);

 VAR_6->descs = ((void*)0);
 VAR_6->last_desc = 0;
 VAR_6->next_desc_to_proc = 0;
 VAR_6->descs_dma = 0;


 FUNC_6(VAR_5->priv, FUNC_0(VAR_6->log_id), 0);


 VAR_8 = FUNC_4(VAR_5->priv, FUNC_2());
 FUNC_5(VAR_5->priv, VAR_8, VAR_3, VAR_6->id);
 FUNC_5(VAR_5->priv, VAR_8, VAR_1, 0);
 FUNC_5(VAR_5->priv, VAR_8, VAR_2, 0);
 FUNC_8();
}
