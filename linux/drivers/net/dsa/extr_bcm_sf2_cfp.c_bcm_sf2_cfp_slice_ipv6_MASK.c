
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bcm_sf2_priv {int dummy; } ;
typedef int __be32 ;
typedef int __be16 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned int) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int const) ;
 int FUNC_4 (int const) ;
 int FUNC_5 (struct bcm_sf2_priv*,int,int) ;

__attribute__((used)) static void FUNC_6(struct bcm_sf2_priv *VAR_1,
       const __be32 *VAR_2, const __be16 VAR_3,
       unsigned int VAR_4,
       bool VAR_5)
{
 u32 VAR_6, VAR_7, VAR_8, VAR_9;





 VAR_6 = FUNC_4(VAR_2[3]);
 VAR_8 = (u32)FUNC_3(VAR_3) << 8 | ((VAR_6 >> 8) & 0xff);
 if (VAR_5)
  VAR_9 = FUNC_1(4);
 else
  VAR_9 = FUNC_0(4);
 FUNC_5(VAR_1, VAR_8, VAR_9);





 VAR_7 = FUNC_4(VAR_2[2]);
 VAR_8 = (u32)(VAR_6 & 0xff) << 24 | (u32)(VAR_6 >> 16) << 8 |
       ((VAR_7 >> 8) & 0xff);
 if (VAR_5)
  VAR_9 = FUNC_1(3);
 else
  VAR_9 = FUNC_0(3);
 FUNC_5(VAR_1, VAR_8, VAR_9);





 VAR_6 = FUNC_4(VAR_2[1]);
 VAR_8 = (u32)(VAR_7 & 0xff) << 24 | (u32)(VAR_7 >> 16) << 8 |
       ((VAR_6 >> 8) & 0xff);
 if (VAR_5)
  VAR_9 = FUNC_1(2);
 else
  VAR_9 = FUNC_0(2);
 FUNC_5(VAR_1, VAR_8, VAR_9);





 VAR_7 = FUNC_4(VAR_2[0]);
 VAR_8 = (u32)(VAR_6 & 0xff) << 24 | (u32)(VAR_6 >> 16) << 8 |
       ((VAR_7 >> 8) & 0xff);
 if (VAR_5)
  VAR_9 = FUNC_1(1);
 else
  VAR_9 = FUNC_0(1);
 FUNC_5(VAR_1, VAR_8, VAR_9);







 VAR_6 = (u32)(VAR_7 & 0xff) << 24 | (u32)(VAR_7 >> 16) << 8 |
        FUNC_2(VAR_4) | VAR_0;
 if (VAR_5)
  VAR_9 = FUNC_1(0);
 else
  VAR_9 = FUNC_0(0);
 FUNC_5(VAR_1, VAR_6, VAR_9);
}
