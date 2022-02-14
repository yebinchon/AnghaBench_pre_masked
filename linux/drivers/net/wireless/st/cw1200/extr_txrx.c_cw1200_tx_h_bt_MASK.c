
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct wsm_tx {scalar_t__ queue_id; int flags; } ;
struct TYPE_6__ {int listen_interval; } ;
struct TYPE_7__ {TYPE_2__ assoc_req; } ;
struct ieee80211_mgmt {TYPE_3__ u; } ;
struct cw1200_txinfo {size_t hdrlen; TYPE_4__* hdr; TYPE_1__* skb; } ;
struct cw1200_common {scalar_t__ listen_interval; int bt_present; } ;
typedef int __be16 ;
struct TYPE_8__ {int frame_control; } ;
struct TYPE_5__ {int* data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (char*,int,...) ;

__attribute__((used)) static void
FUNC_10(struct cw1200_common *VAR_9,
        struct cw1200_txinfo *VAR_10,
        struct wsm_tx *VAR_11)
{
 u8 VAR_12 = 0;

 if (!VAR_9->bt_present)
  return;

 if (FUNC_6(VAR_10->hdr->frame_control)) {
  VAR_12 = VAR_4;
 } else if (FUNC_4(VAR_10->hdr->frame_control)) {

  u8 *VAR_13 = &VAR_10->skb->data[VAR_10->hdrlen];
  __be16 *VAR_14 = (__be16 *)&VAR_13[6];
  if (FUNC_0(*VAR_14) == VAR_0)
   VAR_12 = VAR_3;
 } else if (FUNC_3(VAR_10->hdr->frame_control) ||
  FUNC_7(VAR_10->hdr->frame_control)) {
  struct ieee80211_mgmt *VAR_15 =
    (struct ieee80211_mgmt *)VAR_10->hdr;

  if (FUNC_8(VAR_15->u.assoc_req.listen_interval) <
      VAR_9->listen_interval) {
   FUNC_9("Modified Listen Interval to %d from %d\n",
     VAR_9->listen_interval,
     VAR_15->u.assoc_req.listen_interval);



   VAR_15->u.assoc_req.listen_interval = FUNC_1(VAR_9->listen_interval);
  }
 }

 if (!VAR_12) {
  if (FUNC_2(VAR_10->hdr->frame_control))
   VAR_12 = VAR_1;
  else if (FUNC_5(VAR_10->hdr->frame_control))
   VAR_12 = VAR_4;
  else if (VAR_11->queue_id == VAR_8)
   VAR_12 = VAR_6;
  else if (VAR_11->queue_id == VAR_7)
   VAR_12 = VAR_5;
  else
   VAR_12 = VAR_2;
 }

 FUNC_9("[TX] EPTA priority %d.\n", VAR_12);

 VAR_11->flags |= VAR_12 << 1;
}
