
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct bgmac {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bgmac*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct bgmac *VAR_2, u8 *VAR_3)
{
 u32 VAR_4;

 VAR_4 = (VAR_3[0] << 24) | (VAR_3[1] << 16) | (VAR_3[2] << 8) | VAR_3[3];
 FUNC_0(VAR_2, VAR_0, VAR_4);
 VAR_4 = (VAR_3[4] << 8) | VAR_3[5];
 FUNC_0(VAR_2, VAR_1, VAR_4);
}
