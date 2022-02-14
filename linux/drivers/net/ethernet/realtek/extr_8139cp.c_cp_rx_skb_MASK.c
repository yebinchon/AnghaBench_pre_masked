
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {scalar_t__ len; int protocol; } ;
struct cp_private {int napi; TYPE_2__* dev; } ;
struct cp_desc {int opts2; } ;
struct TYPE_3__ {int rx_bytes; int rx_packets; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,int ,int ) ;
 int FUNC_1 (struct sk_buff*,TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,struct sk_buff*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static inline void FUNC_6 (struct cp_private *VAR_2, struct sk_buff *VAR_3,
         struct cp_desc *VAR_4)
{
 u32 VAR_5 = FUNC_3(VAR_4->opts2);

 VAR_3->protocol = FUNC_1 (VAR_3, VAR_2->dev);

 VAR_2->dev->stats.rx_packets++;
 VAR_2->dev->stats.rx_bytes += VAR_3->len;

 if (VAR_5 & VAR_1)
  FUNC_0(VAR_3, FUNC_2(VAR_0), FUNC_5(VAR_5 & 0xffff));

 FUNC_4(&VAR_2->napi, VAR_3);
}
