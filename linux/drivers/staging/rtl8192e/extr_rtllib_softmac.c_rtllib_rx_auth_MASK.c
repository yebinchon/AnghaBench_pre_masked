
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct rtllib_rx_stats {int dummy; } ;
struct rtllib_device {int softmac_features; scalar_t__ state; scalar_t__ iw_mode; int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct rtllib_device*,struct sk_buff*) ;
 int FUNC_2 (struct rtllib_device*,struct sk_buff*) ;

__attribute__((used)) static inline int
FUNC_3(struct rtllib_device *VAR_4, struct sk_buff *VAR_5,
        struct rtllib_rx_stats *VAR_6)
{

 if (VAR_4->softmac_features & VAR_0) {
  if (VAR_4->state == VAR_3 &&
      (VAR_4->iw_mode == VAR_1)) {
   FUNC_0(VAR_4->dev,
       "Received authentication response");
   FUNC_1(VAR_4, VAR_5);
  } else if (VAR_4->iw_mode == VAR_2) {
   FUNC_2(VAR_4, VAR_5);
  }
 }
 return 0;
}
