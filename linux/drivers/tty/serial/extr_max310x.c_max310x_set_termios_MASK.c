
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int read_status_mask; int ignore_status_mask; int status; int uartclk; } ;
struct ktermios {int c_cflag; int c_iflag; unsigned int* c_cc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 int VAR_20 ;
 unsigned int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 size_t VAR_36 ;
 size_t VAR_37 ;
 int FUNC_0 (struct uart_port*,int ,int ,int ) ;
 int FUNC_1 (struct uart_port*,int ,unsigned int) ;
 int FUNC_2 (struct uart_port*,int) ;
 int FUNC_3 (struct uart_port*,struct ktermios*,struct ktermios*,int,int) ;
 int FUNC_4 (struct uart_port*,int,int) ;

__attribute__((used)) static void FUNC_5(struct uart_port *VAR_38,
    struct ktermios *VAR_39,
    struct ktermios *VAR_40)
{
 unsigned int VAR_41 = 0, VAR_42 = 0;
 int VAR_43;


 VAR_39->c_cflag &= ~VAR_1;


 switch (VAR_39->c_cflag & VAR_4) {
 case 131:
  break;
 case 130:
  VAR_41 = VAR_17;
  break;
 case 129:
  VAR_41 = VAR_18;
  break;
 case 128:
 default:
  VAR_41 = VAR_18 | VAR_17;
  break;
 }


 if (VAR_39->c_cflag & VAR_30) {
  VAR_41 |= VAR_19;
  if (!(VAR_39->c_cflag & VAR_32))
   VAR_41 |= VAR_16;
 }


 if (VAR_39->c_cflag & VAR_5)
  VAR_41 |= VAR_21;


 FUNC_1(VAR_38, VAR_20, VAR_41);


 VAR_38->read_status_mask = VAR_24;
 if (VAR_39->c_iflag & VAR_7)
  VAR_38->read_status_mask |= VAR_25 |
       VAR_22;
 if (VAR_39->c_iflag & (VAR_6 | VAR_0 | VAR_31))
  VAR_38->read_status_mask |= VAR_23;


 VAR_38->ignore_status_mask = 0;
 if (VAR_39->c_iflag & VAR_6)
  VAR_38->ignore_status_mask |= VAR_23;
 if (!(VAR_39->c_cflag & VAR_2))
  VAR_38->ignore_status_mask |= VAR_25 |
         VAR_24 |
         VAR_22 |
         VAR_23;


 FUNC_1(VAR_38, VAR_29, VAR_39->c_cc[VAR_36]);
 FUNC_1(VAR_38, VAR_28, VAR_39->c_cc[VAR_37]);




 if (VAR_39->c_cflag & VAR_3 || VAR_39->c_iflag & VAR_8) {
  FUNC_0(VAR_38, VAR_26,
        VAR_27,
        VAR_27);
 }

 VAR_38->status &= ~(VAR_33 | VAR_34 | VAR_35);

 if (VAR_39->c_cflag & VAR_3) {

  VAR_38->status |= VAR_33 | VAR_34;
  VAR_42 |= VAR_10 |
   VAR_11;
 }
 if (VAR_39->c_iflag & VAR_9)
  VAR_42 |= VAR_14 |
   VAR_15;
 if (VAR_39->c_iflag & VAR_8) {
  VAR_38->status |= VAR_35;
  VAR_42 |= VAR_13 |
   VAR_15;
 }
 FUNC_1(VAR_38, VAR_12, VAR_42);




 if (!(VAR_39->c_cflag & VAR_3) && !(VAR_39->c_iflag & VAR_8)) {
  FUNC_0(VAR_38, VAR_26,
        VAR_27,
        0);
 }


 VAR_43 = FUNC_3(VAR_38, VAR_39, VAR_40,
      VAR_38->uartclk / 16 / 0xffff,
      VAR_38->uartclk / 4);


 VAR_43 = FUNC_2(VAR_38, VAR_43);


 FUNC_4(VAR_38, VAR_39->c_cflag, VAR_43);
}
