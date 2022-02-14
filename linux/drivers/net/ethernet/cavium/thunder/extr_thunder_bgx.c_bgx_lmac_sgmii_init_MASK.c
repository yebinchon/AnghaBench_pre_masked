
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct lmac {int lmacid; int autoneg; scalar_t__ lmac_type; scalar_t__ phydev; } ;
struct bgx {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_0 (struct bgx*,int,int ,int,int) ;
 int FUNC_1 (struct bgx*,int,int ,int) ;
 int FUNC_2 (struct bgx*,int,int ) ;
 int FUNC_3 (struct bgx*,int,int ,int) ;
 int FUNC_4 (int *,char*) ;

__attribute__((used)) static int FUNC_5(struct bgx *VAR_18, struct lmac *VAR_19)
{
 int VAR_20 = VAR_19->lmacid;
 u64 VAR_21;

 FUNC_1(VAR_18, VAR_20, VAR_4, 0x30);

 FUNC_1(VAR_18, VAR_20, VAR_1, VAR_11);


 VAR_21 = FUNC_2(VAR_18, VAR_20, VAR_2);
 if (VAR_21 & 1)
  FUNC_3(VAR_18, VAR_20, VAR_3, 0);


 FUNC_1(VAR_18, VAR_20, VAR_0, VAR_10);


 FUNC_1(VAR_18, VAR_20, VAR_6, VAR_15);
 if (FUNC_0(VAR_18, VAR_20, VAR_6,
    VAR_15, 1)) {
  FUNC_4(&VAR_18->pdev->dev, "BGX PCS reset not completed\n");
  return -1;
 }


 VAR_21 = FUNC_2(VAR_18, VAR_20, VAR_6);
 VAR_21 &= ~VAR_14;
 VAR_21 |= VAR_16;
 if (VAR_19->phydev) {
  VAR_21 |= VAR_13;
 } else {




  if (VAR_21 & VAR_13)
   VAR_19->autoneg = 1;
 }
 FUNC_3(VAR_18, VAR_20, VAR_6, VAR_21);

 if (VAR_19->lmac_type == VAR_8) {

  VAR_21 = FUNC_2(VAR_18, VAR_20, VAR_5);
  VAR_21 &= ~VAR_12;
  FUNC_3(VAR_18, VAR_20, VAR_5, VAR_21);
  return 0;
 }

 if ((VAR_19->lmac_type == VAR_9) && VAR_19->phydev) {
  if (FUNC_0(VAR_18, VAR_20, VAR_7,
     VAR_17, 0)) {
   FUNC_4(&VAR_18->pdev->dev, "BGX AN_CPT not completed\n");
   return -1;
  }
 }

 return 0;
}
