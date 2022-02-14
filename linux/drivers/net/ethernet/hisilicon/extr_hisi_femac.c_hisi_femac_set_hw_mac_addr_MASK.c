
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u32 ;
struct hisi_femac_priv {scalar_t__ glb_base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (unsigned char,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct hisi_femac_priv *VAR_2,
          unsigned char *VAR_3)
{
 u32 VAR_4;

 VAR_4 = VAR_3[1] | (VAR_3[0] << 8);
 FUNC_0(VAR_4, VAR_2->glb_base + VAR_0);

 VAR_4 = VAR_3[5] | (VAR_3[4] << 8) | (VAR_3[3] << 16) | (VAR_3[2] << 24);
 FUNC_0(VAR_4, VAR_2->glb_base + VAR_1);

 return 0;
}
