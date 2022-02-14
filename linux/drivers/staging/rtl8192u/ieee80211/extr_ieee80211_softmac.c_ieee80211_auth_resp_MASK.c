
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int len; scalar_t__ data; } ;
struct ieee80211_device {int tx_headroom; TYPE_1__* dev; } ;
struct TYPE_4__ {void* frame_ctl; int addr1; int addr2; int addr3; } ;
struct ieee80211_authentication {TYPE_2__ header; void* algorithm; void* transaction; void* status; } ;
struct TYPE_3__ {int * dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 struct sk_buff* FUNC_1 (int) ;
 int FUNC_2 (int ,int *,int ) ;

__attribute__((used)) static struct sk_buff *FUNC_3(struct ieee80211_device *VAR_3,
        int VAR_4, u8 *VAR_5)
{
 struct sk_buff *VAR_6;
 struct ieee80211_authentication *VAR_7;
 int VAR_8 = VAR_3->tx_headroom + sizeof(struct ieee80211_authentication) + 1;

 VAR_6 = FUNC_1(VAR_8);

 if (!VAR_6)
  return ((void*)0);

 VAR_6->len = sizeof(struct ieee80211_authentication);

 VAR_7 = (struct ieee80211_authentication *)VAR_6->data;

 VAR_7->status = FUNC_0(VAR_4);
 VAR_7->transaction = FUNC_0(2);
 VAR_7->algorithm = FUNC_0(VAR_2);

 FUNC_2(VAR_7->header.addr3, VAR_3->dev->dev_addr, VAR_0);
 FUNC_2(VAR_7->header.addr2, VAR_3->dev->dev_addr, VAR_0);
 FUNC_2(VAR_7->header.addr1, VAR_5, VAR_0);
 VAR_7->header.frame_ctl = FUNC_0(VAR_1);
 return VAR_6;
}
