
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct bcm_sf2_priv {int dummy; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (scalar_t__) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 unsigned int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (struct bcm_sf2_priv*,int) ;
 int FUNC_2 (struct bcm_sf2_priv*,unsigned int,int ) ;
 int FUNC_3 (char*,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct bcm_sf2_priv *VAR_14,
       unsigned int VAR_15,
       int VAR_16,
       unsigned int VAR_17,
       unsigned int VAR_18,
       bool VAR_19)
{
 int VAR_20;
 u32 VAR_21;




 if (VAR_19)
  VAR_21 = VAR_2 |
        FUNC_0(VAR_17 + VAR_8) |
        VAR_3 | VAR_18 << VAR_10;
 else
  VAR_21 = 0;


 if (VAR_16 == VAR_17)
  VAR_21 |= VAR_9;

 FUNC_2(VAR_14, VAR_21, VAR_4);


 FUNC_2(VAR_14, VAR_15 << VAR_1, VAR_5);

 FUNC_2(VAR_14, 0, VAR_6);


 VAR_20 = FUNC_1(VAR_14, VAR_11 | VAR_0);
 if (VAR_20) {
  FUNC_3("Policer entry at %d failed\n", VAR_15);
  return VAR_20;
 }


 FUNC_2(VAR_14, VAR_12, VAR_7);


 VAR_20 = FUNC_1(VAR_14, VAR_11 | VAR_13);
 if (VAR_20) {
  FUNC_3("Meter entry at %d failed\n", VAR_15);
  return VAR_20;
 }

 return 0;
}
