
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct netdata_local {int net_base; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct netdata_local *VAR_0, u8 *VAR_1)
{
 u32 VAR_2;


 VAR_2 = FUNC_3(FUNC_2(VAR_0->net_base));
 VAR_1[0] = VAR_2 & 0xFF;
 VAR_1[1] = VAR_2 >> 8;
 VAR_2 = FUNC_3(FUNC_1(VAR_0->net_base));
 VAR_1[2] = VAR_2 & 0xFF;
 VAR_1[3] = VAR_2 >> 8;
 VAR_2 = FUNC_3(FUNC_0(VAR_0->net_base));
 VAR_1[4] = VAR_2 & 0xFF;
 VAR_1[5] = VAR_2 >> 8;
}
