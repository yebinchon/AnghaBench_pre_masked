
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_7__ {int hc_rate; int sb_cq_index; int fw_sb_id; int flags; } ;
struct TYPE_6__ {int hc_rate; int sb_cq_index; int fw_sb_id; int flags; } ;
struct bnx2x_queue_init_params {size_t max_cos; int ** cxts; TYPE_2__ tx; TYPE_1__ rx; } ;
struct bnx2x_fastpath {size_t max_cos; TYPE_3__** txdata_ptr; int index; int fw_sb_id; } ;
struct bnx2x {int rx_ticks; int tx_ticks; TYPE_5__* context; } ;
struct TYPE_10__ {TYPE_4__* vcxt; } ;
struct TYPE_9__ {int eth; } ;
struct TYPE_8__ {int cid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,size_t) ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct bnx2x_fastpath*) ;
 int VAR_6 ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct bnx2x *VAR_7,
 struct bnx2x_fastpath *VAR_8, struct bnx2x_queue_init_params *VAR_9)
{
 u8 VAR_10;
 int VAR_11, VAR_12;


 if (!FUNC_1(VAR_8)) {
  FUNC_2(VAR_0, &VAR_9->rx.flags);
  FUNC_2(VAR_0, &VAR_9->tx.flags);




  FUNC_2(VAR_1, &VAR_9->rx.flags);
  FUNC_2(VAR_1, &VAR_9->tx.flags);


  VAR_9->rx.hc_rate = VAR_7->rx_ticks ?
   (1000000 / VAR_7->rx_ticks) : 0;
  VAR_9->tx.hc_rate = VAR_7->tx_ticks ?
   (1000000 / VAR_7->tx_ticks) : 0;


  VAR_9->rx.fw_sb_id = VAR_9->tx.fw_sb_id =
   VAR_8->fw_sb_id;





  VAR_9->rx.sb_cq_index = VAR_4;
  VAR_9->tx.sb_cq_index = VAR_3;
 }


 VAR_9->max_cos = VAR_8->max_cos;

 FUNC_0(VAR_6, "fp: %d setting queue params max cos to: %d\n",
     VAR_8->index, VAR_9->max_cos);


 for (VAR_10 = VAR_2; VAR_10 < VAR_9->max_cos; VAR_10++) {
  VAR_11 = VAR_8->txdata_ptr[VAR_10]->cid / VAR_5;
  VAR_12 = VAR_8->txdata_ptr[VAR_10]->cid - (VAR_11 *
    VAR_5);
  VAR_9->cxts[VAR_10] =
   &VAR_7->context[VAR_11].vcxt[VAR_12].eth;
 }
}
