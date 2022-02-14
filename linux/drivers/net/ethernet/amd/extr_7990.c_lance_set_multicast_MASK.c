
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int flags; } ;
struct lance_private {scalar_t__ tx_old; scalar_t__ tx_new; struct lance_init_block* init_block; } ;
struct lance_init_block {int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct lance_private*,int ) ;
 int FUNC_1 (struct lance_private*,int ) ;
 int FUNC_2 (struct lance_private*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct lance_private*) ;
 struct lance_private* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 () ;

void FUNC_11(struct net_device *VAR_4)
{
 struct lance_private *VAR_5 = FUNC_6(VAR_4);
 volatile struct lance_init_block *VAR_6 = VAR_5->init_block;
 int VAR_7;

 VAR_7 = FUNC_7(VAR_4);
 if (!VAR_7)
  FUNC_9(VAR_4);

 while (VAR_5->tx_old != VAR_5->tx_new)
  FUNC_10();

 FUNC_0(VAR_5, VAR_2);
 FUNC_1(VAR_5, VAR_1);
 FUNC_3(VAR_4);

 if (VAR_4->flags & VAR_0) {
  VAR_6->mode |= VAR_3;
 } else {
  VAR_6->mode &= ~VAR_3;
  FUNC_4(VAR_4);
 }
 FUNC_5(VAR_5);
 FUNC_2(VAR_5);

 if (!VAR_7)
  FUNC_8(VAR_4);
}
