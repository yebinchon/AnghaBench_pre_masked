
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lmac {int lmac_type; int lane_to_sds; int lmacid_bd; } ;
struct bgx {int lmac_count; struct lmac* lmac; int bgx_id; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 unsigned long long VAR_8 ;
 unsigned long long VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct bgx*,int ,int ,unsigned long long) ;
 scalar_t__ FUNC_1 (struct bgx*,int ,int ) ;
 int FUNC_2 (struct bgx*,int,scalar_t__,int) ;
 int FUNC_3 (int *,char*,int ) ;
 int VAR_12 ;

__attribute__((used)) static void FUNC_4(struct bgx *VAR_13)
{
 int VAR_14;
 struct lmac *VAR_15;

 FUNC_0(VAR_13, 0, VAR_3, VAR_8);
 if (FUNC_1(VAR_13, 0, VAR_1))
  FUNC_3(&VAR_13->pdev->dev, "BGX%d BIST failed\n", VAR_13->bgx_id);


 for (VAR_14 = 0; VAR_14 < VAR_13->lmac_count; VAR_14++) {
  VAR_15 = &VAR_13->lmac[VAR_14];
  FUNC_2(VAR_13, VAR_14, VAR_0,
         (VAR_15->lmac_type << 8) | VAR_15->lane_to_sds);
  VAR_13->lmac[VAR_14].lmacid_bd = VAR_12;
  VAR_12++;
 }

 FUNC_2(VAR_13, 0, VAR_7, VAR_13->lmac_count);
 FUNC_2(VAR_13, 0, VAR_5, VAR_13->lmac_count);


 for (VAR_14 = 0; VAR_14 < VAR_13->lmac_count; VAR_14++)
  FUNC_0(VAR_13, 0, VAR_2,
          ((1ULL << VAR_9) - 1) <<
          (VAR_14 * VAR_9));


 for (VAR_14 = 0; VAR_14 < VAR_10; VAR_14++)
  FUNC_2(VAR_13, 0, VAR_4 + (VAR_14 * 8), 0x00);


 for (VAR_14 = 0; VAR_14 < VAR_11; VAR_14++)
  FUNC_2(VAR_13, 0, VAR_6 + (VAR_14 * 8), 0x00);
}
