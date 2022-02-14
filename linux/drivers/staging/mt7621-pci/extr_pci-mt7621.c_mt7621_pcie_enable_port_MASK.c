
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mt7621_pcie_port {int slot; struct mt7621_pcie* pcie; } ;
struct mt7621_pcie {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct mt7621_pcie*,int) ;
 int FUNC_2 (struct mt7621_pcie*,int,int) ;

__attribute__((used)) static void FUNC_3(struct mt7621_pcie_port *VAR_11)
{
 struct mt7621_pcie *VAR_12 = VAR_11->pcie;
 u32 VAR_13 = VAR_11->slot;
 u32 VAR_14 = VAR_2 + (VAR_13 * VAR_1);
 u32 VAR_15;


 VAR_15 = FUNC_1(VAR_12, VAR_10);
 VAR_15 |= FUNC_0(VAR_13);
 FUNC_2(VAR_12, VAR_15, VAR_10);


 FUNC_2(VAR_12, VAR_4 | VAR_3,
     VAR_14 + VAR_7);
 FUNC_2(VAR_12, VAR_0,
     VAR_14 + VAR_9);


 FUNC_2(VAR_12, VAR_5 | VAR_6,
     VAR_14 + VAR_8);
}
