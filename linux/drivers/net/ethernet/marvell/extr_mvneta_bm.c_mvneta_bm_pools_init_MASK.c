
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_5__ {scalar_t__ size; } ;
struct mvneta_bm_pool {int id; scalar_t__ pkt_size; TYPE_2__ hwbm_pool; int type; } ;
struct mvneta_bm {TYPE_1__* pdev; struct mvneta_bm_pool* bm_pools; } ;
struct device_node {int dummy; } ;
struct TYPE_6__ {struct device_node* of_node; } ;
struct TYPE_4__ {TYPE_3__ dev; } ;


 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (scalar_t__,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 scalar_t__ VAR_7 ;
 int FUNC_5 (TYPE_3__*,char*,int,scalar_t__,scalar_t__) ;
 int FUNC_6 (struct mvneta_bm*,int ,scalar_t__) ;
 scalar_t__ FUNC_7 (struct device_node*,char*,scalar_t__*) ;
 int FUNC_8 (char*,char*,int) ;

__attribute__((used)) static void FUNC_9(struct mvneta_bm *VAR_8)
{
 struct device_node *VAR_9 = VAR_8->pdev->dev.of_node;
 struct mvneta_bm_pool *VAR_10;
 char VAR_11[15];
 u32 VAR_12;
 int VAR_13;


 FUNC_6(VAR_8, VAR_0, VAR_7);


 for (VAR_13 = 0; VAR_13 < VAR_2; VAR_13++) {
  VAR_10 = &VAR_8->bm_pools[VAR_13];
  VAR_10->id = VAR_13;
  VAR_10->type = VAR_1;


  FUNC_6(VAR_8, FUNC_2(VAR_13), 0);


  FUNC_6(VAR_8, FUNC_4(VAR_13), 0);


  FUNC_8(VAR_11, "pool%d,capacity", VAR_13);
  if (FUNC_7(VAR_9, VAR_11, &VAR_12)) {
   VAR_12 = VAR_4;
  } else if (VAR_12 > VAR_5) {
   FUNC_5(&VAR_8->pdev->dev,
     "Illegal pool %d capacity %d, set to %d\n",
     VAR_13, VAR_12, VAR_5);
   VAR_12 = VAR_5;
  } else if (VAR_12 < VAR_6) {
   FUNC_5(&VAR_8->pdev->dev,
     "Illegal pool %d capacity %d, set to %d\n",
     VAR_13, VAR_12, VAR_6);
   VAR_12 = VAR_6;
  } else if (!FUNC_1(VAR_12, VAR_3)) {
   FUNC_5(&VAR_8->pdev->dev,
     "Illegal pool %d capacity %d, round to %d\n",
     VAR_13, VAR_12, FUNC_0(VAR_12,
     VAR_3));
   VAR_12 = FUNC_0(VAR_12, VAR_3);
  }
  VAR_10->hwbm_pool.size = VAR_12;

  FUNC_6(VAR_8, FUNC_3(VAR_13),
    VAR_10->hwbm_pool.size);


  FUNC_8(VAR_11, "pool%d,pkt-size", VAR_13);
  if (FUNC_7(VAR_9, VAR_11, &VAR_10->pkt_size))
   VAR_10->pkt_size = 0;
 }
}
