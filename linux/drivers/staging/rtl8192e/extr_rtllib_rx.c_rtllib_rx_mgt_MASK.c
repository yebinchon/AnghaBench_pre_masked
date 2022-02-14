
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct rtllib_rx_stats {int dummy; } ;
struct rtllib_probe_response {int dummy; } ;
struct rtllib_hdr_4addr {int frame_ctl; } ;
struct rtllib_device {int softmac_features; int state; int iw_mode; int dev; int ps_task; int ps; int sta_sleep; int last_rx_ps_time; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int FUNC_0 (int ) ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct rtllib_device*,struct rtllib_probe_response*,struct rtllib_rx_stats*) ;
 int FUNC_4 (struct rtllib_device*,struct sk_buff*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct rtllib_device *VAR_7,
     struct sk_buff *VAR_8,
     struct rtllib_rx_stats *VAR_9)
{
 struct rtllib_hdr_4addr *VAR_10 = (struct rtllib_hdr_4addr *)VAR_8->data;

 if ((FUNC_0(FUNC_1(VAR_10->frame_ctl)) !=
     128) &&
     (FUNC_0(FUNC_1(VAR_10->frame_ctl)) !=
     130))
  VAR_7->last_rx_ps_time = VAR_6;

 switch (FUNC_0(FUNC_1(VAR_10->frame_ctl))) {

 case 130:
  FUNC_2(VAR_7->dev, "received BEACON (%d)\n",
      FUNC_0(FUNC_1(VAR_10->frame_ctl)));
  FUNC_3(
    VAR_7, (struct rtllib_probe_response *)VAR_10,
    VAR_9);

  if (VAR_7->sta_sleep || (VAR_7->ps != VAR_5 &&
      VAR_7->iw_mode == VAR_2 &&
      VAR_7->state == VAR_4))
   FUNC_5(&VAR_7->ps_task);

  break;

 case 128:
  FUNC_2(VAR_7->dev, "received PROBE RESPONSE (%d)\n",
      FUNC_0(FUNC_1(VAR_10->frame_ctl)));
  FUNC_3(VAR_7,
         (struct rtllib_probe_response *)VAR_10, VAR_9);
  break;
 case 129:
  FUNC_2(VAR_7->dev, "received PROBE RESQUEST (%d)\n",
      FUNC_0(FUNC_1(VAR_10->frame_ctl)));
  if ((VAR_7->softmac_features & VAR_0) &&
      ((VAR_7->iw_mode == VAR_1 ||
      VAR_7->iw_mode == VAR_3) &&
      VAR_7->state == VAR_4))
   FUNC_4(VAR_7, VAR_8);
  break;
 }
}
