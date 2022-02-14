
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int flags; } ;
struct emac_board_info {scalar_t__ membase; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 struct emac_board_info* FUNC_0 (struct net_device*) ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_8)
{
 struct emac_board_info *VAR_9 = FUNC_0(VAR_8);
 unsigned int VAR_10;


 VAR_10 = FUNC_1(VAR_9->membase + VAR_6);

 if (VAR_8->flags & VAR_7)
  VAR_10 |= VAR_4;
 else
  VAR_10 &= ~VAR_4;

 FUNC_2(VAR_10 | VAR_5 |
  VAR_2 | VAR_3 |
  VAR_1 |
  VAR_0,
  VAR_9->membase + VAR_6);
}
