
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long long u64 ;
struct lmac {int lmacid; int lmac_type; scalar_t__ use_training; struct bgx* bgx; } ;
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
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 unsigned long long VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (struct bgx*,struct lmac*) ;
 scalar_t__ FUNC_1 (struct bgx*,int,int ,int ,int) ;
 int FUNC_2 (struct bgx*,int,int ,int) ;
 int FUNC_3 (struct bgx*,int,int ) ;
 int FUNC_4 (struct bgx*,int,int ,unsigned long long) ;
 int FUNC_5 (int *,char*) ;

__attribute__((used)) static int FUNC_6(struct lmac *VAR_19)
{
 struct bgx *VAR_20 = VAR_19->bgx;
 int VAR_21 = VAR_19->lmacid;
 int VAR_22 = VAR_19->lmac_type;
 u64 VAR_23;

 if (VAR_19->use_training) {
  VAR_23 = FUNC_3(VAR_20, VAR_21, VAR_10);
  if (!(VAR_23 & (1ull << 13))) {
   VAR_23 = (1ull << 13) | (1ull << 14);
   FUNC_4(VAR_20, VAR_21, VAR_10, VAR_23);
   VAR_23 = FUNC_3(VAR_20, VAR_21, VAR_6);
   VAR_23 |= (1ull << 0);
   FUNC_4(VAR_20, VAR_21, VAR_6, VAR_23);
   return -1;
  }
 }


 if (FUNC_1(VAR_20, VAR_21, VAR_9, VAR_17, 1)) {
  FUNC_5(&VAR_20->pdev->dev, "BGX SPU reset not completed\n");
  return -1;
 }

 if ((VAR_22 == VAR_0) || (VAR_22 == VAR_2) ||
     (VAR_22 == VAR_1) || (VAR_22 == VAR_3)) {
  if (FUNC_1(VAR_20, VAR_21, VAR_7,
     VAR_15, 0)) {
   FUNC_5(&VAR_20->pdev->dev,
    "SPU_BR_STATUS_BLK_LOCK not completed\n");
   return -1;
  }
 } else {
  if (FUNC_1(VAR_20, VAR_21, VAR_8,
     VAR_16, 0)) {
   FUNC_5(&VAR_20->pdev->dev,
    "SPU_BX_STATUS_RX_ALIGN not completed\n");
   return -1;
  }
 }


 if (FUNC_3(VAR_20, VAR_21, VAR_11) & VAR_18)
  FUNC_2(VAR_20, VAR_21,
          VAR_11, VAR_18);
 if (FUNC_3(VAR_20, VAR_21, VAR_11) & VAR_18) {
  FUNC_5(&VAR_20->pdev->dev, "Receive fault, retry training\n");
  if (VAR_19->use_training) {
   VAR_23 = FUNC_3(VAR_20, VAR_21, VAR_10);
   if (!(VAR_23 & (1ull << 13))) {
    VAR_23 = (1ull << 13) | (1ull << 14);
    FUNC_4(VAR_20, VAR_21, VAR_10, VAR_23);
    VAR_23 = FUNC_3(VAR_20, VAR_21,
         VAR_6);
    VAR_23 |= (1ull << 0);
    FUNC_4(VAR_20, VAR_21,
           VAR_6, VAR_23);
    return -1;
   }
  }
  return -1;
 }


 if (FUNC_1(VAR_20, VAR_21, VAR_4, VAR_12, 0)) {
  FUNC_5(&VAR_20->pdev->dev, "SMU RX not idle\n");
  return -1;
 }


 if (FUNC_1(VAR_20, VAR_21, VAR_4, VAR_13, 0)) {
  FUNC_5(&VAR_20->pdev->dev, "SMU TX not idle\n");
  return -1;
 }


 VAR_23 = FUNC_3(VAR_20, VAR_21, VAR_5);

 VAR_23 &= VAR_14;
 if (!VAR_23)
  return 0;




 FUNC_0(VAR_20, VAR_19);

 return -1;
}
