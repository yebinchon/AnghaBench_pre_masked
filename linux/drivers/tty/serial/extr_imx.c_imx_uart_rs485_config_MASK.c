
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct serial_rs485 {int flags; scalar_t__ delay_rts_after_send; scalar_t__ delay_rts_before_send; } ;
struct uart_port {struct serial_rs485 rs485; } ;
struct imx_port {int have_rtsgpio; scalar_t__ have_rtscts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct imx_port*,int ) ;
 int FUNC_1 (struct imx_port*,int *) ;
 int FUNC_2 (struct imx_port*,int *) ;
 int FUNC_3 (struct uart_port*) ;
 int FUNC_4 (struct imx_port*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct uart_port *VAR_5,
     struct serial_rs485 *VAR_6)
{
 struct imx_port *VAR_7 = (struct imx_port *)VAR_5;
 u32 VAR_8;


 VAR_6->delay_rts_before_send = 0;
 VAR_6->delay_rts_after_send = 0;


 if (!VAR_7->have_rtscts && !VAR_7->have_rtsgpio)
  VAR_6->flags &= ~VAR_0;

 if (VAR_6->flags & VAR_0) {

  if (VAR_7->have_rtscts && !VAR_7->have_rtsgpio &&
      !(VAR_6->flags & VAR_2))
   VAR_6->flags |= VAR_3;


  VAR_8 = FUNC_0(VAR_7, VAR_4);
  if (VAR_6->flags & VAR_1)
   FUNC_1(VAR_7, &VAR_8);
  else
   FUNC_2(VAR_7, &VAR_8);
  FUNC_4(VAR_7, VAR_8, VAR_4);
 }


 if (!(VAR_6->flags & VAR_0) ||
     VAR_6->flags & VAR_3)
  FUNC_3(VAR_5);

 VAR_5->rs485 = *VAR_6;

 return 0;
}
