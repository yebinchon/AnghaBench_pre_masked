
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct list_head {int dummy; } ;
struct htc_target {int tx_bndl_mask; TYPE_4__* dev; int msg_per_bndl_max; } ;
struct htc_packet {int act_len; int buf; int endpoint; int status; } ;
struct htc_endpoint {scalar_t__ svc_id; size_t eid; struct htc_target* target; } ;
struct hif_scatter_req {scalar_t__ scat_q_depth; int scat_entries; TYPE_1__* scat_list; int len; int complete; } ;
struct TYPE_7__ {TYPE_2__* ar; } ;
struct TYPE_6__ {int* ep2ac_map; } ;
struct TYPE_5__ {struct htc_packet* packet; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (TYPE_4__*,struct hif_scatter_req*,int) ;
 int FUNC_2 (struct htc_target*,struct htc_endpoint*,struct hif_scatter_req*,int,struct list_head*) ;
 int FUNC_3 (struct list_head*) ;
 int FUNC_4 (TYPE_2__*,struct hif_scatter_req*) ;
 struct hif_scatter_req* FUNC_5 (TYPE_2__*) ;
 int VAR_9 ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_8(struct htc_endpoint *VAR_10,
     struct list_head *VAR_11,
     int *VAR_12, int *VAR_13)
{
 struct htc_target *VAR_14 = VAR_10->target;
 struct hif_scatter_req *VAR_15 = ((void*)0);
 int VAR_16, VAR_17 = 0, VAR_18 = 0, VAR_19;
 struct htc_packet *VAR_20;
 int VAR_21;
 u32 VAR_22;
 u8 VAR_23 = VAR_8;

 if ((VAR_3 != VAR_10->svc_id) &&
     (VAR_5 != VAR_10->svc_id))
  VAR_23 = VAR_14->dev->ar->ep2ac_map[VAR_10->eid];

 while (1) {
  VAR_21 = 0;
  VAR_16 = FUNC_3(VAR_11);
  VAR_16 = FUNC_6(VAR_16, VAR_14->msg_per_bndl_max);

  if (VAR_16 < VAR_4)

   break;

  VAR_15 = FUNC_5(VAR_14->dev->ar);

  if (!VAR_15) {

   FUNC_0(VAR_0,
       "htc tx no more scatter resources\n");
   break;
  }

  if ((VAR_23 < VAR_8) && (VAR_23 != VAR_7)) {
   if (VAR_6 == VAR_23)




    VAR_22 = (1 << VAR_7);
   else




    VAR_22 = ((1 << VAR_23) - 1);







   if (VAR_15->scat_q_depth < VAR_1)
    VAR_14->tx_bndl_mask &= ~VAR_22;
   else
    VAR_14->tx_bndl_mask |= VAR_22;
  }

  FUNC_0(VAR_0, "htc tx pkts to scatter: %d\n",
      VAR_16);

  VAR_15->len = 0;
  VAR_15->scat_entries = 0;

  VAR_21 = FUNC_2(VAR_14, VAR_10,
             VAR_15, VAR_16,
             VAR_11);
  if (VAR_21 == -VAR_2) {
   FUNC_4(VAR_14->dev->ar, VAR_15);
   break;
  }


  VAR_15->complete = VAR_9;
  VAR_17++;
  VAR_18 += VAR_15->scat_entries;

  FUNC_0(VAR_0,
      "htc tx scatter bytes %d entries %d\n",
      VAR_15->len, VAR_15->scat_entries);

  for (VAR_19 = 0; VAR_19 < VAR_15->scat_entries; VAR_19++) {
   VAR_20 = VAR_15->scat_list[VAR_19].packet;
   FUNC_7(VAR_20->status, VAR_20->endpoint,
         VAR_20->buf, VAR_20->act_len);
  }

  FUNC_1(VAR_14->dev, VAR_15, 0);

  if (VAR_21)
   break;
 }

 *VAR_12 = VAR_17;
 *VAR_13 = VAR_18;
 FUNC_0(VAR_0, "htc tx bundle sent %d pkts\n",
     VAR_17);

 return;
}
