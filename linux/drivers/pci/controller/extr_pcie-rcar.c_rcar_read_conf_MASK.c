
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct rcar_pcie {int dummy; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct rcar_pcie*,int) ;

__attribute__((used)) static u32 FUNC_1(struct rcar_pcie *VAR_1, int VAR_2)
{
 unsigned int VAR_3 = VAR_0 * (VAR_2 & 3);
 u32 VAR_4 = FUNC_0(VAR_1, VAR_2 & ~3);

 return VAR_4 >> VAR_3;
}
