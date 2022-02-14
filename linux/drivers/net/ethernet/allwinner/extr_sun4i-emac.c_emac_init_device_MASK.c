
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct emac_board_info {int lock; scalar_t__ membase; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 struct emac_board_info* FUNC_2 (struct net_device*) ;
 unsigned int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_5)
{
 struct emac_board_info *VAR_6 = FUNC_2(VAR_5);
 unsigned long VAR_7;
 unsigned int VAR_8;

 FUNC_4(&VAR_6->lock, VAR_7);

 FUNC_1(VAR_5);
 FUNC_0(VAR_5);


 VAR_8 = FUNC_3(VAR_6->membase + VAR_0);
 FUNC_6(VAR_8 | VAR_1 | VAR_3 | VAR_2,
  VAR_6->membase + VAR_0);


 VAR_8 = FUNC_3(VAR_6->membase + VAR_4);
 VAR_8 |= (0xf << 0) | (0x01 << 8);
 FUNC_6(VAR_8, VAR_6->membase + VAR_4);

 FUNC_5(&VAR_6->lock, VAR_7);
}
