
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct emac_board_info {scalar_t__ membase; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 struct emac_board_info* FUNC_0 (struct net_device*) ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_6)
{
 unsigned int VAR_7;
 struct emac_board_info *VAR_8 = FUNC_0(VAR_6);


 FUNC_2(0, VAR_8->membase + VAR_4);


 VAR_7 = FUNC_1(VAR_8->membase + VAR_5);
 FUNC_2(VAR_7, VAR_8->membase + VAR_5);


 VAR_7 = FUNC_1(VAR_8->membase + VAR_0);
 VAR_7 &= ~(VAR_3 | VAR_2 | VAR_1);
 FUNC_2(VAR_7, VAR_8->membase + VAR_0);
}
