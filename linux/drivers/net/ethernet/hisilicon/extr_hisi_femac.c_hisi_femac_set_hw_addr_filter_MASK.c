
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u32 ;
struct hisi_femac_priv {scalar_t__ glb_base; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned char VAR_2 ;
 unsigned char FUNC_2 (scalar_t__) ;
 int FUNC_3 (unsigned char,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct hisi_femac_priv *VAR_3,
       unsigned char *VAR_4,
       unsigned int VAR_5)
{
 unsigned int VAR_6, VAR_7;
 u32 VAR_8;

 VAR_6 = FUNC_0(VAR_5);
 VAR_7 = FUNC_1(VAR_5);

 VAR_8 = (VAR_4[2] << 24) | (VAR_4[3] << 16) | (VAR_4[4] << 8) | VAR_4[5];
 FUNC_3(VAR_8, VAR_3->glb_base + VAR_7);

 VAR_8 = FUNC_2(VAR_3->glb_base + VAR_6);
 VAR_8 &= ~VAR_2;
 VAR_8 |= ((VAR_4[0] << 8) | VAR_4[1]);
 VAR_8 |= (VAR_0 | VAR_1);
 FUNC_3(VAR_8, VAR_3->glb_base + VAR_6);
}
