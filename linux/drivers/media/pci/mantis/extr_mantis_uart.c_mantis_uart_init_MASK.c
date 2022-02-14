
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mantis_uart_params {size_t baud_rate; size_t parity; } ;
struct mantis_pci {int uart_work; struct mantis_hwconfig* hwconfig; } ;
struct mantis_hwconfig {size_t baud_rate; size_t parity; int bytes; } ;
struct TYPE_4__ {int string; } ;
struct TYPE_3__ {int string; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int,char*,...) ;
 int FUNC_2 (struct mantis_pci*,struct mantis_uart_params*) ;
 int VAR_7 ;
 int FUNC_3 (struct mantis_pci*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,int ) ;
 TYPE_2__* VAR_8 ;
 TYPE_1__* VAR_9 ;
 int FUNC_6 (int *) ;

int FUNC_7(struct mantis_pci *VAR_10)
{
 struct mantis_hwconfig *VAR_11 = VAR_10->hwconfig;
 struct mantis_uart_params VAR_12;


 VAR_12.baud_rate = VAR_11->baud_rate;
 VAR_12.parity = VAR_11->parity;
 FUNC_1(VAR_1, 1, "Initializing UART @ %sbps parity:%s",
  VAR_9[VAR_12.baud_rate].string,
  VAR_8[VAR_12.parity].string);

 FUNC_0(&VAR_10->uart_work, VAR_7);


 FUNC_5(FUNC_4(VAR_4) & 0xffef, VAR_4);

 FUNC_2(VAR_10, &VAR_12);


 FUNC_5((FUNC_4(VAR_3) | (VAR_11->bytes << 8)), VAR_3);


 FUNC_5((FUNC_4(VAR_4) | VAR_5), VAR_4);


 FUNC_5(FUNC_4(VAR_4) | VAR_6, VAR_4);
 FUNC_3(VAR_10, VAR_2);

 FUNC_6(&VAR_10->uart_work);
 FUNC_1(VAR_0, 1, "UART successfully initialized");

 return 0;
}
