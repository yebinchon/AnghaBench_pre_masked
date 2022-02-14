
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int flags; } ;
struct lance_regs {int rdp; int rap; } ;
struct lance_private {scalar_t__ tx_old; scalar_t__ tx_new; int multicast_timer; struct lance_regs* ll; struct lance_init_block* init_block; } ;
struct lance_init_block {int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct lance_private*) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct lance_private*) ;
 int FUNC_4 (int *,scalar_t__) ;
 struct lance_private* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;

__attribute__((used)) static void FUNC_9(struct net_device *VAR_5)
{
 struct lance_private *VAR_6 = FUNC_5(VAR_5);
 volatile struct lance_init_block *VAR_7 = VAR_6->init_block;
 volatile struct lance_regs *VAR_8 = VAR_6->ll;

 if (!FUNC_6(VAR_5))
  return;

 if (VAR_6->tx_old != VAR_6->tx_new) {
  FUNC_4(&VAR_6->multicast_timer, VAR_4 + 4);
  FUNC_8(VAR_5);
  return;
 }

 FUNC_7(VAR_5);

 VAR_8->rap = VAR_2;
 VAR_8->rdp = VAR_1;
 FUNC_1(VAR_5);

 if (VAR_5->flags & VAR_0) {
  VAR_7->mode |= VAR_3;
 } else {
  VAR_7->mode &= ~VAR_3;
  FUNC_2(VAR_5);
 }
 FUNC_3(VAR_6);
 FUNC_0(VAR_6);
 FUNC_8(VAR_5);
}
