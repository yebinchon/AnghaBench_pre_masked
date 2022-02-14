
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct emac_adapter {scalar_t__ base; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

void FUNC_4(struct emac_adapter *VAR_2, u8 *VAR_3)
{
 u32 VAR_4, VAR_5, VAR_6, VAR_7;


 VAR_4 = FUNC_1(VAR_1, VAR_3);





 VAR_6 = (VAR_4 >> 31) & 0x1;
 VAR_5 = (VAR_4 >> 26) & 0x1F;

 VAR_7 = FUNC_2(VAR_2->base + VAR_0 + (VAR_6 << 2));
 VAR_7 |= FUNC_0(VAR_5);
 FUNC_3(VAR_7, VAR_2->base + VAR_0 + (VAR_6 << 2));
}
