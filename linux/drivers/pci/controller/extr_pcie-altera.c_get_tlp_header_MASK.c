
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct altera_pcie {scalar_t__ root_bus_nr; TYPE_1__* pcie_data; } ;
struct TYPE_2__ {scalar_t__ cfgrd0; scalar_t__ cfgwr0; scalar_t__ cfgrd1; scalar_t__ cfgwr1; scalar_t__ version; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct altera_pcie*) ;
 int FUNC_1 (struct altera_pcie*,scalar_t__) ;
 int FUNC_2 (struct altera_pcie*,scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__,int ,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_4(struct altera_pcie *VAR_3, u8 VAR_4, u32 VAR_5,
      int VAR_6, u8 VAR_7, bool VAR_8, u32 *VAR_9)
{
 u8 VAR_10;
 u8 VAR_11 = VAR_8 ? VAR_3->pcie_data->cfgrd0 : VAR_3->pcie_data->cfgwr0;
 u8 VAR_12 = VAR_8 ? VAR_3->pcie_data->cfgrd1 : VAR_3->pcie_data->cfgwr1;
 u8 VAR_13 = VAR_8 ? VAR_1 : VAR_2;

 if (VAR_3->pcie_data->version == VAR_0)
  VAR_10 = (VAR_4 == VAR_3->root_bus_nr) ? VAR_11 : VAR_12;
 else
  VAR_10 = (VAR_4 > FUNC_0(VAR_3)) ? VAR_11 : VAR_12;

 VAR_9[0] = FUNC_1(VAR_3, VAR_10);
 VAR_9[1] = FUNC_2(VAR_3, VAR_13, VAR_7);
 VAR_9[2] = FUNC_3(VAR_4, VAR_5, VAR_6);
}
