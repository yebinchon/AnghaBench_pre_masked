
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct imx7_csi {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct imx7_csi*,int ) ;
 int FUNC_1 (struct imx7_csi*,int,int ) ;

__attribute__((used)) static void FUNC_2(struct imx7_csi *VAR_5)
{
 u32 VAR_6 = FUNC_0(VAR_5, VAR_4);
 u32 VAR_7 = FUNC_0(VAR_5, VAR_3);


 VAR_7 |= 0xC0000000;

 VAR_6 |= VAR_0;
 VAR_6 |= VAR_1;
 VAR_6 &= ~VAR_2;
 VAR_6 |= 0x2 << 4;

 FUNC_1(VAR_5, VAR_6, VAR_4);
 FUNC_1(VAR_5, VAR_7, VAR_3);
}
