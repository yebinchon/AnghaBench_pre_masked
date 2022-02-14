
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct mantis_pci {int gpio_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,char*,int,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;

void FUNC_3(struct mantis_pci *VAR_3, u32 VAR_4, u8 VAR_5)
{
 u32 VAR_6;

 FUNC_0(VAR_0, 1, "Set Bit <%d> to <%d>", VAR_4, VAR_5);
 VAR_6 = FUNC_1(VAR_1);
 if (VAR_5)
  VAR_3->gpio_status = VAR_6 | (1 << VAR_4);
 else
  VAR_3->gpio_status = VAR_6 & (~(1 << VAR_4));

 FUNC_0(VAR_0, 1, "GPIO Value <%02x>", VAR_3->gpio_status);
 FUNC_2(VAR_3->gpio_status, VAR_1);
 FUNC_2(0x00, VAR_2);
}
