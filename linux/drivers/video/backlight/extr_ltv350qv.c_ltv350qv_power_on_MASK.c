
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ltv350qv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_5 (int) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_6 (int) ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_7 (int) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_8 (struct ltv350qv*,int ,int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int,int) ;

__attribute__((used)) static int FUNC_11(struct ltv350qv *VAR_28)
{
 int VAR_29;


 if (FUNC_8(VAR_28, VAR_17, 0x0000))
  goto err;
 FUNC_10(15000, 16000);


 if (FUNC_8(VAR_28, VAR_17, VAR_26))
  goto err;
 if (FUNC_8(VAR_28, VAR_18, VAR_24))
  goto err_power1;


 if (FUNC_8(VAR_28, VAR_17,
          VAR_26 | FUNC_1(5)
          | FUNC_7(5)))
  goto err_power2;

 FUNC_9(55);


 VAR_29 = FUNC_8(VAR_28, VAR_13,
     VAR_14 | VAR_19 | FUNC_5(0x1d));
 VAR_29 |= FUNC_8(VAR_28, VAR_2,
      VAR_6 | VAR_1
      | VAR_3 | VAR_20);
 VAR_29 |= FUNC_8(VAR_28, VAR_7,
      VAR_27
      | VAR_12
      | VAR_4
      | VAR_8
      | VAR_22);
 VAR_29 |= FUNC_8(VAR_28, VAR_9, FUNC_0(3));
 VAR_29 |= FUNC_8(VAR_28, VAR_10,
      VAR_15 | FUNC_3(3));
 VAR_29 |= FUNC_8(VAR_28, VAR_23, 0x000a);
 VAR_29 |= FUNC_8(VAR_28, VAR_11, 0x0021);
 VAR_29 |= FUNC_8(VAR_28, VAR_21, FUNC_6(3) | FUNC_2(0));
 VAR_29 |= FUNC_8(VAR_28, FUNC_4(0), 0x0103);
 VAR_29 |= FUNC_8(VAR_28, FUNC_4(1), 0x0301);
 VAR_29 |= FUNC_8(VAR_28, FUNC_4(2), 0x1f0f);
 VAR_29 |= FUNC_8(VAR_28, FUNC_4(3), 0x1f0f);
 VAR_29 |= FUNC_8(VAR_28, FUNC_4(4), 0x0707);
 VAR_29 |= FUNC_8(VAR_28, FUNC_4(5), 0x0307);
 VAR_29 |= FUNC_8(VAR_28, FUNC_4(6), 0x0707);
 VAR_29 |= FUNC_8(VAR_28, FUNC_4(7), 0x0000);
 VAR_29 |= FUNC_8(VAR_28, FUNC_4(8), 0x0004);
 VAR_29 |= FUNC_8(VAR_28, FUNC_4(9), 0x0000);
 if (VAR_29)
  goto err_settings;


 FUNC_9(20);


 VAR_29 = FUNC_8(VAR_28, VAR_17,
     VAR_26 | VAR_25
     | VAR_16 | FUNC_1(5)
     | FUNC_7(5));
 VAR_29 |= FUNC_8(VAR_28, VAR_10,
      VAR_15 | VAR_5 | FUNC_3(3));
 if (VAR_29)
  goto err_disp_on;


 return 0;

err_disp_on:





 FUNC_8(VAR_28, VAR_17,
      VAR_26 | FUNC_1(5)
      | FUNC_7(5));
 FUNC_8(VAR_28, VAR_10,
      VAR_15 | FUNC_3(3));
err_settings:
err_power2:
err_power1:
 FUNC_8(VAR_28, VAR_18, 0x0000);
 FUNC_10(1000, 1100);
err:
 FUNC_8(VAR_28, VAR_17, VAR_26);
 return -VAR_0;
}
