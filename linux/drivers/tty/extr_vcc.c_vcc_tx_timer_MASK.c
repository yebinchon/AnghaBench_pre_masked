
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int stype; int type; } ;
struct vio_vcc {TYPE_2__ tag; } ;
struct TYPE_6__ {int lp; } ;
struct TYPE_4__ {scalar_t__ expires; } ;
struct vcc_port {int lock; scalar_t__ chars_in_buffer; struct tty_struct* tty; TYPE_3__ vio; struct vio_vcc buffer; scalar_t__ removed; TYPE_1__ tx_timer; } ;
struct tty_struct {int dummy; } ;
struct timer_list {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 struct vcc_port* FUNC_1 (int ,struct timer_list*,int ) ;
 int FUNC_2 (int ,struct vio_vcc*,scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;
 struct vcc_port* VAR_3 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct tty_struct*) ;
 int VAR_4 ;
 int FUNC_7 (struct vcc_port*) ;
 int FUNC_8 (struct vcc_port*,int) ;
 int FUNC_9 (char*,int) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static void FUNC_11(struct timer_list *VAR_5)
{
 struct vcc_port *VAR_6 = FUNC_1(VAR_6, VAR_5, VAR_4);
 struct vio_vcc *VAR_7;
 unsigned long VAR_8;
 int VAR_9 = 0;
 int VAR_10;

 FUNC_4(&VAR_6->lock, VAR_8);
 VAR_6->tx_timer.expires = 0;

 if (!VAR_6->tty || VAR_6->removed)
  goto done;

 VAR_9 = FUNC_3(VAR_0, VAR_6->chars_in_buffer);
 if (!VAR_9)
  goto done;

 VAR_7 = &VAR_6->buffer;
 VAR_7->tag.type = VAR_2;
 VAR_7->tag.stype = VAR_9;
 FUNC_10(VAR_6->vio.lp);

 VAR_10 = FUNC_2(VAR_6->vio.lp, VAR_7, (VAR_1 + VAR_9));
 FUNC_0(!VAR_10);

 if (VAR_10 < 0) {
  FUNC_9("VCC: ldc_write()=%d\n", VAR_10);
  FUNC_7(VAR_6);
 } else {
  struct tty_struct *VAR_11 = VAR_6->tty;

  VAR_6->chars_in_buffer = 0;
  if (VAR_11)
   FUNC_6(VAR_11);
 }

done:
 FUNC_5(&VAR_6->lock, VAR_8);
 FUNC_8(VAR_6, 0);
}
