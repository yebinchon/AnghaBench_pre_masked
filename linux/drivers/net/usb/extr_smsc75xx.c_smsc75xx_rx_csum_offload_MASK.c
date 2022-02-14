
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct usbnet {TYPE_1__* net; } ;
struct sk_buff {int ip_summed; int csum; } ;
struct TYPE_2__ {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct usbnet *VAR_5, struct sk_buff *VAR_6,
         u32 VAR_7, u32 VAR_8)
{
 if (!(VAR_5->net->features & VAR_2) ||
     FUNC_1(VAR_7 & VAR_3)) {
  VAR_6->ip_summed = VAR_1;
 } else {
  VAR_6->csum = FUNC_0((u16)(VAR_8 >> VAR_4));
  VAR_6->ip_summed = VAR_0;
 }
}
