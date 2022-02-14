
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct m_can_classdev {int dummy; } ;
struct can_berr_counter {unsigned int rxerr; unsigned int txerr; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_0 (struct m_can_classdev*,int ) ;
 struct m_can_classdev* FUNC_1 (struct net_device const*) ;

__attribute__((used)) static int FUNC_2(const struct net_device *VAR_5,
        struct can_berr_counter *VAR_6)
{
 struct m_can_classdev *VAR_7 = FUNC_1(VAR_5);
 unsigned int VAR_8;

 VAR_8 = FUNC_0(VAR_7, VAR_4);
 VAR_6->rxerr = (VAR_8 & VAR_0) >> VAR_1;
 VAR_6->txerr = (VAR_8 & VAR_2) >> VAR_3;

 return 0;
}
