
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wsm_rx {int rcpi_rssi; void* status; void* flags; void* rx_rate; int channel_number; } ;
struct wsm_buf {size_t data; size_t begin; } ;
struct sk_buff {scalar_t__ data; } ;
struct ieee80211_hdr {int frame_control; } ;
struct cw1200_common {scalar_t__ join_status; int unjoin_work; int workqueue; int cqm_use_rssi; } ;
typedef int __le16 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wsm_buf*) ;
 void* FUNC_1 (struct wsm_buf*) ;
 void* FUNC_2 (struct wsm_buf*) ;
 int FUNC_3 (struct cw1200_common*,struct wsm_rx*,int,struct sk_buff**) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 int FUNC_9 (struct sk_buff*,size_t) ;
 int FUNC_10 (struct sk_buff*,size_t) ;
 int FUNC_11 (struct cw1200_common*) ;
 int FUNC_12 (struct cw1200_common*) ;

__attribute__((used)) static int FUNC_13(struct cw1200_common *VAR_2,
      int VAR_3,
      struct wsm_buf *VAR_4,
      struct sk_buff **VAR_5)
{
 struct wsm_rx VAR_6;
 struct ieee80211_hdr *VAR_7;
 size_t VAR_8;
 __le16 VAR_9;

 VAR_6.status = FUNC_1(VAR_4);
 VAR_6.channel_number = FUNC_0(VAR_4);
 VAR_6.rx_rate = FUNC_2(VAR_4);
 VAR_6.rcpi_rssi = FUNC_2(VAR_4);
 VAR_6.flags = FUNC_1(VAR_4);




 VAR_7 = (struct ieee80211_hdr *)(*VAR_5)->data;

 if (!VAR_6.rcpi_rssi &&
     (FUNC_6(VAR_7->frame_control) ||
      FUNC_4(VAR_7->frame_control)))
  return 0;




 if (!VAR_2->cqm_use_rssi)
  VAR_6.rcpi_rssi = VAR_6.rcpi_rssi / 2 - 110;

 VAR_9 = *(__le16 *)VAR_4->data;
 VAR_8 = VAR_4->data - VAR_4->begin;
 FUNC_9(*VAR_5, VAR_8);
 if (!VAR_6.status && FUNC_5(VAR_9)) {
  if (VAR_2->join_status == VAR_0) {

   FUNC_7("[WSM] Issue unjoin command (RX).\n");
   FUNC_11(VAR_2);
   if (FUNC_8(VAR_2->workqueue,
           &VAR_2->unjoin_work) <= 0)
    FUNC_12(VAR_2);
  }
 }
 FUNC_3(VAR_2, &VAR_6, VAR_3, VAR_5);
 if (*VAR_5)
  FUNC_10(*VAR_5, VAR_8);

 return 0;

underflow:
 return -VAR_1;
}
