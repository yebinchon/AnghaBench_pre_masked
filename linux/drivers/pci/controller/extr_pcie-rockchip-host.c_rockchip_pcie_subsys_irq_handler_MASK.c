
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rockchip_pcie {struct device* dev; } ;
struct device {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
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
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct rockchip_pcie*) ;
 int FUNC_2 (struct rockchip_pcie*,int ) ;
 int FUNC_3 (struct rockchip_pcie*) ;
 int FUNC_4 (struct rockchip_pcie*,int,int ) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_19, void *VAR_20)
{
 struct rockchip_pcie *VAR_21 = VAR_20;
 struct device *VAR_22 = VAR_21->dev;
 u32 VAR_23;
 u32 VAR_24;

 VAR_23 = FUNC_2(VAR_21, VAR_3);
 if (VAR_23 & VAR_1) {
  FUNC_0(VAR_22, "local interrupt received\n");
  VAR_24 = FUNC_2(VAR_21, VAR_16);
  if (VAR_24 & VAR_12)
   FUNC_0(VAR_22, "parity error detected while reading from the PNP receive FIFO RAM\n");

  if (VAR_24 & VAR_5)
   FUNC_0(VAR_22, "parity error detected while reading from the Completion Receive FIFO RAM\n");

  if (VAR_24 & VAR_13)
   FUNC_0(VAR_22, "parity error detected while reading from replay buffer RAM\n");

  if (VAR_24 & VAR_11)
   FUNC_0(VAR_22, "overflow occurred in the PNP receive FIFO\n");

  if (VAR_24 & VAR_4)
   FUNC_0(VAR_22, "overflow occurred in the completion receive FIFO\n");

  if (VAR_24 & VAR_14)
   FUNC_0(VAR_22, "replay timer timed out\n");

  if (VAR_24 & VAR_15)
   FUNC_0(VAR_22, "replay timer rolled over after 4 transmissions of the same TLP\n");

  if (VAR_24 & VAR_10)
   FUNC_0(VAR_22, "phy error detected on receive side\n");

  if (VAR_24 & VAR_9)
   FUNC_0(VAR_22, "malformed TLP received from the link\n");

  if (VAR_24 & VAR_17)
   FUNC_0(VAR_22, "malformed TLP received from the link\n");

  if (VAR_24 & VAR_7)
   FUNC_0(VAR_22, "an error was observed in the flow control advertisements from the other side\n");

  if (VAR_24 & VAR_6)
   FUNC_0(VAR_22, "a request timed out waiting for completion\n");

  if (VAR_24 & VAR_18)
   FUNC_0(VAR_22, "unmapped TC error\n");

  if (VAR_24 & VAR_8)
   FUNC_0(VAR_22, "MSI mask register changes\n");

  FUNC_4(VAR_21, VAR_24, VAR_16);
 } else if (VAR_23 & VAR_2) {
  FUNC_0(VAR_22, "phy link changes\n");
  FUNC_3(VAR_21);
  FUNC_1(VAR_21);
 }

 FUNC_4(VAR_21, VAR_23 & VAR_1,
       VAR_3);

 return VAR_0;
}
