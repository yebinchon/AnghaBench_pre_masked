
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
typedef int tcflag_t ;
struct uart_port {int uartclk; int lock; TYPE_2__* dev; } ;
struct ktermios {int c_cflag; int c_iflag; } ;
struct gpio_desc {int dummy; } ;
struct device_node {int name; int fwnode; } ;
struct TYPE_4__ {int read_status_mask; int ignore_status_mask; } ;
struct asc_port {TYPE_1__ port; int force_m1; struct gpio_desc* rts; scalar_t__* states; int pinctrl; int clk; scalar_t__ hw_flow_control; } ;
struct TYPE_5__ {struct device_node* of_node; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 size_t VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_0 (struct gpio_desc*) ;
 size_t VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int FUNC_1 (struct uart_port*,int ) ;
 int FUNC_2 (struct uart_port*,int ,int) ;
 int FUNC_3 (int ) ;
 struct gpio_desc* FUNC_4 (TYPE_2__*,char*,int *,int ,int ) ;
 int FUNC_5 (TYPE_2__*,struct gpio_desc*) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 struct asc_port* FUNC_10 (struct uart_port*) ;
 unsigned int FUNC_11 (struct uart_port*,struct ktermios*,struct ktermios*,int ,int) ;
 int FUNC_12 (struct uart_port*,int,unsigned int) ;

__attribute__((used)) static void FUNC_13(struct uart_port *VAR_37, struct ktermios *VAR_38,
       struct ktermios *VAR_39)
{
 struct asc_port *VAR_40 = FUNC_10(VAR_37);
 struct device_node *VAR_41 = VAR_37->dev->of_node;
 struct gpio_desc *VAR_42;
 unsigned int VAR_43;
 u32 VAR_44;
 tcflag_t VAR_45;
 unsigned long VAR_46;


 VAR_38->c_cflag &= ~(VAR_22 |
    (VAR_40->hw_flow_control ? 0 : VAR_24));

 VAR_37->uartclk = FUNC_3(VAR_40->clk);

 VAR_43 = FUNC_11(VAR_37, VAR_38, VAR_39, 0, VAR_37->uartclk/16);
 VAR_45 = VAR_38->c_cflag;

 FUNC_8(&VAR_37->lock, VAR_46);


 VAR_44 = FUNC_1(VAR_37, VAR_1);


 FUNC_2(VAR_37, VAR_1, (VAR_44 & ~VAR_9));
 VAR_44 = VAR_10 | VAR_4;


 FUNC_2(VAR_37, VAR_20, 1);
 FUNC_2(VAR_37, VAR_18, 1);


 if ((VAR_45 & VAR_26) == VAR_25) {
  VAR_44 |= VAR_5;
 } else {
  VAR_44 |= (VAR_45 & VAR_34) ? VAR_7 :
      VAR_6;
 }


 VAR_44 |= (VAR_45 & VAR_27) ? VAR_12 : VAR_11;


 if (VAR_45 & VAR_36)
  VAR_44 |= VAR_8;


 if ((VAR_45 & VAR_24)) {
  VAR_44 |= VAR_3;


  if (VAR_40->rts) {
   FUNC_5(VAR_37->dev, VAR_40->rts);
   VAR_40->rts = ((void*)0);

   FUNC_7(VAR_40->pinctrl,
          VAR_40->states[VAR_28]);
  }
 } else {

  if (!VAR_40->rts && VAR_40->states[VAR_33]) {
   FUNC_7(VAR_40->pinctrl,
          VAR_40->states[VAR_33]);

   VAR_42 = FUNC_4(VAR_37->dev,
         "rts",
         &VAR_41->fwnode,
         VAR_29,
         VAR_41->name);
   if (!FUNC_0(VAR_42))
    VAR_40->rts = VAR_42;
  }
 }

 if ((VAR_43 < 19200) && !VAR_40->force_m1) {
  FUNC_2(VAR_37, VAR_0, (VAR_37->uartclk / (16 * VAR_43)));
 } else {
  u64 VAR_47 = (u64)VAR_43 * (1 << 16);

  FUNC_6(VAR_47, VAR_37->uartclk / 16);
  FUNC_2(VAR_37, VAR_0, VAR_47);
  VAR_44 |= VAR_2;
 }

 FUNC_12(VAR_37, VAR_45, VAR_43);

 VAR_40->port.read_status_mask = VAR_14;
 if (VAR_38->c_iflag & VAR_32)
  VAR_40->port.read_status_mask |= VAR_16 | VAR_17;
 if (VAR_38->c_iflag & (VAR_30 | VAR_21 | VAR_35))
  VAR_40->port.read_status_mask |= VAR_13;




 VAR_40->port.ignore_status_mask = 0;
 if (VAR_38->c_iflag & VAR_31)
  VAR_40->port.ignore_status_mask |= VAR_16 | VAR_17;
 if (VAR_38->c_iflag & VAR_30) {
  VAR_40->port.ignore_status_mask |= VAR_13;




  if (VAR_38->c_iflag & VAR_31)
   VAR_40->port.ignore_status_mask |= VAR_14;
 }




 if (!(VAR_38->c_cflag & VAR_23))
  VAR_40->port.ignore_status_mask |= VAR_15;


 FUNC_2(VAR_37, VAR_19, 20);


 FUNC_2(VAR_37, VAR_1, (VAR_44 | VAR_9));

 FUNC_9(&VAR_37->lock, VAR_46);
}
