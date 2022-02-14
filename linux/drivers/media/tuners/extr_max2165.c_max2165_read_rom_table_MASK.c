
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct max2165_priv {int tf_ntch_low_cfg; int tf_ntch_hi_cfg; int tf_balun_low_ref; int tf_balun_hi_ref; int bb_filter_7mhz_cfg; int bb_filter_8mhz_cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct max2165_priv*,int ,int*) ;
 int FUNC_2 (struct max2165_priv*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct max2165_priv *VAR_2)
{
 u8 VAR_3[3];
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < 3; VAR_4++) {
  FUNC_2(VAR_2, VAR_0, VAR_4 + 1);
  FUNC_1(VAR_2, VAR_1, &VAR_3[VAR_4]);
 }

 VAR_2->tf_ntch_low_cfg = VAR_3[0] >> 4;
 VAR_2->tf_ntch_hi_cfg = VAR_3[0] & 0x0F;
 VAR_2->tf_balun_low_ref = VAR_3[1] & 0x0F;
 VAR_2->tf_balun_hi_ref = VAR_3[1] >> 4;
 VAR_2->bb_filter_7mhz_cfg = VAR_3[2] & 0x0F;
 VAR_2->bb_filter_8mhz_cfg = VAR_3[2] >> 4;

 FUNC_0("tf_ntch_low_cfg = 0x%X\n", VAR_2->tf_ntch_low_cfg);
 FUNC_0("tf_ntch_hi_cfg = 0x%X\n", VAR_2->tf_ntch_hi_cfg);
 FUNC_0("tf_balun_low_ref = 0x%X\n", VAR_2->tf_balun_low_ref);
 FUNC_0("tf_balun_hi_ref = 0x%X\n", VAR_2->tf_balun_hi_ref);
 FUNC_0("bb_filter_7mhz_cfg = 0x%X\n", VAR_2->bb_filter_7mhz_cfg);
 FUNC_0("bb_filter_8mhz_cfg = 0x%X\n", VAR_2->bb_filter_8mhz_cfg);

 return 0;
}
