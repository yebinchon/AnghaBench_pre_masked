
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int tx; } ;
struct TYPE_8__ {TYPE_2__ icount; scalar_t__ x_char; TYPE_1__* state; } ;
struct sifive_serial_port {TYPE_3__ port; } ;
struct circ_buf {size_t tail; scalar_t__* buf; } ;
struct TYPE_6__ {struct circ_buf xmit; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct sifive_serial_port*,scalar_t__) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (struct circ_buf*) ;
 scalar_t__ FUNC_3 (struct circ_buf*) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_6(struct sifive_serial_port *VAR_3)
{
 struct circ_buf *VAR_4 = &VAR_3->port.state->xmit;
 int VAR_5;

 if (VAR_3->port.x_char) {
  FUNC_0(VAR_3, VAR_3->port.x_char);
  VAR_3->port.icount.tx++;
  VAR_3->port.x_char = 0;
  return;
 }
 if (FUNC_3(VAR_4) || FUNC_4(&VAR_3->port)) {
  FUNC_1(&VAR_3->port);
  return;
 }
 VAR_5 = VAR_0;
 do {
  FUNC_0(VAR_3, VAR_4->buf[VAR_4->tail]);
  VAR_4->tail = (VAR_4->tail + 1) & (VAR_1 - 1);
  VAR_3->port.icount.tx++;
  if (FUNC_3(VAR_4))
   break;
 } while (--VAR_5 > 0);

 if (FUNC_2(VAR_4) < VAR_2)
  FUNC_5(&VAR_3->port);

 if (FUNC_3(VAR_4))
  FUNC_1(&VAR_3->port);
}
