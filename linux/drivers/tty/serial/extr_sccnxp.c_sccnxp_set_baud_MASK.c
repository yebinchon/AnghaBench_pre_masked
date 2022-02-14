
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct uart_port {int dev; int uartclk; } ;
struct sccnxp_port {struct sccnxp_chip* chip; } ;
struct sccnxp_chip {int flags; int freq_std; } ;
struct TYPE_2__ {int baud; size_t mr0; size_t acr; size_t csr; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ,int) ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 TYPE_1__* VAR_14 ;
 int FUNC_1 (int ,char*,int,int) ;
 struct sccnxp_port* FUNC_2 (int ) ;
 int FUNC_3 (struct uart_port*,int ) ;
 int FUNC_4 (struct uart_port*,int ,size_t) ;
 int FUNC_5 (int,int,int*) ;

__attribute__((used)) static int FUNC_6(struct uart_port *VAR_15, int VAR_16)
{
 struct sccnxp_port *VAR_17 = FUNC_2(VAR_15->dev);
 int VAR_18, VAR_19, VAR_20 = VAR_3, VAR_21 = VAR_3;
 struct sccnxp_chip *VAR_22 = VAR_17->chip;
 u8 VAR_23, VAR_24 = 0, VAR_25 = 0, VAR_26 = 0;


 VAR_18 = FUNC_0(VAR_15->uartclk, 2 * 16 * VAR_16);
 if ((VAR_18 >= 2) && (VAR_18 <= 0xffff)) {
  VAR_20 = FUNC_0(VAR_15->uartclk, 2 * 16 * VAR_18);
  FUNC_5(VAR_16, VAR_20, &VAR_21);
  VAR_25 = VAR_2;
  FUNC_4(VAR_15, VAR_10, VAR_18 >> 8);
  FUNC_4(VAR_15, VAR_9, VAR_18);

  FUNC_3(VAR_15, VAR_13);
 }


 for (VAR_23 = 0; VAR_14[VAR_23].baud && VAR_21; VAR_23++) {
  if (VAR_14[VAR_23].mr0 && !(VAR_22->flags & VAR_11))
   continue;
  VAR_18 = FUNC_0(VAR_22->freq_std, VAR_14[VAR_23].baud);
  VAR_19 = FUNC_0(VAR_15->uartclk, VAR_18);
  if (!FUNC_5(VAR_16, VAR_19, &VAR_21)) {
   VAR_24 = VAR_14[VAR_23].acr;
   VAR_25 = VAR_14[VAR_23].csr;
   VAR_26 = VAR_14[VAR_23].mr0;
   VAR_20 = VAR_19;
  }
 }

 if (VAR_22->flags & VAR_11) {

  VAR_26 |= VAR_4 | VAR_5;

  FUNC_4(VAR_15, VAR_7, VAR_1);
  FUNC_4(VAR_15, VAR_12, VAR_26);
 }

 FUNC_4(VAR_15, VAR_6, VAR_24 | VAR_0);
 FUNC_4(VAR_15, VAR_8, (VAR_25 << 4) | VAR_25);

 if (VAR_16 != VAR_20)
  FUNC_1(VAR_15->dev, "Baudrate desired: %i, calculated: %i\n",
   VAR_16, VAR_20);

 return VAR_20;
}
