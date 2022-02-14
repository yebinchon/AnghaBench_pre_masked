
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct mvpp2_port {int nrxqs; TYPE_4__* priv; TYPE_2__* dev; } ;
struct mvpp2_bm_pool {int pkt_size; int buf_num; int id; scalar_t__ frag_size; } ;
struct TYPE_9__ {struct mvpp2_bm_pool* bm_pools; } ;
struct TYPE_8__ {int buf_num; } ;
struct TYPE_6__ {int parent; } ;
struct TYPE_7__ {TYPE_1__ dev; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int,char*,int ,int,int) ;
 int FUNC_3 (struct mvpp2_port*,struct mvpp2_bm_pool*,int) ;
 int FUNC_4 (int ,TYPE_4__*,struct mvpp2_bm_pool*,int) ;
 int FUNC_5 (TYPE_4__*,struct mvpp2_bm_pool*,int ) ;
 TYPE_3__* VAR_1 ;
 int FUNC_6 (TYPE_2__*,char*,unsigned int) ;

__attribute__((used)) static struct mvpp2_bm_pool *
FUNC_7(struct mvpp2_port *VAR_2, int VAR_3,
    unsigned int VAR_4, int VAR_5)
{
 struct mvpp2_bm_pool *VAR_6 = &VAR_2->priv->bm_pools[VAR_4];
 int VAR_7;

 if (VAR_4 > VAR_2->nrxqs * 2) {
  FUNC_6(VAR_2->dev, "Invalid pool %d\n", VAR_4);
  return ((void*)0);
 }




 if (VAR_6->pkt_size == 0) {
  int VAR_8;




  VAR_8 = VAR_6->buf_num;
  if (VAR_8 == 0)
   VAR_8 = VAR_1[VAR_3].buf_num;
  else
   FUNC_4(VAR_2->dev->dev.parent,
        VAR_2->priv, VAR_6, VAR_8);

  VAR_6->pkt_size = VAR_5;
  VAR_6->frag_size =
   FUNC_1(FUNC_0(VAR_5)) +
   VAR_0;


  VAR_7 = FUNC_3(VAR_2, VAR_6, VAR_8);
  if (VAR_7 != VAR_8) {
   FUNC_2(1, "pool %d: %d of %d allocated\n",
        VAR_6->id, VAR_7, VAR_8);
   return ((void*)0);
  }
 }

 FUNC_5(VAR_2->priv, VAR_6,
      FUNC_0(VAR_6->pkt_size));

 return VAR_6;
}
