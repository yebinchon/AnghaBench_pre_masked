
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct skge_port {int port; scalar_t__ duplex; scalar_t__ speed; scalar_t__ flow_status; TYPE_1__* netdev; struct skge_hw* hw; } ;
struct skge_hw {int dummy; } ;
struct TYPE_2__ {int name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;


 int VAR_22 ;

 int FUNC_0 (int,int ) ;
 scalar_t__ VAR_23 ;
 int FUNC_1 (struct skge_hw*,int,int ) ;
 int VAR_24 ;
 int FUNC_2 (struct skge_port*,int ,int ,TYPE_1__*,char*,int,int) ;
 int FUNC_3 (char*,int ,char const*) ;
 int FUNC_4 (struct skge_hw*,int ,int ) ;
 int FUNC_5 (struct skge_port*) ;
 int FUNC_6 (struct skge_port*) ;
 void* FUNC_7 (struct skge_hw*,int) ;

__attribute__((used)) static void FUNC_8(struct skge_port *VAR_25)
{
 struct skge_hw *VAR_26 = VAR_25->hw;
 int VAR_27 = VAR_25->port;
 const char *VAR_28 = ((void*)0);
 u16 VAR_29, VAR_30;

 VAR_29 = FUNC_1(VAR_26, VAR_27, VAR_13);
 VAR_30 = FUNC_1(VAR_26, VAR_27, VAR_14);

 FUNC_2(VAR_25, VAR_24, VAR_9, VAR_25->netdev,
       "phy interrupt status 0x%x 0x%x\n", VAR_29, VAR_30);

 if (VAR_29 & VAR_16) {
  if (FUNC_1(VAR_26, VAR_27, VAR_12)
      & VAR_15) {
   VAR_28 = "remote fault";
   goto failed;
  }

  if (FUNC_1(VAR_26, VAR_27, VAR_11) & VAR_10) {
   VAR_28 = "master/slave fault";
   goto failed;
  }

  if (!(VAR_30 & VAR_22)) {
   VAR_28 = "speed/duplex";
   goto failed;
  }

  VAR_25->duplex = (VAR_30 & VAR_20)
   ? VAR_0 : VAR_1;
  VAR_25->speed = FUNC_7(VAR_26, VAR_30);


  switch (VAR_30 & 130) {
  case 130:
   VAR_25->flow_status = VAR_5;
   break;
  case 129:
   VAR_25->flow_status = VAR_4;
   break;
  case 128:
   VAR_25->flow_status = VAR_2;
   break;
  default:
   VAR_25->flow_status = VAR_3;
  }

  if (VAR_25->flow_status == VAR_3 ||
      (VAR_25->speed < VAR_23 && VAR_25->duplex == VAR_1))
   FUNC_4(VAR_26, FUNC_0(VAR_27, VAR_6), VAR_7);
  else
   FUNC_4(VAR_26, FUNC_0(VAR_27, VAR_6), VAR_8);
  FUNC_6(VAR_25);
  return;
 }

 if (VAR_29 & VAR_18)
  VAR_25->speed = FUNC_7(VAR_26, VAR_30);

 if (VAR_29 & VAR_17)
  VAR_25->duplex = (VAR_30 & VAR_20) ? VAR_0 : VAR_1;
 if (VAR_29 & VAR_19) {
  if (VAR_30 & VAR_21)
   FUNC_6(VAR_25);
  else
   FUNC_5(VAR_25);
 }
 return;
 failed:
 FUNC_3("%s: autonegotiation failed (%s)\n", VAR_25->netdev->name, VAR_28);


}
