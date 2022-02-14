
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
typedef int u16 ;
struct TYPE_10__ {int state; int txq_id; } ;
struct il_tid_data {TYPE_5__ agg; int tfds_in_queue; int seq_number; } ;
struct il_queue {int write_ptr; int read_ptr; } ;
struct il_priv {int vif; TYPE_4__* stations; int sta_lock; TYPE_1__* txq; } ;
struct TYPE_7__ {size_t* addr; } ;
struct TYPE_8__ {TYPE_2__ sta; } ;
struct TYPE_9__ {struct il_tid_data* tid; TYPE_3__ sta; } ;
struct TYPE_6__ {struct il_queue q; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;


 int FUNC_2 (int ,size_t*,size_t) ;
 int FUNC_3 (int ,size_t*,size_t) ;
 int FUNC_4 (size_t) ;
 int FUNC_5 (struct il_priv*,int,int ,int) ;
 int FUNC_6 (int *) ;

int
FUNC_7(struct il_priv *VAR_2, int VAR_3, u8 VAR_4, int VAR_5)
{
 struct il_queue *VAR_6 = &VAR_2->txq[VAR_5].q;
 u8 *VAR_7 = VAR_2->stations[VAR_3].sta.sta.addr;
 struct il_tid_data *VAR_8 = &VAR_2->stations[VAR_3].tid[VAR_4];

 FUNC_6(&VAR_2->sta_lock);

 switch (VAR_2->stations[VAR_3].tid[VAR_4].agg.state) {
 case 128:


  if (VAR_5 == VAR_8->agg.txq_id &&
      VAR_6->read_ptr == VAR_6->write_ptr) {
   u16 VAR_9 = FUNC_1(VAR_8->seq_number);
   int VAR_10 = FUNC_4(VAR_4);
   FUNC_0("HW queue empty: continue DELBA flow\n");
   FUNC_5(VAR_2, VAR_5, VAR_9, VAR_10);
   VAR_8->agg.state = VAR_0;
   FUNC_3(VAR_2->vif, VAR_7, VAR_4);
  }
  break;
 case 129:

  if (VAR_8->tfds_in_queue == 0) {
   FUNC_0("HW queue empty: continue ADDBA flow\n");
   VAR_8->agg.state = VAR_1;
   FUNC_2(VAR_2->vif, VAR_7, VAR_4);
  }
  break;
 }

 return 0;
}
