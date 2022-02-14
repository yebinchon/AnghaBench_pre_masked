
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int tx; } ;
struct TYPE_8__ {TYPE_2__ icount; scalar_t__ x_char; TYPE_1__* state; } ;
struct pnx8xxx_port {TYPE_3__ port; } ;
struct circ_buf {size_t tail; scalar_t__* buf; } ;
struct TYPE_6__ {struct circ_buf xmit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct pnx8xxx_port*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (struct pnx8xxx_port*,int ) ;
 int FUNC_3 (struct pnx8xxx_port*,int ,scalar_t__) ;
 scalar_t__ FUNC_4 (struct circ_buf*) ;
 scalar_t__ FUNC_5 (struct circ_buf*) ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_8(struct pnx8xxx_port *VAR_4)
{
 struct circ_buf *VAR_5 = &VAR_4->port.state->xmit;

 if (VAR_4->port.x_char) {
  FUNC_3(VAR_4, VAR_0, VAR_4->port.x_char);
  VAR_4->port.icount.tx++;
  VAR_4->port.x_char = 0;
  return;
 }





 FUNC_0(VAR_4);

 if (FUNC_5(VAR_5) || FUNC_6(&VAR_4->port)) {
  FUNC_1(&VAR_4->port);
  return;
 }




 while (((FUNC_2(VAR_4, VAR_0) &
     VAR_1) >> 16) < 16) {
  FUNC_3(VAR_4, VAR_0, VAR_5->buf[VAR_5->tail]);
  VAR_5->tail = (VAR_5->tail + 1) & (VAR_2 - 1);
  VAR_4->port.icount.tx++;
  if (FUNC_5(VAR_5))
   break;
 }

 if (FUNC_4(VAR_5) < VAR_3)
  FUNC_7(&VAR_4->port);

 if (FUNC_5(VAR_5))
  FUNC_1(&VAR_4->port);
}
