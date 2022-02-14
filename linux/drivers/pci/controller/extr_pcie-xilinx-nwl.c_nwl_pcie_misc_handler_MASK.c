
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nwl_pcie {struct device* dev; } ;
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
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct nwl_pcie*,int ) ;
 int FUNC_3 (struct nwl_pcie*,int,int ) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_17, void *VAR_18)
{
 struct nwl_pcie *VAR_19 = VAR_18;
 struct device *VAR_20 = VAR_19->dev;
 u32 VAR_21;


 VAR_21 = FUNC_2(VAR_19, VAR_14) &
         VAR_7;
 if (!VAR_21)
  return VAR_1;

 if (VAR_21 & VAR_11)
  FUNC_0(VAR_20, "Received Message FIFO Overflow\n");

 if (VAR_21 & VAR_12)
  FUNC_0(VAR_20, "Slave error\n");

 if (VAR_21 & VAR_8)
  FUNC_0(VAR_20, "Master error\n");

 if (VAR_21 & VAR_6)
  FUNC_0(VAR_20, "In Misc Ingress address translation error\n");

 if (VAR_21 & VAR_3)
  FUNC_0(VAR_20, "In Misc Egress address translation error\n");

 if (VAR_21 & VAR_4)
  FUNC_0(VAR_20, "Fatal Error in AER Capability\n");

 if (VAR_21 & VAR_9)
  FUNC_0(VAR_20, "Non-Fatal Error in AER Capability\n");

 if (VAR_21 & VAR_2)
  FUNC_0(VAR_20, "Correctable Error in AER Capability\n");

 if (VAR_21 & VAR_13)
  FUNC_0(VAR_20, "Unsupported request Detected\n");

 if (VAR_21 & VAR_10)
  FUNC_0(VAR_20, "Non-Fatal Error Detected\n");

 if (VAR_21 & VAR_5)
  FUNC_0(VAR_20, "Fatal Error Detected\n");

 if (VAR_21 & VAR_15)
  FUNC_1(VAR_20, "Link Autonomous Bandwidth Management Status bit set\n");

 if (VAR_21 & VAR_16)
  FUNC_1(VAR_20, "Link Bandwidth Management Status bit set\n");


 FUNC_3(VAR_19, VAR_21, VAR_14);

 return VAR_0;
}
