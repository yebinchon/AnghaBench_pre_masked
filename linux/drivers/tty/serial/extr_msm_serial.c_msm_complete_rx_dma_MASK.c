
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int rx; int brk; int overrun; } ;
struct uart_port {int read_status_mask; int lock; TYPE_2__ icount; int dev; TYPE_1__* state; } ;
struct tty_port {int dummy; } ;
struct msm_dma {int enable_bit; scalar_t__* virt; int dir; int phys; int count; } ;
struct msm_port {int break_detected; struct msm_dma rx_dma; struct uart_port uart; } ;
struct TYPE_3__ {struct tty_port port; } ;


 char VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (struct uart_port*,int ) ;
 int FUNC_2 (struct msm_port*) ;
 int FUNC_3 (struct uart_port*,int,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct tty_port*) ;
 int FUNC_7 (struct tty_port*,scalar_t__,char) ;
 scalar_t__ FUNC_8 (struct uart_port*) ;
 int FUNC_9 (struct uart_port*,scalar_t__) ;

__attribute__((used)) static void FUNC_10(void *VAR_11)
{
 struct msm_port *VAR_12 = VAR_11;
 struct uart_port *VAR_13 = &VAR_12->uart;
 struct tty_port *VAR_14 = &VAR_13->state->port;
 struct msm_dma *VAR_15 = &VAR_12->rx_dma;
 int VAR_16 = 0, VAR_17, VAR_18;
 unsigned long VAR_19;
 u32 VAR_20;

 FUNC_4(&VAR_13->lock, VAR_19);


 if (!VAR_15->count)
  goto done;

 VAR_20 = FUNC_1(VAR_13, VAR_3);
 VAR_20 &= ~VAR_15->enable_bit;
 FUNC_3(VAR_13, VAR_20, VAR_3);

 if (FUNC_1(VAR_13, VAR_8) & VAR_9) {
  VAR_13->icount.overrun++;
  FUNC_7(VAR_14, 0, VAR_2);
  FUNC_3(VAR_13, VAR_7, VAR_6);
 }

 VAR_16 = FUNC_1(VAR_13, VAR_5);

 VAR_13->icount.rx += VAR_16;

 VAR_15->count = 0;

 FUNC_0(VAR_13->dev, VAR_15->phys, VAR_4, VAR_15->dir);

 for (VAR_17 = 0; VAR_17 < VAR_16; VAR_17++) {
  char VAR_21 = VAR_1;

  if (VAR_12->break_detected && VAR_15->virt[VAR_17] == 0) {
   VAR_13->icount.brk++;
   VAR_21 = VAR_0;
   VAR_12->break_detected = 0;
   if (FUNC_8(VAR_13))
    continue;
  }

  if (!(VAR_13->read_status_mask & VAR_10))
   VAR_21 = VAR_1;

  FUNC_5(&VAR_13->lock, VAR_19);
  VAR_18 = FUNC_9(VAR_13, VAR_15->virt[VAR_17]);
  FUNC_4(&VAR_13->lock, VAR_19);
  if (!VAR_18)
   FUNC_7(VAR_14, VAR_15->virt[VAR_17], VAR_21);
 }

 FUNC_2(VAR_12);
done:
 FUNC_5(&VAR_13->lock, VAR_19);

 if (VAR_16)
  FUNC_6(VAR_14);
}
