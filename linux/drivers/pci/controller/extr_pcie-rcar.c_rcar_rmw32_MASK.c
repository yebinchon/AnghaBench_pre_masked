
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct rcar_pcie {int dummy; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct rcar_pcie*,int) ;
 int FUNC_1 (struct rcar_pcie*,unsigned int,int) ;

__attribute__((used)) static void FUNC_2(struct rcar_pcie *VAR_1, int VAR_2, u32 VAR_3, u32 VAR_4)
{
 unsigned int VAR_5 = VAR_0 * (VAR_2 & 3);
 u32 VAR_6 = FUNC_0(VAR_1, VAR_2 & ~3);

 VAR_6 &= ~(VAR_3 << VAR_5);
 VAR_6 |= VAR_4 << VAR_5;
 FUNC_1(VAR_1, VAR_6, VAR_2 & ~3);
}
