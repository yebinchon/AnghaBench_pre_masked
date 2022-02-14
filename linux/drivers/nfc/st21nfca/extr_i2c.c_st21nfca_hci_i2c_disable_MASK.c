
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st21nfca_i2c_phy {scalar_t__ powered; int gpiod_ena; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
 struct st21nfca_i2c_phy *VAR_1 = VAR_0;

 FUNC_0(VAR_1->gpiod_ena, 0);

 VAR_1->powered = 0;
}
