
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {int dummy; } ;
struct rtllib_network {int bssid; } ;
struct TYPE_4__ {int addr3; int addr2; int addr1; scalar_t__ duration_id; void* frame_ctl; } ;
struct rtllib_disauth {void* reason; TYPE_2__ header; } ;
struct rtllib_device {TYPE_1__* dev; int tx_headroom; } ;
struct TYPE_3__ {int dev_addr; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 struct sk_buff* FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 struct rtllib_disauth* FUNC_3 (struct sk_buff*,int) ;
 int FUNC_4 (struct sk_buff*,int ) ;

__attribute__((used)) static inline struct sk_buff *
FUNC_5(struct rtllib_network *VAR_1,
     struct rtllib_device *VAR_2, u16 VAR_3)
{
 struct sk_buff *VAR_4;
 struct rtllib_disauth *VAR_5;
 int VAR_6 = sizeof(struct rtllib_disauth) + VAR_2->tx_headroom;

 VAR_4 = FUNC_1(VAR_6);
 if (!VAR_4)
  return ((void*)0);

 FUNC_4(VAR_4, VAR_2->tx_headroom);

 VAR_5 = FUNC_3(VAR_4, sizeof(struct rtllib_disauth));
 VAR_5->header.frame_ctl = FUNC_0(VAR_0);
 VAR_5->header.duration_id = 0;

 FUNC_2(VAR_5->header.addr1, VAR_1->bssid);
 FUNC_2(VAR_5->header.addr2, VAR_2->dev->dev_addr);
 FUNC_2(VAR_5->header.addr3, VAR_1->bssid);

 VAR_5->reason = FUNC_0(VAR_3);
 return VAR_4;
}
