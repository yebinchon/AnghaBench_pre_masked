
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_device {int flags; scalar_t__ mem_start; } ;
struct lance_regs {int rdp; int rap; } ;
struct lance_private {scalar_t__ tx_old; scalar_t__ tx_new; int type; int multicast_timer; struct lance_regs* ll; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct lance_private*) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int * FUNC_3 (int volatile*,int ,int ) ;
 int FUNC_4 (struct lance_private*) ;
 int FUNC_5 (int *,scalar_t__) ;
 int VAR_6 ;
 struct lance_private* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (int *,int ) ;

__attribute__((used)) static void FUNC_11(struct net_device *VAR_7)
{
 struct lance_private *VAR_8 = FUNC_6(VAR_7);
 volatile u16 *VAR_9 = (volatile u16 *)VAR_7->mem_start;
 volatile struct lance_regs *VAR_10 = VAR_8->ll;

 if (!FUNC_7(VAR_7))
  return;

 if (VAR_8->tx_old != VAR_8->tx_new) {
  FUNC_5(&VAR_8->multicast_timer, VAR_5 + 4 * VAR_0/100);
  FUNC_9(VAR_7);
  return;
 }

 FUNC_8(VAR_7);

 FUNC_10(&VAR_10->rap, VAR_3);
 FUNC_10(&VAR_10->rdp, VAR_2);

 FUNC_1(VAR_7);

 if (VAR_7->flags & VAR_1) {
  *FUNC_3(VAR_9, VAR_6, VAR_8->type) |= VAR_4;
 } else {
  *FUNC_3(VAR_9, VAR_6, VAR_8->type) &= ~VAR_4;
  FUNC_2(VAR_7);
 }
 FUNC_4(VAR_8);
 FUNC_0(VAR_8);
 FUNC_9(VAR_7);
}
