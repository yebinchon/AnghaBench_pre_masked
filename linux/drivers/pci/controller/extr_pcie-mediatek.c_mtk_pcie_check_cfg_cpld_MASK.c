
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mtk_pcie_port {scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct mtk_pcie_port *VAR_6)
{
 u32 VAR_7;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_6->base + VAR_4, VAR_7,
     !(VAR_7 & VAR_0), 10,
     100 * VAR_5);
 if (VAR_8)
  return VAR_2;

 if (FUNC_0(VAR_6->base + VAR_4) & VAR_1)
  return VAR_2;

 return VAR_3;
}
