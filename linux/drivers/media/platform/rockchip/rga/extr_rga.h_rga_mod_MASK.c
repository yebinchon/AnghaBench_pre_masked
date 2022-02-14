
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rockchip_rga {int dummy; } ;


 int FUNC_0 (struct rockchip_rga*,int) ;
 int FUNC_1 (struct rockchip_rga*,int,int) ;

__attribute__((used)) static inline void FUNC_2(struct rockchip_rga *VAR_0, u32 VAR_1, u32 VAR_2, u32 VAR_3)
{
 u32 VAR_4 = FUNC_0(VAR_0, VAR_1) & ~(VAR_3);

 VAR_4 |= VAR_2 & VAR_3;
 FUNC_1(VAR_0, VAR_1, VAR_4);
}
