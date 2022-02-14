
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_7__ {int tx; } ;
struct TYPE_8__ {unsigned char x_char; int lock; TYPE_2__ icount; TYPE_1__* state; } ;
struct dz_port {TYPE_3__ port; } ;
struct dz_mux {struct dz_port* dport; } ;
struct circ_buf {unsigned char* buf; size_t tail; } ;
struct TYPE_6__ {struct circ_buf xmit; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (struct dz_port*,int ) ;
 int FUNC_2 (struct dz_port*,int ,unsigned char) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct circ_buf*) ;
 scalar_t__ FUNC_7 (struct circ_buf*) ;
 scalar_t__ FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*) ;

__attribute__((used)) static inline void FUNC_10(struct dz_mux *VAR_4)
{
 struct dz_port *VAR_5 = &VAR_4->dport[0];
 struct circ_buf *VAR_6;
 unsigned char VAR_7;
 u16 VAR_8;

 VAR_8 = FUNC_1(VAR_5, VAR_0);
 VAR_5 = &VAR_4->dport[FUNC_0(VAR_8)];
 VAR_6 = &VAR_5->port.state->xmit;

 if (VAR_5->port.x_char) {
  FUNC_2(VAR_5, VAR_1, VAR_5->port.x_char);
  VAR_5->port.icount.tx++;
  VAR_5->port.x_char = 0;
  return;
 }

 if (FUNC_7(VAR_6) || FUNC_8(&VAR_5->port)) {
  FUNC_4(&VAR_5->port.lock);
  FUNC_3(&VAR_5->port);
  FUNC_5(&VAR_5->port.lock);
  return;
 }





 VAR_7 = VAR_6->buf[VAR_6->tail];
 VAR_6->tail = (VAR_6->tail + 1) & (VAR_3 - 1);
 FUNC_2(VAR_5, VAR_1, VAR_7);
 VAR_5->port.icount.tx++;

 if (FUNC_6(VAR_6) < VAR_2)
  FUNC_9(&VAR_5->port);


 if (FUNC_7(VAR_6)) {
  FUNC_4(&VAR_5->port.lock);
  FUNC_3(&VAR_5->port);
  FUNC_5(&VAR_5->port.lock);
 }
}
