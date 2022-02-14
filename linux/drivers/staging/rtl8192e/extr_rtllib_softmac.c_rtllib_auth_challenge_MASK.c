
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct rtllib_network {int bssid; } ;
struct rtllib_hdr_3addr {int dummy; } ;
struct TYPE_2__ {int tx_auth_rq; } ;
struct rtllib_device {int associate_timer; int dev; TYPE_1__ softmac_stats; int associate_seq; struct rtllib_network current_network; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct rtllib_device*) ;
 struct sk_buff* FUNC_5 (struct rtllib_network*,struct rtllib_device*,int,int ) ;
 int FUNC_6 (struct rtllib_device*,struct sk_buff*,int) ;
 int * FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (struct sk_buff*,struct rtllib_device*) ;

__attribute__((used)) static void FUNC_9(struct rtllib_device *VAR_3, u8 *VAR_4,
      int VAR_5)
{
 u8 *VAR_6;
 struct sk_buff *VAR_7;
 struct rtllib_network *VAR_8 = &VAR_3->current_network;

 VAR_3->associate_seq++;
 VAR_3->softmac_stats.tx_auth_rq++;

 VAR_7 = FUNC_5(VAR_8, VAR_3, VAR_5 + 2, VAR_8->bssid);

 if (!VAR_7)
  FUNC_4(VAR_3);
 else {
  VAR_6 = FUNC_7(VAR_7, VAR_5+2);
  *(VAR_6++) = VAR_1;
  *(VAR_6++) = VAR_5;
  FUNC_1(VAR_6, VAR_4, VAR_5);

  FUNC_3(VAR_3->dev,
      "Sending authentication challenge response\n");

  FUNC_6(VAR_3, VAR_7,
     sizeof(struct rtllib_hdr_3addr));

  FUNC_8(VAR_7, VAR_3);
  FUNC_2(&VAR_3->associate_timer, VAR_2 + (VAR_0/2));
 }
 FUNC_0(VAR_4);
}
