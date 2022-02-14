
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct timespec64 {int dummy; } ;
struct net_device {int base_addr; } ;
struct TYPE_11__ {scalar_t__ magic; } ;
struct TYPE_9__ {int tx_bit; int txshreg; } ;
struct TYPE_10__ {int ptt; TYPE_1__ ser12; } ;
struct baycom_state {unsigned char opt_dcd; int baud_uartdiv; TYPE_3__ hdrv; TYPE_2__ modem; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct baycom_state*) ;
 int FUNC_7 (struct net_device*,TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;
 scalar_t__ FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (struct net_device*,TYPE_3__*) ;
 int FUNC_11 (TYPE_3__*,int) ;
 int FUNC_12 (struct net_device*,TYPE_3__*) ;
 unsigned char FUNC_13 (int ) ;
 int FUNC_14 (struct timespec64*) ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 struct baycom_state* FUNC_17 (struct net_device*) ;
 int FUNC_18 (int,int ) ;
 int FUNC_19 (struct net_device*,struct baycom_state*,struct timespec64*,unsigned char) ;
 int FUNC_20 (struct net_device*,int) ;

__attribute__((used)) static irqreturn_t FUNC_21(int VAR_3, void *VAR_4)
{
 struct net_device *VAR_5 = (struct net_device *)VAR_4;
 struct baycom_state *VAR_6 = FUNC_17(VAR_5);
 struct timespec64 VAR_7;
 unsigned char VAR_8, VAR_9;
 unsigned int VAR_10 = 0;

 if (!VAR_6 || VAR_6->hdrv.magic != VAR_0)
  return VAR_2;

 if ((VAR_8 = FUNC_13(FUNC_0(VAR_5->base_addr))) & 1)
  return VAR_2;

 FUNC_14(&VAR_7);
 VAR_9 = FUNC_13(FUNC_3(VAR_5->base_addr));

 if ((VAR_9 & 8) && VAR_6->opt_dcd)
  FUNC_11(&VAR_6->hdrv, !((VAR_9 ^ VAR_6->opt_dcd) & 0x80));
 do {
  switch (VAR_8 & 6) {
  case 6:
   FUNC_13(FUNC_1(VAR_5->base_addr));
   break;

  case 4:
   FUNC_13(FUNC_4(VAR_5->base_addr));
   break;

  case 2:





   FUNC_18(0x00, FUNC_5(VAR_5->base_addr));
   FUNC_6(VAR_6);
   VAR_10++;




   if (VAR_6->modem.ptt)
    FUNC_18(0x0e | (!!VAR_6->modem.ser12.tx_bit), FUNC_2(VAR_5->base_addr));
   else
    FUNC_18(0x0d, FUNC_2(VAR_5->base_addr));
   break;

  default:
   VAR_9 = FUNC_13(FUNC_3(VAR_5->base_addr));

   if ((VAR_9 & 8) && VAR_6->opt_dcd)
    FUNC_11(&VAR_6->hdrv, !((VAR_9 ^ VAR_6->opt_dcd) & 0x80));
   break;
  }
  VAR_8 = FUNC_13(FUNC_0(VAR_5->base_addr));
 } while (!(VAR_8 & 1));
 FUNC_19(VAR_5, VAR_6, &VAR_7, VAR_9 & 0x10);
 if (VAR_6->modem.ptt && VAR_10) {
  if (VAR_6->modem.ser12.txshreg <= 1) {
   VAR_6->modem.ser12.txshreg = 0x10000 | FUNC_8(&VAR_6->hdrv);
   if (!FUNC_9(&VAR_6->hdrv)) {
    FUNC_20(VAR_5, 115200/100/8);
    VAR_6->modem.ptt = 0;
    goto end_transmit;
   }
  }
  VAR_6->modem.ser12.tx_bit = !(VAR_6->modem.ser12.tx_bit ^ (VAR_6->modem.ser12.txshreg & 1));
  VAR_6->modem.ser12.txshreg >>= 1;
 }
 end_transmit:
 FUNC_16();
 if (!VAR_6->modem.ptt && VAR_10) {
  FUNC_7(VAR_5, &VAR_6->hdrv);
  if (FUNC_9(&VAR_6->hdrv)) {
   FUNC_20(VAR_5, VAR_6->baud_uartdiv);
   VAR_6->modem.ser12.txshreg = 1;
   VAR_6->modem.ptt = 1;
  }
 }
 FUNC_12(VAR_5, &VAR_6->hdrv);
 FUNC_10(VAR_5, &VAR_6->hdrv);
 FUNC_15();
 return VAR_1;
}
