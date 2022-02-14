
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct uart_port {scalar_t__ type; int mctrl; } ;
struct sci_port {int autorts; scalar_t__ has_rtscts; TYPE_2__* cfg; } ;
struct TYPE_6__ {scalar_t__ size; } ;
struct TYPE_5__ {TYPE_1__* ops; } ;
struct TYPE_4__ {int (* init_pins ) (struct uart_port*,unsigned int) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
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
 TYPE_3__* FUNC_0 (struct uart_port*,int ) ;
 int FUNC_1 (struct uart_port*,int ) ;
 int FUNC_2 (struct uart_port*,int ,int) ;
 int FUNC_3 (struct uart_port*,unsigned int) ;
 struct sci_port* FUNC_4 (struct uart_port*) ;

__attribute__((used)) static void FUNC_5(struct uart_port *VAR_15, unsigned int VAR_16)
{
 struct sci_port *VAR_17 = FUNC_4(VAR_15);




 if (VAR_17->cfg->ops && VAR_17->cfg->ops->init_pins) {
  VAR_17->cfg->ops->init_pins(VAR_15, VAR_16);
  return;
 }

 if (VAR_15->type == VAR_0 || VAR_15->type == VAR_1) {
  u16 VAR_18 = FUNC_1(VAR_15, VAR_7);
  u16 VAR_19 = FUNC_1(VAR_15, VAR_2);


  VAR_19 &= ~(VAR_5 | VAR_6);
  if (FUNC_4(VAR_15)->has_rtscts) {

   if (!(VAR_15->mctrl & VAR_14)) {
    VAR_19 |= VAR_4;
    VAR_18 |= VAR_8;
   } else if (!VAR_17->autorts) {
    VAR_19 |= VAR_4;
    VAR_18 &= ~VAR_8;
   } else {

    VAR_19 &= ~VAR_4;
   }

   VAR_19 &= ~VAR_3;
  }
  FUNC_2(VAR_15, VAR_7, VAR_18);
  FUNC_2(VAR_15, VAR_2, VAR_19);
 } else if (FUNC_0(VAR_15, VAR_9)->size) {
  u16 VAR_20 = FUNC_1(VAR_15, VAR_9);


  VAR_20 |= VAR_12;
  if (!(VAR_15->mctrl & VAR_14))
   VAR_20 |= VAR_11;
  else if (!VAR_17->autorts)
   VAR_20 &= ~VAR_11;

  VAR_20 &= ~(VAR_10 | VAR_13);
  FUNC_2(VAR_15, VAR_9, VAR_20);
 }
}
