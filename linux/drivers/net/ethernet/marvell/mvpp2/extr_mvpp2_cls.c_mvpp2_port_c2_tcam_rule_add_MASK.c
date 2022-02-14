
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct mvpp2_rfs_rule {int c2_index; int c2_tcam; int c2_tcam_mask; int loc; TYPE_2__* flow; } ;
struct mvpp2_port {int first_rxq; int priv; int id; } ;
struct mvpp2_cls_c2_entry {int index; int* tcam; int act; int* attr; int valid; } ;
struct TYPE_6__ {int index; scalar_t__ ctx; } ;
struct flow_action_entry {scalar_t__ id; TYPE_3__ queue; } ;
typedef int c2 ;
struct TYPE_4__ {struct flow_action_entry* entries; } ;
struct TYPE_5__ {TYPE_1__ action; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int VAR_6 ;
 int FUNC_7 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int VAR_9 ;
 int FUNC_11 (struct mvpp2_cls_c2_entry*,int ,int) ;
 int FUNC_12 (struct mvpp2_port*,scalar_t__) ;
 int FUNC_13 (struct mvpp2_port*,int ) ;
 int FUNC_14 (int ,struct mvpp2_cls_c2_entry*) ;

__attribute__((used)) static int FUNC_15(struct mvpp2_port *VAR_10,
           struct mvpp2_rfs_rule *VAR_11)
{
 struct flow_action_entry *VAR_12;
 struct mvpp2_cls_c2_entry VAR_13;
 u8 VAR_14, VAR_15, VAR_16;
 int VAR_17, VAR_18;

 FUNC_11(&VAR_13, 0, sizeof(VAR_13));

 VAR_17 = FUNC_13(VAR_10, VAR_11->loc);
 if (VAR_17 < 0)
  return -VAR_0;
 VAR_13 = VAR_17;

 VAR_12 = &VAR_11->flow->action.entries[0];

 VAR_11->c2_index = VAR_13;

 VAR_13[3] = (VAR_11->c2_tcam & 0xffff) |
       ((VAR_11->c2_tcam_mask & 0xffff) << 16);
 VAR_13[2] = ((VAR_11->c2_tcam >> 16) & 0xffff) |
       (((VAR_11->c2_tcam_mask >> 16) & 0xffff) << 16);
 VAR_13[1] = ((VAR_11->c2_tcam >> 32) & 0xffff) |
       (((VAR_11->c2_tcam_mask >> 32) & 0xffff) << 16);
 VAR_13[0] = ((VAR_11->c2_tcam >> 48) & 0xffff) |
       (((VAR_11->c2_tcam_mask >> 48) & 0xffff) << 16);

 VAR_16 = FUNC_0(VAR_10->id);
 VAR_13[4] = FUNC_9(VAR_16);
 VAR_13[4] |= FUNC_10(FUNC_9(VAR_16));


 VAR_13[4] |= FUNC_10(FUNC_8(VAR_9));
 VAR_13[4] |= FUNC_8(VAR_11->loc);

 if (VAR_12->id == VAR_1) {
  VAR_13 = FUNC_1(VAR_3);
 } else {





  VAR_13 = FUNC_1(VAR_2);


  if (VAR_12->queue.ctx)
   VAR_13[2] |= VAR_8;





  VAR_13 = FUNC_5(VAR_5);


  VAR_13 |= FUNC_2(VAR_4);

  VAR_13 |= FUNC_3(VAR_5) |
      FUNC_4(VAR_5);

  if (VAR_12->queue.ctx) {

   VAR_18 = FUNC_12(VAR_10, VAR_12->queue.ctx);
   if (VAR_18 < 0)
    return -VAR_0;

   VAR_14 = (VAR_18 >> 3) & VAR_6;
   VAR_15 = VAR_18 & VAR_7;
  } else {
   VAR_14 = ((VAR_12->queue.index + VAR_10->first_rxq) >> 3) &
         VAR_6;
   VAR_15 = (VAR_12->queue.index + VAR_10->first_rxq) &
         VAR_7;
  }

  VAR_13[0] = FUNC_6(VAR_14) |
         FUNC_7(VAR_15);
 }

 VAR_13 = 1;

 FUNC_14(VAR_10->priv, &VAR_13);

 return 0;
}
