
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int flags; } ;
struct greth_regs {int control; int hash_lsb; int hash_msb; } ;
struct greth_private {scalar_t__ multicast; struct greth_regs* regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 struct greth_private* FUNC_4 (struct net_device*) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_4)
{
 int VAR_5;
 struct greth_private *VAR_6 = FUNC_4(VAR_4);
 struct greth_regs *VAR_7 = VAR_6->regs;

 VAR_5 = FUNC_0(VAR_7->control);
 if (VAR_4->flags & VAR_3)
  VAR_5 |= VAR_1;
 else
  VAR_5 &= ~VAR_1;

 if (VAR_6->multicast) {
  if (VAR_4->flags & VAR_2) {
   FUNC_1(VAR_7->hash_msb, -1);
   FUNC_1(VAR_7->hash_lsb, -1);
   VAR_5 |= VAR_0;
   FUNC_1(VAR_7->control, VAR_5);
   return;
  }

  if (FUNC_3(VAR_4)) {
   VAR_5 &= ~VAR_0;
   FUNC_1(VAR_7->control, VAR_5);
   return;
  }


  FUNC_2(VAR_4);
  VAR_5 |= VAR_0;
 }
 FUNC_1(VAR_7->control, VAR_5);
}
