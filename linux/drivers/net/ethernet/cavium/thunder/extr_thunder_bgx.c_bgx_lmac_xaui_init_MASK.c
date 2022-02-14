
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct lmac {int lmacid; scalar_t__ lmac_type; scalar_t__ use_training; } ;
struct bgx {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
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
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 scalar_t__ FUNC_0 (struct bgx*,int,int ,int,int) ;
 int FUNC_1 (struct bgx*,int,int ,int) ;
 int FUNC_2 (struct bgx*,int,int ) ;
 int FUNC_3 (struct bgx*,int,int ,int) ;
 int FUNC_4 (int *,char*) ;

__attribute__((used)) static int FUNC_5(struct bgx *VAR_44, struct lmac *VAR_45)
{
 u64 VAR_46;
 int VAR_47 = VAR_45->lmacid;


 FUNC_1(VAR_44, VAR_47, VAR_21, VAR_37);
 if (FUNC_0(VAR_44, VAR_47, VAR_21, VAR_37, 1)) {
  FUNC_4(&VAR_44->pdev->dev, "BGX SPU reset not completed\n");
  return -1;
 }


 VAR_46 = FUNC_2(VAR_44, VAR_47, VAR_1);
 VAR_46 &= ~VAR_26;
 FUNC_3(VAR_44, VAR_47, VAR_1, VAR_46);

 FUNC_1(VAR_44, VAR_47, VAR_21, VAR_36);

 if (VAR_45->lmac_type == VAR_4)
  FUNC_1(VAR_44, VAR_47, VAR_24,
          VAR_40);


 VAR_46 = FUNC_2(VAR_44, VAR_47, VAR_24);
 VAR_46 &= ~VAR_41;
 FUNC_3(VAR_44, VAR_47, VAR_24, VAR_46);


 VAR_46 = FUNC_2(VAR_44, VAR_47, VAR_6);
 FUNC_3(VAR_44, VAR_47, VAR_6, VAR_46);
 VAR_46 = FUNC_2(VAR_44, VAR_47, VAR_10);
 FUNC_3(VAR_44, VAR_47, VAR_10, VAR_46);
 VAR_46 = FUNC_2(VAR_44, VAR_47, VAR_23);
 FUNC_3(VAR_44, VAR_47, VAR_23, VAR_46);

 if (VAR_45->use_training) {
  FUNC_3(VAR_44, VAR_47, VAR_20, 0x00);
  FUNC_3(VAR_44, VAR_47, VAR_18, 0x00);
  FUNC_3(VAR_44, VAR_47, VAR_19, 0x00);

  FUNC_1(VAR_44, VAR_47,
          VAR_17, VAR_42);
 }


 FUNC_1(VAR_44, VAR_47, VAR_8, VAR_31);


 VAR_46 = FUNC_2(VAR_44, VAR_47, VAR_22);
 VAR_46 &= ~VAR_39;
 FUNC_3(VAR_44, VAR_47, VAR_22, VAR_46);


 VAR_46 = FUNC_2(VAR_44, VAR_47, VAR_16);
 VAR_46 = VAR_46 & ~(VAR_34 | VAR_35);
 FUNC_3(VAR_44, VAR_47, VAR_16, VAR_46);

 VAR_46 = FUNC_2(VAR_44, VAR_47, VAR_15);
 if (VAR_45->lmac_type == VAR_2)
  VAR_46 |= (1 << 23);
 else if (VAR_45->lmac_type == VAR_3)
  VAR_46 |= (1 << 24);
 else
  VAR_46 &= ~((1 << 23) | (1 << 24));
 VAR_46 = VAR_46 & (~((1ULL << 25) | (1ULL << 22) | (1ULL << 12)));
 FUNC_3(VAR_44, VAR_47, VAR_15, VAR_46);

 VAR_46 = FUNC_2(VAR_44, 0, VAR_25);
 VAR_46 &= ~VAR_38;
 FUNC_3(VAR_44, 0, VAR_25, VAR_46);


 FUNC_1(VAR_44, VAR_47, VAR_1, VAR_26);

 VAR_46 = FUNC_2(VAR_44, VAR_47, VAR_21);
 VAR_46 &= ~VAR_36;
 FUNC_3(VAR_44, VAR_47, VAR_21, VAR_46);

 VAR_46 = FUNC_2(VAR_44, VAR_47, VAR_9);
 VAR_46 &= ~VAR_33;
 VAR_46 |= VAR_32;
 FUNC_3(VAR_44, VAR_47, VAR_9, VAR_46);


 FUNC_3(VAR_44, VAR_47, VAR_5, ((0xffffULL << 32) |
        VAR_0 | VAR_28 | VAR_43 | VAR_30));

 FUNC_3(VAR_44, VAR_47,
        VAR_12, VAR_27);
 VAR_46 = FUNC_2(VAR_44, VAR_47, VAR_11);
 VAR_46 &= ~0xFFFFull;
 FUNC_3(VAR_44, VAR_47, VAR_11,
        VAR_46 | (VAR_27 - 0x1000));
 FUNC_3(VAR_44, VAR_47, VAR_13, 0x01);


 FUNC_1(VAR_44, VAR_47, VAR_14, (0x100 - 1));

 FUNC_1(VAR_44, VAR_47, VAR_7, VAR_29);

 return 0;
}
