
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct emac_board_info {scalar_t__ membase; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 unsigned int VAR_17 ;
 scalar_t__ VAR_18 ;
 struct emac_board_info* FUNC_0 (struct net_device*) ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_3(struct net_device *VAR_19)
{
 struct emac_board_info *VAR_20 = FUNC_0(VAR_19);
 unsigned int VAR_21;


 VAR_21 = FUNC_1(VAR_20->membase + VAR_18);

 FUNC_2(VAR_21 | VAR_17,
  VAR_20->membase + VAR_18);



 VAR_21 = FUNC_1(VAR_20->membase + VAR_3);
 FUNC_2(VAR_21 | VAR_4 |
  VAR_5,
  VAR_20->membase + VAR_3);


 VAR_21 = FUNC_1(VAR_20->membase + VAR_9);
 VAR_21 |= VAR_7;
 VAR_21 |= VAR_6;
 VAR_21 |= VAR_8;
 FUNC_2(VAR_21, VAR_20->membase + VAR_9);


 FUNC_2(VAR_13, VAR_20->membase + VAR_14);


 FUNC_2((VAR_10 << 8) | VAR_11,
  VAR_20->membase + VAR_12);


 FUNC_2((VAR_0 << 8) | VAR_2,
  VAR_20->membase + VAR_1);


 FUNC_2(VAR_16,
  VAR_20->membase + VAR_15);

 return 0;
}
