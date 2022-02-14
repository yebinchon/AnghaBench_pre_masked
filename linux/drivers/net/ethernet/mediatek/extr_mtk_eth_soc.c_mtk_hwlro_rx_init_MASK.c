
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mtk_eth {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_3 (struct mtk_eth*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct mtk_eth *VAR_23)
{
 int VAR_24;
 u32 VAR_25 = 0, VAR_26 = 0, VAR_27 = 0;
 u32 VAR_28 = 0, VAR_29 = 0;


 VAR_26 |= VAR_18;


 VAR_26 |= VAR_22;


 VAR_26 |= VAR_16;
 VAR_25 |= VAR_17;


 VAR_26 |= VAR_21;


 VAR_26 |= VAR_20;
 VAR_27 |= VAR_19;

 for (VAR_24 = 1; VAR_24 < VAR_10; VAR_24++) {
  FUNC_3(VAR_23, VAR_25, FUNC_0(VAR_24));
  FUNC_3(VAR_23, VAR_26, FUNC_1(VAR_24));
  FUNC_3(VAR_23, VAR_27, FUNC_2(VAR_24));
 }


 VAR_28 |= VAR_6;


 VAR_28 |= VAR_7;


 FUNC_3(VAR_23, VAR_1, VAR_14);


 FUNC_3(VAR_23, VAR_4, VAR_12);


 FUNC_3(VAR_23, (VAR_5 << 16) | VAR_3,
  VAR_11);


 VAR_29 |= VAR_0 | (VAR_2 & 0xff);


 VAR_29 |= VAR_9;


 VAR_28 |= VAR_8;

 FUNC_3(VAR_23, VAR_29, VAR_15);
 FUNC_3(VAR_23, VAR_28, VAR_13);

 return 0;
}
