
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mips_ejtag_fdc_tty_port {unsigned int xmit_cnt; int xmit_lock; } ;
struct mips_ejtag_fdc_tty {int xmit_full; scalar_t__ irq; size_t xmit_next; struct mips_ejtag_fdc_tty_port* ports; int waitqueue; int lock; int xmit_total; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 () ;
 unsigned int FUNC_3 (struct mips_ejtag_fdc_tty*,size_t) ;
 int FUNC_4 (struct mips_ejtag_fdc_tty*,int ) ;
 int FUNC_5 (struct mips_ejtag_fdc_tty*,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int) ;

__attribute__((used)) static int FUNC_11(void *VAR_7)
{
 struct mips_ejtag_fdc_tty *VAR_8 = VAR_7;
 struct mips_ejtag_fdc_tty_port *VAR_9;
 unsigned int VAR_10;
 u32 VAR_11;

 FUNC_0(VAR_6);
 while (!FUNC_2()) {

  FUNC_10(VAR_8->waitqueue,
      FUNC_1(&VAR_8->xmit_total) ||
      FUNC_2());
  if (FUNC_2())
   break;


  FUNC_6(&VAR_8->lock);
  if (FUNC_4(VAR_8, VAR_4) & VAR_5) {
   VAR_8->xmit_full = 1;
   if (VAR_8->irq >= 0) {

    VAR_11 = FUNC_4(VAR_8, VAR_1);
    VAR_11 &= ~VAR_2;
    VAR_11 |= VAR_3;
    FUNC_5(VAR_8, VAR_1, VAR_11);
   }
  }
  FUNC_7(&VAR_8->lock);
  FUNC_10(VAR_8->waitqueue,
      !(FUNC_4(VAR_8, VAR_4)
        & VAR_5) ||
      FUNC_2());
  if (FUNC_2())
   break;


  for (;;) {
   VAR_9 = &VAR_8->ports[VAR_8->xmit_next];
   FUNC_8(&VAR_9->xmit_lock);
   VAR_10 = VAR_9->xmit_cnt;
   FUNC_9(&VAR_9->xmit_lock);
   if (VAR_10)
    break;

   ++VAR_8->xmit_next;
   if (VAR_8->xmit_next >= VAR_0)
    VAR_8->xmit_next = 0;
  }


  VAR_10 = FUNC_3(VAR_8, VAR_8->xmit_next);





  if (VAR_10) {
   ++VAR_8->xmit_next;
   if (VAR_8->xmit_next >= VAR_0)
    VAR_8->xmit_next = 0;
  }
 }

 return 0;
}
