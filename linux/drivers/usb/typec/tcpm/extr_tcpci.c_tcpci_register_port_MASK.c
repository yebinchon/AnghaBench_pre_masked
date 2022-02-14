
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcpci_data {int regmap; } ;
struct TYPE_2__ {int pd_transmit; int set_roles; int set_pd_rx; int start_toggling; int set_vconn; int set_polarity; int get_cc; int set_cc; int set_vbus; int get_vbus; int init; } ;
struct tcpci {int port; TYPE_1__ tcpc; struct device* dev; int regmap; struct tcpci_data* data; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct tcpci* FUNC_0 (int ) ;
 struct tcpci* FUNC_1 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 struct tcpci* FUNC_3 (struct device*,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct tcpci*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (struct device*,TYPE_1__*) ;

struct tcpci *FUNC_6(struct device *VAR_13, struct tcpci_data *VAR_14)
{
 struct tcpci *VAR_15;
 int VAR_16;

 VAR_15 = FUNC_3(VAR_13, sizeof(*VAR_15), VAR_1);
 if (!VAR_15)
  return FUNC_1(-VAR_0);

 VAR_15->dev = VAR_13;
 VAR_15->data = VAR_14;
 VAR_15->regmap = VAR_14->regmap;

 VAR_15->tcpc.init = VAR_4;
 VAR_15->tcpc.get_vbus = VAR_3;
 VAR_15->tcpc.set_vbus = VAR_10;
 VAR_15->tcpc.set_cc = VAR_6;
 VAR_15->tcpc.get_cc = VAR_2;
 VAR_15->tcpc.set_polarity = VAR_8;
 VAR_15->tcpc.set_vconn = VAR_11;
 VAR_15->tcpc.start_toggling = VAR_12;

 VAR_15->tcpc.set_pd_rx = VAR_7;
 VAR_15->tcpc.set_roles = VAR_9;
 VAR_15->tcpc.pd_transmit = VAR_5;

 VAR_16 = FUNC_4(VAR_15);
 if (VAR_16 < 0)
  return FUNC_1(VAR_16);

 VAR_15->port = FUNC_5(VAR_15->dev, &VAR_15->tcpc);
 if (FUNC_2(VAR_15->port))
  return FUNC_0(VAR_15->port);

 return VAR_15;
}
