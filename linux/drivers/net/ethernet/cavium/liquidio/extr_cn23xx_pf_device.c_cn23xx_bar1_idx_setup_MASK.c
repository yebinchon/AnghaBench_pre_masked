
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct octeon_device {int pcie_port; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (struct octeon_device*,int ) ;
 int FUNC_4 (struct octeon_device*,int,int ) ;

__attribute__((used)) static void FUNC_5(struct octeon_device *VAR_1, u64 VAR_2,
      u32 VAR_3, int VAR_4)
{
 u64 VAR_5;
 u64 VAR_6;

 if (!VAR_4) {
  VAR_6 = FUNC_3(
   VAR_1, FUNC_0(VAR_1->pcie_port, VAR_3));
  FUNC_2(VAR_5, VAR_6);
  FUNC_4(VAR_1, (FUNC_1(VAR_5) & 0xFFFFFFFEULL),
          FUNC_0(VAR_1->pcie_port, VAR_3));
  VAR_6 = FUNC_3(
   VAR_1, FUNC_0(VAR_1->pcie_port, VAR_3));
  FUNC_2(VAR_5, VAR_6);
  return;
 }




 FUNC_4(VAR_1, (((VAR_2 >> 22) << 4) | VAR_0),
         FUNC_0(VAR_1->pcie_port, VAR_3));

 FUNC_2(VAR_5, FUNC_3(
     VAR_1, FUNC_0(VAR_1->pcie_port, VAR_3)));
}
