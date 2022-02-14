
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serial_iso7816 {int flags; int tg; } ;
struct uart_port {struct serial_iso7816 iso7816; int dev; } ;
struct atmel_uart_port {unsigned int tx_done_mask; unsigned int fidi_min; unsigned int fidi_max; unsigned int backup_mode; unsigned int backup_brgr; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 unsigned int FUNC_0 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 unsigned int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 unsigned int VAR_22 ;
 unsigned int VAR_23 ;
 unsigned int VAR_24 ;
 unsigned int VAR_25 ;
 unsigned int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_1 (int) ;
 int VAR_29 ;
 unsigned int FUNC_2 (struct uart_port*,struct serial_iso7816*) ;
 unsigned int FUNC_3 (struct uart_port*,struct serial_iso7816*) ;
 void* FUNC_4 (struct uart_port*,int ) ;
 int FUNC_5 (struct uart_port*,int ,unsigned int) ;
 scalar_t__ FUNC_6 (struct uart_port*) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (struct serial_iso7816*,int ,int) ;
 struct atmel_uart_port* FUNC_11 (struct uart_port*) ;

__attribute__((used)) static int FUNC_12(struct uart_port *VAR_30,
    struct serial_iso7816 *VAR_31)
{
 struct atmel_uart_port *VAR_32 = FUNC_11(VAR_30);
 unsigned int VAR_33;
 unsigned int VAR_34, VAR_35;
 int VAR_36 = 0;


 FUNC_5(VAR_30, VAR_6, VAR_32->tx_done_mask);

 VAR_33 = FUNC_4(VAR_30, VAR_10);

 if (VAR_31->flags & VAR_28) {
  VAR_33 &= ~VAR_24;

  if (VAR_31->tg > 255) {
   FUNC_8(VAR_30->dev, "ISO7816: Timeguard exceeding 255\n");
   FUNC_10(VAR_31, 0, sizeof(struct serial_iso7816));
   VAR_36 = -VAR_27;
   goto err_out;
  }

  if ((VAR_31->flags & VAR_29)
      == FUNC_1(0)) {
   VAR_33 |= VAR_25 | VAR_3;
  } else if ((VAR_31->flags & VAR_29)
      == FUNC_1(1)) {
   VAR_33 |= VAR_26 | VAR_8;
  } else {
   FUNC_8(VAR_30->dev, "ISO7816: Type not supported\n");
   FUNC_10(VAR_31, 0, sizeof(struct serial_iso7816));
   VAR_36 = -VAR_27;
   goto err_out;
  }

  VAR_33 &= ~(VAR_22 | VAR_12 | VAR_14);


  VAR_33 |= VAR_23 | VAR_1;

  VAR_33 |= VAR_15 | VAR_13 | FUNC_0(3);

  VAR_34 = FUNC_2(VAR_30, VAR_31);
  VAR_35 = FUNC_3(VAR_30, VAR_31);
  if (VAR_35 == 0) {
   FUNC_9(VAR_30->dev, "ISO7816 fidi = 0, Generator generates no signal\n");
  } else if (VAR_35 < VAR_32->fidi_min
      || VAR_35 > VAR_32->fidi_max) {
   FUNC_8(VAR_30->dev, "ISO7816 fidi = %u, value not supported\n", VAR_35);
   FUNC_10(VAR_31, 0, sizeof(struct serial_iso7816));
   VAR_36 = -VAR_27;
   goto err_out;
  }

  if (!(VAR_30->iso7816.flags & VAR_28)) {

   VAR_32->backup_mode = FUNC_4(VAR_30, VAR_10);
   VAR_32->backup_brgr = FUNC_4(VAR_30, VAR_0);
  }

  FUNC_5(VAR_30, VAR_17, VAR_31->tg);
  FUNC_5(VAR_30, VAR_0, VAR_34);
  FUNC_5(VAR_30, VAR_5, VAR_35);

  FUNC_5(VAR_30, VAR_2, VAR_19 | VAR_16);
  VAR_32->tx_done_mask = VAR_20 | VAR_11 | VAR_9;
 } else {
  FUNC_7(VAR_30->dev, "Setting UART back to RS232\n");

  VAR_33 = VAR_32->backup_mode;
  FUNC_10(VAR_31, 0, sizeof(struct serial_iso7816));
  FUNC_5(VAR_30, VAR_17, 0);
  FUNC_5(VAR_30, VAR_0, VAR_32->backup_brgr);
  FUNC_5(VAR_30, VAR_5, 0x174);

  if (FUNC_6(VAR_30))
   VAR_32->tx_done_mask = VAR_4 |
         VAR_18;
  else
   VAR_32->tx_done_mask = VAR_21;
 }

 VAR_30->iso7816 = *VAR_31;

 FUNC_5(VAR_30, VAR_10, VAR_33);

err_out:

 FUNC_5(VAR_30, VAR_7, VAR_32->tx_done_mask);

 return VAR_36;
}
