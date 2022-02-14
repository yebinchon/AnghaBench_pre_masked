
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xilinx_pcie_port {int leg_domain; struct device* dev; } ;
struct device {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
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
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct xilinx_pcie_port*,int ) ;
 int FUNC_6 (struct xilinx_pcie_port*,int,int ) ;
 int FUNC_7 (struct xilinx_pcie_port*) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_32, void *VAR_33)
{
 struct xilinx_pcie_port *VAR_34 = (struct xilinx_pcie_port *)VAR_33;
 struct device *VAR_35 = VAR_34->dev;
 u32 VAR_36, VAR_37, VAR_38;


 VAR_36 = FUNC_5(VAR_34, VAR_22);
 VAR_37 = FUNC_5(VAR_34, VAR_23);

 VAR_38 = VAR_36 & VAR_37;
 if (!VAR_38)
  return VAR_2;

 if (VAR_38 & VAR_9)
  FUNC_2(VAR_35, "Link Down\n");

 if (VAR_38 & VAR_5)
  FUNC_2(VAR_35, "ECRC failed\n");

 if (VAR_38 & VAR_21)
  FUNC_2(VAR_35, "Streaming error\n");

 if (VAR_38 & VAR_7)
  FUNC_1(VAR_35, "Hot reset\n");

 if (VAR_38 & VAR_3)
  FUNC_2(VAR_35, "ECAM access timeout\n");

 if (VAR_38 & VAR_4) {
  FUNC_2(VAR_35, "Correctable error message\n");
  FUNC_7(VAR_34);
 }

 if (VAR_38 & VAR_14) {
  FUNC_2(VAR_35, "Non fatal error message\n");
  FUNC_7(VAR_34);
 }

 if (VAR_38 & VAR_6) {
  FUNC_2(VAR_35, "Fatal error message\n");
  FUNC_7(VAR_34);
 }

 if (VAR_38 & (VAR_8 | VAR_10)) {
  VAR_36 = FUNC_5(VAR_34, VAR_24);


  if (!(VAR_36 & VAR_29)) {
   FUNC_2(VAR_35, "RP Intr FIFO1 read error\n");
   goto error;
  }


  if (VAR_36 & VAR_30) {
   VAR_36 = FUNC_5(VAR_34, VAR_25) &
    VAR_31;
  } else {
   VAR_36 = (VAR_36 & VAR_27) >>
    VAR_28;
   VAR_36 = FUNC_4(VAR_34->leg_domain, VAR_36);
  }


  FUNC_6(VAR_34, VAR_26,
      VAR_24);


  if (FUNC_0(VAR_0) ||
      !(VAR_36 & VAR_30))
   FUNC_3(VAR_36);
 }

 if (VAR_38 & VAR_20)
  FUNC_2(VAR_35, "Slave unsupported request\n");

 if (VAR_38 & VAR_19)
  FUNC_2(VAR_35, "Slave unexpected completion\n");

 if (VAR_38 & VAR_16)
  FUNC_2(VAR_35, "Slave completion timeout\n");

 if (VAR_38 & VAR_17)
  FUNC_2(VAR_35, "Slave Error Poison\n");

 if (VAR_38 & VAR_15)
  FUNC_2(VAR_35, "Slave Completer Abort\n");

 if (VAR_38 & VAR_18)
  FUNC_2(VAR_35, "Slave Illegal Burst\n");

 if (VAR_38 & VAR_11)
  FUNC_2(VAR_35, "Master decode error\n");

 if (VAR_38 & VAR_13)
  FUNC_2(VAR_35, "Master slave error\n");

 if (VAR_38 & VAR_12)
  FUNC_2(VAR_35, "Master error poison\n");

error:

 FUNC_6(VAR_34, VAR_38, VAR_22);

 return VAR_1;
}
