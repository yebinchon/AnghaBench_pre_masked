
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {unsigned long uartclk; int fifosize; int lock; } ;
struct msm_port {int imr; scalar_t__ is_uartdm; int clk; } ;
struct msm_baud_map {unsigned long divisor; int code; unsigned int rxstale; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 struct msm_port* FUNC_0 (struct uart_port*) ;
 int FUNC_1 (int ,unsigned long) ;
 struct msm_baud_map* FUNC_2 (struct uart_port*,unsigned int,unsigned long*) ;
 int FUNC_3 (struct uart_port*) ;
 int FUNC_4 (struct uart_port*,int,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct uart_port *VAR_20, unsigned int VAR_21,
        unsigned long *VAR_22)
{
 unsigned int VAR_23, VAR_24, VAR_25;
 struct msm_port *VAR_26 = FUNC_0(VAR_20);
 const struct msm_baud_map *VAR_27;
 unsigned long VAR_28, VAR_29;

 VAR_28 = *VAR_22;
 FUNC_6(&VAR_20->lock, VAR_28);

 VAR_27 = FUNC_2(VAR_20, VAR_21, &VAR_29);
 FUNC_1(VAR_26->clk, VAR_29);
 VAR_21 = VAR_29 / 16 / VAR_27->divisor;

 FUNC_5(&VAR_20->lock, VAR_28);
 *VAR_22 = VAR_28;
 VAR_20->uartclk = VAR_29;

 FUNC_4(VAR_20, VAR_27->code, VAR_7);


 VAR_23 = VAR_27->rxstale;
 VAR_24 = VAR_16 & VAR_23;
 if (VAR_26->is_uartdm) {
  VAR_25 = VAR_8;
 } else {
  VAR_24 |= VAR_15;
  VAR_25 = VAR_17;
 }

 VAR_24 |= VAR_25 & (VAR_23 << 2);

 FUNC_4(VAR_20, VAR_24, VAR_14);


 VAR_24 = (VAR_20->fifosize * 3) / 4;
 FUNC_4(VAR_20, VAR_24, VAR_18);


 FUNC_4(VAR_20, 10, VAR_19);

 FUNC_4(VAR_20, VAR_2, VAR_1);
 FUNC_3(VAR_20);


 FUNC_4(VAR_20, VAR_6 | VAR_5, VAR_1);


 VAR_26->imr = VAR_12 | VAR_13 |
   VAR_10 | VAR_11;

 FUNC_4(VAR_20, VAR_26->imr, VAR_9);

 if (VAR_26->is_uartdm) {
  FUNC_4(VAR_20, VAR_3, VAR_1);
  FUNC_4(VAR_20, 0xFFFFFF, VAR_0);
  FUNC_4(VAR_20, VAR_4, VAR_1);
 }

 return VAR_21;
}
