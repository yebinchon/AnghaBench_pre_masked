
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct sk_buff {int ip_summed; } ;
struct e1000_adapter {int hw_csum_good; int hw_csum_err; TYPE_1__* netdev; } ;
struct TYPE_2__ {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_1(struct e1000_adapter *VAR_7, u32 VAR_8,
         struct sk_buff *VAR_9)
{
 u16 VAR_10 = (u16)VAR_8;
 u8 VAR_11 = (u8)(VAR_8 >> 24);

 FUNC_0(VAR_9);


 if (!(VAR_7->netdev->features & VAR_6))
  return;


 if (VAR_10 & VAR_3)
  return;


 if (VAR_11 & (VAR_2 | VAR_1)) {

  VAR_7->hw_csum_err++;
  return;
 }


 if (!(VAR_10 & (VAR_4 | VAR_5)))
  return;


 VAR_9->ip_summed = VAR_0;
 VAR_7->hw_csum_good++;
}
