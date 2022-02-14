
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct mantis_pci {int gpio_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int) ;

void FUNC_3(struct mantis_pci *VAR_2, u32 VAR_3, u8 VAR_4)
{
 u32 VAR_5;

 VAR_5 = FUNC_0(VAR_0);
 if (VAR_4)
  VAR_2->gpio_status = VAR_5 | (1 << VAR_3);
 else
  VAR_2->gpio_status = VAR_5 & (~(1 << VAR_3));

 FUNC_1(VAR_2->gpio_status, VAR_0);
 FUNC_1(0x00, VAR_1);
 FUNC_2(100);
}
