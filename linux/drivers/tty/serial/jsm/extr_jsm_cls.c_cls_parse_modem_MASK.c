
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct jsm_channel {int ch_mistat; int ch_mostat; int ch_portnum; TYPE_1__* ch_bd; int uart_port; } ;
struct TYPE_2__ {int pci_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int *,char*,int ,int,...) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static void FUNC_2(struct jsm_channel *VAR_9, u8 VAR_10)
{
 u8 VAR_11 = VAR_10;

 FUNC_0(VAR_0, &VAR_9->ch_bd->pci_dev,
  "neo_parse_modem: port: %d msignals: %x\n",
  VAR_9->ch_portnum, VAR_11);






 VAR_11 &= 0xf8;

 if (VAR_11 & VAR_5)
  FUNC_1(&VAR_9->uart_port, VAR_11 & VAR_4);
 if (VAR_11 & VAR_6)
  FUNC_1(&VAR_9->uart_port, VAR_11 & VAR_3);

 if (VAR_11 & VAR_4)
  VAR_9->ch_mistat |= VAR_4;
 else
  VAR_9->ch_mistat &= ~VAR_4;

 if (VAR_11 & VAR_7)
  VAR_9->ch_mistat |= VAR_7;
 else
  VAR_9->ch_mistat &= ~VAR_7;

 if (VAR_11 & VAR_8)
  VAR_9->ch_mistat |= VAR_8;
 else
  VAR_9->ch_mistat &= ~VAR_8;

 if (VAR_11 & VAR_3)
  VAR_9->ch_mistat |= VAR_3;
 else
  VAR_9->ch_mistat &= ~VAR_3;

 FUNC_0(VAR_0, &VAR_9->ch_bd->pci_dev,
  "Port: %d DTR: %d RTS: %d CTS: %d DSR: %d " "RI: %d CD: %d\n",
  VAR_9->ch_portnum,
  !!((VAR_9->ch_mistat | VAR_9->ch_mostat) & VAR_1),
  !!((VAR_9->ch_mistat | VAR_9->ch_mostat) & VAR_2),
  !!((VAR_9->ch_mistat | VAR_9->ch_mostat) & VAR_3),
  !!((VAR_9->ch_mistat | VAR_9->ch_mostat) & VAR_7),
  !!((VAR_9->ch_mistat | VAR_9->ch_mostat) & VAR_8),
  !!((VAR_9->ch_mistat | VAR_9->ch_mostat) & VAR_4));
}
