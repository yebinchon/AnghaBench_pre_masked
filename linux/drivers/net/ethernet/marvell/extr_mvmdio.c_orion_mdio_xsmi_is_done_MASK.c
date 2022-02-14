
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct orion_mdio_dev {scalar_t__ regs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct orion_mdio_dev *VAR_2)
{
 return !(FUNC_0(VAR_2->regs + VAR_1) & VAR_0);
}
