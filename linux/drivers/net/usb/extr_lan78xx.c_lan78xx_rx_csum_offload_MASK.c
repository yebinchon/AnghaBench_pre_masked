
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct sk_buff {int ip_summed; int csum; } ;
struct lan78xx_net {TYPE_1__* net; } ;
struct TYPE_2__ {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct lan78xx_net *VAR_7,
        struct sk_buff *VAR_8,
        u32 VAR_9, u32 VAR_10)
{



 if (!(VAR_7->net->features & VAR_3) ||
     FUNC_1(VAR_9 & VAR_5) ||
     ((VAR_9 & VAR_4) &&
      !(VAR_7->net->features & VAR_2))) {
  VAR_8->ip_summed = VAR_1;
 } else {
  VAR_8->csum = FUNC_0((u16)(VAR_10 >> VAR_6));
  VAR_8->ip_summed = VAR_0;
 }
}
