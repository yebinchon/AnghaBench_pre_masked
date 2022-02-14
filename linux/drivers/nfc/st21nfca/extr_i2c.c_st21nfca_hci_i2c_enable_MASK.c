
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st21nfca_i2c_phy {int powered; int run_mode; int gpiod_ena; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(void *VAR_1)
{
 struct st21nfca_i2c_phy *VAR_2 = VAR_1;

 FUNC_0(VAR_2->gpiod_ena, 1);
 VAR_2->powered = 1;
 VAR_2->run_mode = VAR_0;

 FUNC_1(10000, 15000);

 return 0;
}
