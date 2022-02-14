
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct altera_tse_private {int mac_dev; } ;


 int FUNC_0 (int,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct altera_tse_private *VAR_2, u8 *VAR_3)
{
 u32 VAR_4;
 u32 VAR_5;

 VAR_4 = (VAR_3[3] << 24) | (VAR_3[2] << 16) | (VAR_3[1] << 8) | VAR_3[0];
 VAR_5 = ((VAR_3[5] << 8) | VAR_3[4]) & 0xffff;


 FUNC_0(VAR_4, VAR_2->mac_dev, FUNC_1(VAR_0));
 FUNC_0(VAR_5, VAR_2->mac_dev, FUNC_1(VAR_1));
}
