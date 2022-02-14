
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mips_ejtag_fdc_tty_port {int rx_lock; int port; int rx_buf; } ;
struct mips_ejtag_fdc_tty {int sysrq_pressed; int xmit_full; int lock; int waitqueue; int driver_name; int dev; struct mips_ejtag_fdc_tty_port* ports; } ;
struct TYPE_3__ {unsigned int index; } ;
struct TYPE_4__ {TYPE_1__ cons; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,char*,int ,unsigned int,unsigned int,int,char*) ;
 int FUNC_1 (char) ;
 TYPE_2__ VAR_11 ;
 int FUNC_2 (unsigned int,char*) ;
 unsigned int FUNC_3 (struct mips_ejtag_fdc_tty*,int ) ;
 int FUNC_4 (struct mips_ejtag_fdc_tty*,int ,unsigned int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,char,int ) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct mips_ejtag_fdc_tty *VAR_12)
{
 struct mips_ejtag_fdc_tty_port *VAR_13;
 unsigned int VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
 int VAR_20;
 char VAR_21[4];

 for (;;) {

  VAR_14 = FUNC_3(VAR_12, VAR_5);
  if (VAR_14 & VAR_8)
   break;
  VAR_15 = (VAR_14 & VAR_6) >> VAR_7;
  VAR_13 = &VAR_12->ports[VAR_15];


  FUNC_5(&VAR_13->rx_lock);
  VAR_16 = FUNC_3(VAR_12, VAR_4);

  VAR_20 = FUNC_2(VAR_16, VAR_21);
  FUNC_0(VAR_12->dev, "%s%u: in  %08x: \"%*pE\"\n",
   VAR_12->driver_name, VAR_15, VAR_16, VAR_20, VAR_21);

  VAR_19 = 0;
  for (VAR_18 = 0; VAR_18 < VAR_20; ++VAR_18) {
   if (!VAR_13->rx_buf)
    continue;

   VAR_19 += FUNC_8(&VAR_13->port, VAR_21[VAR_18],
       VAR_10);
  }
  if (VAR_19)
   FUNC_7(&VAR_13->port);

  FUNC_6(&VAR_13->rx_lock);
 }


 FUNC_5(&VAR_12->lock);
 if (VAR_12->xmit_full && !(VAR_14 & VAR_9)) {
  VAR_12->xmit_full = 0;


  VAR_17 = FUNC_3(VAR_12, VAR_1);
  VAR_17 &= ~VAR_2;
  VAR_17 |= VAR_3;
  FUNC_4(VAR_12, VAR_1, VAR_17);


  FUNC_9(&VAR_12->waitqueue);
 }
 FUNC_6(&VAR_12->lock);
}
