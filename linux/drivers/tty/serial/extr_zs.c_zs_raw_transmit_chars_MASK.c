
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int tx; } ;
struct TYPE_7__ {TYPE_2__ icount; scalar_t__ x_char; TYPE_1__* state; } ;
struct zs_port {TYPE_3__ port; } ;
struct circ_buf {size_t tail; scalar_t__* buf; } ;
struct TYPE_5__ {struct circ_buf xmit; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct circ_buf*) ;
 scalar_t__ FUNC_1 (struct circ_buf*) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (struct zs_port*,scalar_t__) ;
 int FUNC_5 (struct zs_port*) ;

__attribute__((used)) static void FUNC_6(struct zs_port *VAR_2)
{
 struct circ_buf *VAR_3 = &VAR_2->port.state->xmit;


 if (VAR_2->port.x_char) {
  FUNC_4(VAR_2, VAR_2->port.x_char);
  VAR_2->port.icount.tx++;
  VAR_2->port.x_char = 0;
  return;
 }


 if (FUNC_1(VAR_3) || FUNC_2(&VAR_2->port)) {
  FUNC_5(VAR_2);
  return;
 }


 FUNC_4(VAR_2, VAR_3->buf[VAR_3->tail]);
 VAR_3->tail = (VAR_3->tail + 1) & (VAR_0 - 1);
 VAR_2->port.icount.tx++;

 if (FUNC_0(VAR_3) < VAR_1)
  FUNC_3(&VAR_2->port);


 if (FUNC_1(VAR_3))
  FUNC_5(VAR_2);
}
