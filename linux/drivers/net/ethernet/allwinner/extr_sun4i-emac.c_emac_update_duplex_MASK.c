
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct emac_board_info {scalar_t__ membase; scalar_t__ duplex; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct emac_board_info* FUNC_0 (struct net_device*) ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_2)
{
 struct emac_board_info *VAR_3 = FUNC_0(VAR_2);
 unsigned int VAR_4;


 VAR_4 = FUNC_1(VAR_3->membase + VAR_1);
 VAR_4 &= ~VAR_0;
 if (VAR_3->duplex)
  VAR_4 |= VAR_0;
 FUNC_2(VAR_4, VAR_3->membase + VAR_1);
}
