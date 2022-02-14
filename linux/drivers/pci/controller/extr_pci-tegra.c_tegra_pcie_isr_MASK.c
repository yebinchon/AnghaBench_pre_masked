
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef size_t u32 ;
struct tegra_pcie {struct device* dev; } ;
struct device {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 size_t FUNC_0 (char const**) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct tegra_pcie*,int ) ;
 int FUNC_2 (struct tegra_pcie*,int ,int ) ;
 int FUNC_3 (struct device*,char*,...) ;
 int FUNC_4 (struct device*,char*,...) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_11, void *VAR_12)
{
 const char *VAR_13[] = {
  "Unknown",
  "AXI slave error",
  "AXI decode error",
  "Target abort",
  "Master abort",
  "Invalid write",
  "Legacy interrupt",
  "Response decoding error",
  "AXI response decoding error",
  "Transaction timeout",
  "Slot present pin change",
  "Slot clock request change",
  "TMS clock ramp change",
  "TMS ready for power down",
  "Peer2Peer error",
 };
 struct tegra_pcie *VAR_14 = VAR_12;
 struct device *VAR_15 = VAR_14->dev;
 u32 VAR_16, VAR_17;

 VAR_16 = FUNC_1(VAR_14, VAR_0) & VAR_1;
 VAR_17 = FUNC_1(VAR_14, VAR_6);
 FUNC_2(VAR_14, 0, VAR_0);

 if (VAR_16 == VAR_3)
  return VAR_10;

 if (VAR_16 >= FUNC_0(VAR_13))
  VAR_16 = 0;





 if (VAR_16 == VAR_4 || VAR_16 == VAR_5)
  FUNC_3(VAR_15, "%s, signature: %08x\n", VAR_13[VAR_16], VAR_17);
 else
  FUNC_4(VAR_15, "%s, signature: %08x\n", VAR_13[VAR_16], VAR_17);

 if (VAR_16 == VAR_7 || VAR_16 == VAR_4 ||
     VAR_16 == VAR_2) {
  u32 VAR_18 = FUNC_1(VAR_14, VAR_8) & 0xff;
  u64 VAR_19 = (u64)VAR_18 << 32 | (VAR_17 & 0xfffffffc);

  if (VAR_16 == VAR_4)
   FUNC_3(VAR_15, "  FPCI address: %10llx\n", VAR_19);
  else
   FUNC_4(VAR_15, "  FPCI address: %10llx\n", VAR_19);
 }

 return VAR_9;
}
