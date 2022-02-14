
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct can_berr_counter {unsigned int rxerr; unsigned int txerr; } ;
struct c_can_priv {unsigned int (* read_reg ) (struct c_can_priv*,int ) ;} ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 struct c_can_priv* FUNC_0 (struct net_device const*) ;
 unsigned int FUNC_1 (struct c_can_priv*,int ) ;

__attribute__((used)) static int FUNC_2(const struct net_device *VAR_4,
        struct can_berr_counter *VAR_5)
{
 unsigned int VAR_6;
 struct c_can_priv *VAR_7 = FUNC_0(VAR_4);

 VAR_6 = VAR_7->read_reg(VAR_7, VAR_0);
 VAR_5->rxerr = (VAR_6 & VAR_1) >>
    VAR_2;
 VAR_5->txerr = VAR_6 & VAR_3;

 return 0;
}
