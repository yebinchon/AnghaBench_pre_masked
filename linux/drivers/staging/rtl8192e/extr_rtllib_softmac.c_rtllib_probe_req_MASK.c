
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct TYPE_5__ {int addr3; int addr2; int addr1; scalar_t__ duration_id; int frame_ctl; } ;
struct rtllib_probe_request {TYPE_2__ header; } ;
struct TYPE_6__ {unsigned int ssid_len; int ssid; } ;
struct rtllib_device {TYPE_3__ current_network; TYPE_1__* dev; scalar_t__ tx_headroom; } ;
struct TYPE_4__ {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct sk_buff* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,int ,unsigned int) ;
 int FUNC_5 (struct rtllib_device*,int **) ;
 int FUNC_6 (struct rtllib_device*,int **) ;
 unsigned int FUNC_7 (struct rtllib_device*) ;
 void* FUNC_8 (struct sk_buff*,unsigned int) ;
 int FUNC_9 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static inline struct sk_buff *FUNC_10(struct rtllib_device *VAR_2)
{
 unsigned int VAR_3, VAR_4;
 u8 *VAR_5;
 struct sk_buff *VAR_6;
 struct rtllib_probe_request *VAR_7;

 VAR_3 = VAR_2->current_network.ssid_len;

 VAR_4 = FUNC_7(VAR_2);

 VAR_6 = FUNC_1(sizeof(struct rtllib_probe_request) +
       2 + VAR_3 + VAR_4 + VAR_2->tx_headroom);

 if (!VAR_6)
  return ((void*)0);

 FUNC_9(VAR_6, VAR_2->tx_headroom);

 VAR_7 = FUNC_8(VAR_6, sizeof(struct rtllib_probe_request));
 VAR_7->header.frame_ctl = FUNC_0(VAR_1);
 VAR_7->header.duration_id = 0;

 FUNC_2(VAR_7->header.addr1);
 FUNC_3(VAR_7->header.addr2, VAR_2->dev->dev_addr);
 FUNC_2(VAR_7->header.addr3);

 VAR_5 = FUNC_8(VAR_6, VAR_3 + 2 + VAR_4);

 *VAR_5++ = VAR_0;
 *VAR_5++ = VAR_3;
 FUNC_4(VAR_5, VAR_2->current_network.ssid, VAR_3);
 VAR_5 += VAR_3;

 FUNC_5(VAR_2, &VAR_5);
 FUNC_6(VAR_2, &VAR_5);

 return VAR_6;
}
