
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct net_device {int base_addr; } ;
struct TYPE_7__ {scalar_t__ magic; } ;
struct TYPE_6__ {scalar_t__ arb_divider; } ;
struct baycom_state {TYPE_2__ hdrv; TYPE_1__ modem; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct baycom_state*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct baycom_state*) ;
 int FUNC_7 (struct net_device*,TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (struct net_device*,TYPE_2__*) ;
 int FUNC_10 (struct net_device*,TYPE_2__*) ;
 unsigned char FUNC_11 (int ) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 struct baycom_state* FUNC_14 (struct net_device*) ;
 int FUNC_15 (int,int ) ;
 int FUNC_16 (struct net_device*,struct baycom_state*) ;
 int FUNC_17 (struct net_device*,struct baycom_state*) ;

__attribute__((used)) static irqreturn_t FUNC_18(int VAR_3, void *VAR_4)
{
 struct net_device *VAR_5 = (struct net_device *)VAR_4;
 struct baycom_state *VAR_6 = FUNC_14(VAR_5);
 unsigned char VAR_7;

 if (!VAR_5 || !VAR_6 || VAR_6->hdrv.magic != VAR_0)
  return VAR_2;

 if ((VAR_7 = FUNC_11(FUNC_0(VAR_5->base_addr))) & 1)
  return VAR_2;
 FUNC_6(VAR_6);
 do {
  switch (VAR_7 & 6) {
  case 6:
   FUNC_11(FUNC_1(VAR_5->base_addr));
   break;

  case 4:
   FUNC_11(FUNC_3(VAR_5->base_addr));
   break;

  case 2:



   if (FUNC_8(&VAR_6->hdrv))
    FUNC_17(VAR_5, VAR_6);
   else {
    FUNC_16(VAR_5, VAR_6);
    VAR_6->modem.arb_divider--;
   }
   FUNC_15(0x00, FUNC_5(VAR_5->base_addr));
   break;

  default:
   FUNC_11(FUNC_2(VAR_5->base_addr));
   break;
  }
  VAR_7 = FUNC_11(FUNC_0(VAR_5->base_addr));
 } while (!(VAR_7 & 1));
 if (VAR_6->modem.arb_divider <= 0) {
  VAR_6->modem.arb_divider = FUNC_4(VAR_6);
  FUNC_13();
  FUNC_7(VAR_5, &VAR_6->hdrv);
 }
 FUNC_13();
 FUNC_10(VAR_5, &VAR_6->hdrv);
 FUNC_9(VAR_5, &VAR_6->hdrv);
 FUNC_12();
 return VAR_1;
}
