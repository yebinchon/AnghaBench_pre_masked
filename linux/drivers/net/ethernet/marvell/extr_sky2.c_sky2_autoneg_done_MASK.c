
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sky2_port {unsigned int port; scalar_t__ duplex; int flow_status; int speed; int netdev; struct sky2_hw* hw; } ;
struct sky2_hw {int flags; scalar_t__ chip_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
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
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_0 (unsigned int,int ) ;
 int VAR_25 ;
 int FUNC_1 (struct sky2_hw*,unsigned int,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct sky2_hw*,int) ;
 int FUNC_4 (struct sky2_hw*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct sky2_port *VAR_26, u16 VAR_27)
{
 struct sky2_hw *VAR_28 = VAR_26->hw;
 unsigned VAR_29 = VAR_26->port;
 u16 VAR_30, VAR_31;

 VAR_30 = FUNC_1(VAR_28, VAR_29, VAR_19);
 VAR_31 = FUNC_1(VAR_28, VAR_29, VAR_20);
 if (VAR_31 & VAR_21) {
  FUNC_2(VAR_26->netdev, "remote fault\n");
  return -1;
 }

 if (!(VAR_27 & VAR_23)) {
  FUNC_2(VAR_26->netdev, "speed/duplex mismatch\n");
  return -1;
 }

 VAR_26->speed = FUNC_3(VAR_28, VAR_27);
 VAR_26->duplex = (VAR_27 & VAR_22) ? VAR_6 : VAR_7;




 if (VAR_28->flags & VAR_24) {

  VAR_30 &= ~(VAR_3|VAR_2);
  VAR_31 &= ~(VAR_18|VAR_17);

  if (VAR_30 & VAR_0)
   VAR_30 |= VAR_3;
  if (VAR_30 & VAR_1)
   VAR_30 |= VAR_2;
  if (VAR_31 & VAR_15)
   VAR_31 |= VAR_18;
  if (VAR_31 & VAR_16)
   VAR_31 |= VAR_17;
 }

 VAR_26->flow_status = VAR_9;
 if (VAR_30 & VAR_3) {
  if (VAR_31 & VAR_18)
   VAR_26->flow_status = VAR_8;
  else if (VAR_30 & VAR_2)
   VAR_26->flow_status = VAR_10;
 } else if (VAR_30 & VAR_2) {
  if ((VAR_31 & VAR_18) && (VAR_31 & VAR_17))
   VAR_26->flow_status = VAR_11;
 }

 if (VAR_26->duplex == VAR_7 && VAR_26->speed < VAR_25 &&
     !(VAR_28->chip_id == VAR_4 || VAR_28->chip_id == VAR_5))
  VAR_26->flow_status = VAR_9;

 if (VAR_26->flow_status & VAR_11)
  FUNC_4(VAR_28, FUNC_0(VAR_29, VAR_12), VAR_14);
 else
  FUNC_4(VAR_28, FUNC_0(VAR_29, VAR_12), VAR_13);

 return 0;
}
