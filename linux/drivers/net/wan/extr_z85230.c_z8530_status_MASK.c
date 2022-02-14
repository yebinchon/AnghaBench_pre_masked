
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct z8530_channel {int status; int dcdcheck; int* regs; TYPE_3__* netdevice; TYPE_2__* dev; } ;
struct TYPE_5__ {int tx_fifo_errors; } ;
struct TYPE_7__ {TYPE_1__ stats; } ;
struct TYPE_6__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (struct z8530_channel*,int ) ;
 int FUNC_4 (struct z8530_channel*,int ) ;
 int FUNC_5 (struct z8530_channel*,int ,int) ;
 int FUNC_6 (struct z8530_channel*) ;
 int FUNC_7 (struct z8530_channel*) ;

__attribute__((used)) static void FUNC_8(struct z8530_channel *VAR_7)
{
 u8 VAR_8, VAR_9;

 VAR_8 = FUNC_3(VAR_7, VAR_1);
 VAR_9 = VAR_7->status ^ VAR_8;

 VAR_7->status = VAR_8;

 if (VAR_8 & VAR_6) {

  VAR_7->netdevice->stats.tx_fifo_errors++;
  FUNC_4(VAR_7, VAR_0);
  FUNC_7(VAR_7);
 }

 if (VAR_9 & VAR_7->dcdcheck)
 {
  if (VAR_8 & VAR_7->dcdcheck) {
   FUNC_2("%s: DCD raised\n", VAR_7->dev->name);
   FUNC_5(VAR_7, VAR_2, VAR_7->regs[3] | VAR_5);
   if (VAR_7->netdevice)
    FUNC_1(VAR_7->netdevice);
  } else {
   FUNC_2("%s: DCD lost\n", VAR_7->dev->name);
   FUNC_5(VAR_7, VAR_2, VAR_7->regs[3] & ~VAR_5);
   FUNC_6(VAR_7);
   if (VAR_7->netdevice)
    FUNC_0(VAR_7->netdevice);
  }

 }
 FUNC_4(VAR_7, VAR_3);
 FUNC_4(VAR_7, VAR_4);
}
