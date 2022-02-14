
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int rx_auth_rq; } ;
struct rtllib_device {int dev; TYPE_1__ softmac_stats; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct sk_buff*,int *) ;
 int FUNC_1 (struct rtllib_device*,int,int *) ;

__attribute__((used)) static inline void FUNC_2(struct rtllib_device *VAR_1,
         struct sk_buff *VAR_2)
{
 u8 VAR_3[VAR_0];
 int VAR_4;

 VAR_1->softmac_stats.rx_auth_rq++;

 VAR_4 = FUNC_0(VAR_1->dev, VAR_2, VAR_3);
 if (VAR_4 != -1)
  FUNC_1(VAR_1, VAR_4, VAR_3);
}
