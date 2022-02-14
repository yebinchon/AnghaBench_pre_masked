
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct urb {int actual_length; int transfer_buffer; } ;
struct TYPE_2__ {scalar_t__ phyirq; } ;
struct lan78xx_net {int net; TYPE_1__ domain_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct lan78xx_net*,int ) ;
 int VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (struct lan78xx_net*,int ,int ,char*,int) ;

__attribute__((used)) static void FUNC_7(struct lan78xx_net *VAR_3, struct urb *VAR_4)
{
 u32 VAR_5;

 if (VAR_4->actual_length != 4) {
  FUNC_5(VAR_3->net,
       "unexpected urb length %d", VAR_4->actual_length);
  return;
 }

 VAR_5 = FUNC_1(VAR_4->transfer_buffer);

 if (VAR_5 & VAR_1) {
  FUNC_6(VAR_3, VAR_2, VAR_3->net, "PHY INTR: 0x%08x\n", VAR_5);
  FUNC_2(VAR_3, VAR_0);

  if (VAR_3->domain_data.phyirq > 0) {
   FUNC_3();
   FUNC_0(VAR_3->domain_data.phyirq);
   FUNC_4();
  }
 } else
  FUNC_5(VAR_3->net,
       "unexpected interrupt: 0x%08x\n", VAR_5);
}
