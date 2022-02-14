
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct mvpp2_port {unsigned int nrxqs; TYPE_4__* priv; TYPE_2__* dev; } ;
struct mvpp2_bm_pool {int pkt_size; int buf_num; int id; scalar_t__ frag_size; } ;
struct TYPE_10__ {scalar_t__ percpu_pools; struct mvpp2_bm_pool* bm_pools; } ;
struct TYPE_9__ {int buf_num; } ;
struct TYPE_7__ {int parent; } ;
struct TYPE_8__ {TYPE_1__ dev; } ;


 size_t VAR_0 ;
 unsigned int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int,char*,int ,int,int) ;
 int FUNC_3 (struct mvpp2_port*,struct mvpp2_bm_pool*,int) ;
 int FUNC_4 (int ,TYPE_4__*,struct mvpp2_bm_pool*,int) ;
 int FUNC_5 (TYPE_4__*,struct mvpp2_bm_pool*,int ) ;
 int FUNC_6 (TYPE_4__*) ;
 TYPE_3__* VAR_4 ;
 int FUNC_7 (TYPE_2__*,char*,unsigned int) ;

__attribute__((used)) static struct mvpp2_bm_pool *
FUNC_8(struct mvpp2_port *VAR_5, unsigned VAR_6, int VAR_7)
{
 struct mvpp2_bm_pool *VAR_8 = &VAR_5->priv->bm_pools[VAR_6];
 int VAR_9;

 if ((VAR_5->priv->percpu_pools && VAR_6 > FUNC_6(VAR_5->priv) * 2) ||
     (!VAR_5->priv->percpu_pools && VAR_6 >= VAR_1)) {
  FUNC_7(VAR_5->dev, "Invalid pool %d\n", VAR_6);
  return ((void*)0);
 }




 if (VAR_8->pkt_size == 0) {
  int VAR_10;




  VAR_10 = VAR_8->buf_num;
  if (VAR_10 == 0) {
   if (VAR_5->priv->percpu_pools) {
    if (VAR_6 < VAR_5->nrxqs)
     VAR_10 = VAR_4[VAR_2].buf_num;
    else
     VAR_10 = VAR_4[VAR_0].buf_num;
   } else {
    VAR_10 = VAR_4[VAR_6].buf_num;
   }
  } else {
   FUNC_4(VAR_5->dev->dev.parent,
        VAR_5->priv, VAR_8, VAR_10);
  }

  VAR_8->pkt_size = VAR_7;
  VAR_8->frag_size =
   FUNC_1(FUNC_0(VAR_7)) +
   VAR_3;


  VAR_9 = FUNC_3(VAR_5, VAR_8, VAR_10);
  if (VAR_9 != VAR_10) {
   FUNC_2(1, "pool %d: %d of %d allocated\n",
        VAR_8->id, VAR_9, VAR_10);
   return ((void*)0);
  }
 }

 FUNC_5(VAR_5->priv, VAR_8,
      FUNC_0(VAR_8->pkt_size));

 return VAR_8;
}
