
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mtk_eth {int dev; scalar_t__ pctl; TYPE_1__* soc; int state; } ;
struct TYPE_2__ {int caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int) ;
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
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct mtk_eth*,int ) ;
 int FUNC_6 (struct mtk_eth*) ;
 int FUNC_7 (struct mtk_eth*,int ) ;
 int FUNC_8 (struct mtk_eth*,int ) ;
 int FUNC_9 (struct mtk_eth*,int ) ;
 int FUNC_10 (struct mtk_eth*,int,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (scalar_t__,int ,int) ;
 scalar_t__ FUNC_16 (int ,int *) ;

__attribute__((used)) static int FUNC_17(struct mtk_eth *VAR_27)
{
 int VAR_28, VAR_29, VAR_30;

 if (FUNC_16(VAR_11, &VAR_27->state))
  return 0;

 FUNC_12(VAR_27->dev);
 FUNC_13(VAR_27->dev);

 VAR_30 = FUNC_6(VAR_27);
 if (VAR_30)
  goto err_disable_pm;

 if (FUNC_1(VAR_27->soc->caps, VAR_22)) {
  VAR_30 = FUNC_4(VAR_27->dev);
  if (VAR_30) {
   FUNC_3(VAR_27->dev, "MAC reset failed!\n");
   goto err_disable_pm;
  }


  FUNC_10(VAR_27, VAR_14, VAR_13);


  FUNC_9(VAR_27, ~0);
  FUNC_8(VAR_27, ~0);

  return 0;
 }


 FUNC_5(VAR_27, VAR_24);
 FUNC_5(VAR_27, VAR_25);

 if (VAR_27->pctl) {

  FUNC_15(VAR_27->pctl, VAR_1, 0xa00);


  FUNC_15(VAR_27->pctl, VAR_2, 0x5);


  FUNC_15(VAR_27->pctl, VAR_0, 0x0);
 }





 for (VAR_28 = 0; VAR_28 < VAR_12; VAR_28++)
  FUNC_10(VAR_27, VAR_3, FUNC_2(VAR_28));




 VAR_29 = FUNC_7(VAR_27, VAR_5);
 FUNC_10(VAR_27, VAR_29 | VAR_6, VAR_5);


 FUNC_10(VAR_27, 1, VAR_4);


 FUNC_10(VAR_27, VAR_14, VAR_13);


 FUNC_10(VAR_27, 0, VAR_17);
 FUNC_9(VAR_27, ~0);
 FUNC_8(VAR_27, ~0);
 FUNC_10(VAR_27, VAR_26, VAR_20);
 FUNC_10(VAR_27, 0, VAR_20);


 FUNC_10(VAR_27, VAR_23, VAR_15);
 FUNC_10(VAR_27, VAR_21, VAR_16);
 FUNC_10(VAR_27, VAR_23, VAR_18);
 FUNC_10(VAR_27, VAR_21, VAR_19);
 FUNC_10(VAR_27, 0x21021000, VAR_7);

 for (VAR_28 = 0; VAR_28 < VAR_12; VAR_28++) {
  u32 VAR_31 = FUNC_7(VAR_27, FUNC_0(VAR_28));


  VAR_31 &= ~0xffff;


  VAR_31 |= VAR_8 | VAR_9 | VAR_10;


  FUNC_10(VAR_27, VAR_31, FUNC_0(VAR_28));
 }

 return 0;

err_disable_pm:
 FUNC_14(VAR_27->dev);
 FUNC_11(VAR_27->dev);

 return VAR_30;
}
