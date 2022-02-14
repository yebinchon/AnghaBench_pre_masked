
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mantis_uart_params {int parity; int baud_rate; } ;
struct mantis_pci {int dummy; } ;


 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct mantis_pci *VAR_3,
        struct mantis_uart_params *VAR_4)
{
 u32 VAR_5;

 FUNC_1((FUNC_0(VAR_2) | (VAR_4->parity & 0x3)), VAR_2);

 VAR_5 = FUNC_0(VAR_1);

 switch (VAR_4->baud_rate) {
 case 128:
  VAR_5 |= 0xd8;
  break;
 case 131:
  VAR_5 |= 0x6c;
  break;
 case 130:
  VAR_5 |= 0x36;
  break;
 case 129:
  VAR_5 |= 0x23;
  break;
 case 132:
  VAR_5 |= 0x11;
  break;
 default:
  return -VAR_0;
 }

 FUNC_1(VAR_5, VAR_1);

 return 0;
}
