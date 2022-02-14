
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct rtllib_hdr_3addr {int frame_ctl; int addr3; int addr2; int addr1; } ;
struct TYPE_4__ {int bssid; } ;
struct rtllib_device {TYPE_2__ current_network; TYPE_1__* dev; int tx_headroom; } ;
struct TYPE_3__ {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 struct sk_buff* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 struct rtllib_hdr_3addr* FUNC_3 (struct sk_buff*,int) ;
 int FUNC_4 (struct sk_buff*,int ) ;

__attribute__((used)) static struct sk_buff *FUNC_5(struct rtllib_device *VAR_4, short VAR_5)
{
 struct sk_buff *VAR_6;
 struct rtllib_hdr_3addr *VAR_7;

 VAR_6 = FUNC_1(sizeof(struct rtllib_hdr_3addr)+VAR_4->tx_headroom);
 if (!VAR_6)
  return ((void*)0);

 FUNC_4(VAR_6, VAR_4->tx_headroom);

 VAR_7 = FUNC_3(VAR_6, sizeof(struct rtllib_hdr_3addr));

 FUNC_2(VAR_7->addr1, VAR_4->current_network.bssid);
 FUNC_2(VAR_7->addr2, VAR_4->dev->dev_addr);
 FUNC_2(VAR_7->addr3, VAR_4->current_network.bssid);

 VAR_7->frame_ctl = FUNC_0(VAR_2 |
  VAR_3 | VAR_1 |
  (VAR_5 ? VAR_0 : 0));

 return VAR_6;


}
