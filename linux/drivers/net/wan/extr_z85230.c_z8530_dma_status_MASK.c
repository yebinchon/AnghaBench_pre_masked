
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct z8530_channel {int status; int dcdcheck; int* regs; scalar_t__ netdevice; TYPE_1__* dev; scalar_t__ txdma_on; int txdma; scalar_t__ dma_tx; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (struct z8530_channel*,int ) ;
 int FUNC_7 (unsigned long) ;
 int FUNC_8 (struct z8530_channel*,int ) ;
 int FUNC_9 (struct z8530_channel*,int ,int) ;
 int FUNC_10 (struct z8530_channel*) ;
 int FUNC_11 (struct z8530_channel*) ;

__attribute__((used)) static void FUNC_12(struct z8530_channel *VAR_6)
{
 u8 VAR_7, VAR_8;

 VAR_7=FUNC_6(VAR_6, VAR_0);
 VAR_8=VAR_6->status^VAR_7;

 VAR_6->status=VAR_7;


 if(VAR_6->dma_tx)
 {
  if(VAR_7&VAR_5)
  {
   unsigned long VAR_9;

   VAR_9=FUNC_0();
   FUNC_2(VAR_6->txdma);
   FUNC_1(VAR_6->txdma);
   VAR_6->txdma_on=0;
   FUNC_7(VAR_9);
   FUNC_11(VAR_6);
  }
 }

 if (VAR_8 & VAR_6->dcdcheck)
 {
  if (VAR_7 & VAR_6->dcdcheck) {
   FUNC_5("%s: DCD raised\n", VAR_6->dev->name);
   FUNC_9(VAR_6, VAR_1, VAR_6->regs[3] | VAR_4);
   if (VAR_6->netdevice)
    FUNC_4(VAR_6->netdevice);
  } else {
   FUNC_5("%s: DCD lost\n", VAR_6->dev->name);
   FUNC_9(VAR_6, VAR_1, VAR_6->regs[3] & ~VAR_4);
   FUNC_10(VAR_6);
   if (VAR_6->netdevice)
    FUNC_3(VAR_6->netdevice);
  }
 }

 FUNC_8(VAR_6, VAR_2);
 FUNC_8(VAR_6, VAR_3);
}
