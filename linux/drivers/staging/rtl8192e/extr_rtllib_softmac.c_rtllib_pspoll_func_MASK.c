
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct rtllib_pspoll_hdr {void* frame_ctl; void* aid; int ta; int bssid; } ;
struct TYPE_3__ {int bssid; } ;
struct rtllib_device {int assoc_id; TYPE_2__* dev; TYPE_1__ current_network; int tx_headroom; } ;
struct TYPE_4__ {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 struct sk_buff* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 struct rtllib_pspoll_hdr* FUNC_3 (struct sk_buff*,int) ;
 int FUNC_4 (struct sk_buff*,int ) ;

__attribute__((used)) static struct sk_buff *FUNC_5(struct rtllib_device *VAR_3)
{
 struct sk_buff *VAR_4;
 struct rtllib_pspoll_hdr *VAR_5;

 VAR_4 = FUNC_1(sizeof(struct rtllib_pspoll_hdr)+VAR_3->tx_headroom);
 if (!VAR_4)
  return ((void*)0);

 FUNC_4(VAR_4, VAR_3->tx_headroom);

 VAR_5 = FUNC_3(VAR_4, sizeof(struct rtllib_pspoll_hdr));

 FUNC_2(VAR_5->bssid, VAR_3->current_network.bssid);
 FUNC_2(VAR_5->ta, VAR_3->dev->dev_addr);

 VAR_5->aid = FUNC_0(VAR_3->assoc_id | 0xc000);
 VAR_5->frame_ctl = FUNC_0(VAR_1 | VAR_2 |
    VAR_0);

 return VAR_4;

}
