
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u32 ;
struct bcm_sysport_priv {int is_lite; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bcm_sysport_priv*,unsigned char,int ) ;
 int FUNC_1 (struct bcm_sysport_priv*,unsigned char,int ) ;

__attribute__((used)) static void FUNC_2(struct bcm_sysport_priv *VAR_4,
        unsigned char *VAR_5)
{
 u32 VAR_6 = (VAR_5[0] << 24) | (VAR_5[1] << 16) | (VAR_5[2] << 8) |
      VAR_5[3];
 u32 VAR_7 = (VAR_5[4] << 8) | VAR_5[5];

 if (!VAR_4->is_lite) {
  FUNC_1(VAR_4, VAR_6, VAR_2);
  FUNC_1(VAR_4, VAR_7, VAR_3);
 } else {
  FUNC_0(VAR_4, VAR_6, VAR_0);
  FUNC_0(VAR_4, VAR_7, VAR_1);
 }
}
