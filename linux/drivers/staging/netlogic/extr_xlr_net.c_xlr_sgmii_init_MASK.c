
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlr_net_priv {int phy_addr; int pcs_addr; int gpio_addr; int serdes_addr; } ;


 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ,int,int,int) ;

__attribute__((used)) static void FUNC_2(struct xlr_net_priv *VAR_0)
{
 int VAR_1;

 FUNC_1(VAR_0->serdes_addr, 26, 0, 0x6DB0);
 FUNC_1(VAR_0->serdes_addr, 26, 1, 0xFFFF);
 FUNC_1(VAR_0->serdes_addr, 26, 2, 0xB6D0);
 FUNC_1(VAR_0->serdes_addr, 26, 3, 0x00FF);
 FUNC_1(VAR_0->serdes_addr, 26, 4, 0x0000);
 FUNC_1(VAR_0->serdes_addr, 26, 5, 0x0000);
 FUNC_1(VAR_0->serdes_addr, 26, 6, 0x0005);
 FUNC_1(VAR_0->serdes_addr, 26, 7, 0x0001);
 FUNC_1(VAR_0->serdes_addr, 26, 8, 0x0000);
 FUNC_1(VAR_0->serdes_addr, 26, 9, 0x0000);
 FUNC_1(VAR_0->serdes_addr, 26, 10, 0x0000);


 FUNC_0(VAR_0->gpio_addr, 0x20, 0x7e6802);
 FUNC_0(VAR_0->gpio_addr, 0x10, 0x7104);

 FUNC_0(VAR_0->gpio_addr, 0x22, 0x7e6802);
 FUNC_0(VAR_0->gpio_addr, 0x21, 0x7104);


 VAR_1 = VAR_0->phy_addr % 4 + 27;
 FUNC_1(VAR_0->pcs_addr, VAR_1, 0, 0x1000);
 FUNC_1(VAR_0->pcs_addr, VAR_1, 0, 0x0200);
}
