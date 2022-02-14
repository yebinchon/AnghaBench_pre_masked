
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct tegra_pcie_soc {TYPE_2__* ports; } ;
struct tegra_pcie_port {size_t index; struct tegra_pcie* pcie; } ;
struct tegra_pcie {int dev; scalar_t__ afi; struct tegra_pcie_soc* soc; } ;
struct TYPE_3__ {int turnoff_bit; int ack_bit; } ;
struct TYPE_4__ {TYPE_1__ pme; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tegra_pcie*,scalar_t__) ;
 int FUNC_1 (struct tegra_pcie*,int,scalar_t__) ;
 int FUNC_2 (int ,char*,size_t) ;
 int FUNC_3 (scalar_t__,int,int,int,int ) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static void FUNC_5(struct tegra_pcie_port *VAR_2)
{
 struct tegra_pcie *VAR_3 = VAR_2->pcie;
 const struct tegra_pcie_soc *VAR_4 = VAR_3->soc;
 int VAR_5;
 u32 VAR_6;
 u8 VAR_7;

 VAR_6 = FUNC_0(VAR_3, VAR_0);
 VAR_6 |= (0x1 << VAR_4->ports[VAR_2->index].pme.turnoff_bit);
 FUNC_1(VAR_3, VAR_6, VAR_0);

 VAR_7 = VAR_4->ports[VAR_2->index].pme.ack_bit;
 VAR_5 = FUNC_3(VAR_3->afi + VAR_0, VAR_6,
     VAR_6 & (0x1 << VAR_7), 1, VAR_1);
 if (VAR_5)
  FUNC_2(VAR_3->dev, "PME Ack is not received on port: %d\n",
   VAR_2->index);

 FUNC_4(10000, 11000);

 VAR_6 = FUNC_0(VAR_3, VAR_0);
 VAR_6 &= ~(0x1 << VAR_4->ports[VAR_2->index].pme.turnoff_bit);
 FUNC_1(VAR_3, VAR_6, VAR_0);
}
