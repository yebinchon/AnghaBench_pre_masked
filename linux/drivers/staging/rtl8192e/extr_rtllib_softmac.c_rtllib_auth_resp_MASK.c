
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int len; } ;
struct rtllib_device {TYPE_1__* dev; int tx_headroom; } ;
struct TYPE_4__ {void* frame_ctl; int addr1; int addr2; int addr3; } ;
struct rtllib_authentication {TYPE_2__ header; void* algorithm; void* transaction; void* status; } ;
struct TYPE_3__ {int * dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 struct sk_buff* FUNC_1 (int) ;
 int FUNC_2 (int ,int *) ;
 struct rtllib_authentication* FUNC_3 (struct sk_buff*,int) ;
 int FUNC_4 (struct sk_buff*,int ) ;

__attribute__((used)) static struct sk_buff *FUNC_5(struct rtllib_device *VAR_2, int VAR_3,
     u8 *VAR_4)
{
 struct sk_buff *VAR_5 = ((void*)0);
 struct rtllib_authentication *VAR_6;
 int VAR_7 = VAR_2->tx_headroom + sizeof(struct rtllib_authentication) + 1;

 VAR_5 = FUNC_1(VAR_7);
 if (!VAR_5)
  return ((void*)0);

 VAR_5->len = sizeof(struct rtllib_authentication);

 FUNC_4(VAR_5, VAR_2->tx_headroom);

 VAR_6 = FUNC_3(VAR_5, sizeof(struct rtllib_authentication));

 VAR_6->status = FUNC_0(VAR_3);
 VAR_6->transaction = FUNC_0(2);
 VAR_6->algorithm = FUNC_0(VAR_1);

 FUNC_2(VAR_6->header.addr3, VAR_2->dev->dev_addr);
 FUNC_2(VAR_6->header.addr2, VAR_2->dev->dev_addr);
 FUNC_2(VAR_6->header.addr1, VAR_4);
 VAR_6->header.frame_ctl = FUNC_0(VAR_0);
 return VAR_5;


}
