
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct emac_adapter {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct emac_adapter *VAR_2, u8 *VAR_3)
{
 u32 VAR_4;






 VAR_4 = (((u32)VAR_3[2]) << 24) | (((u32)VAR_3[3]) << 16) |
       (((u32)VAR_3[4]) << 8) | (((u32)VAR_3[5]));
 FUNC_0(VAR_4, VAR_2->base + VAR_0);


 VAR_4 = (((u32)VAR_3[0]) << 8) | (u32)VAR_3[1];
 FUNC_0(VAR_4, VAR_2->base + VAR_1);
}
