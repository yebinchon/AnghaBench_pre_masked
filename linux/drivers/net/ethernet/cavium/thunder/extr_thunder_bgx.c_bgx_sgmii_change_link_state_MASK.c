
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct lmac {int last_duplex; int last_speed; scalar_t__ link_up; int lmacid; struct bgx* bgx; } ;
struct bgx {scalar_t__ is_rgx; int bgx_id; TYPE_1__* pdev; } ;
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
 int VAR_14 ;
 scalar_t__ FUNC_0 (struct bgx*,int ,int ,int ,int) ;
 int FUNC_1 (struct bgx*,int ,int ) ;
 int FUNC_2 (struct bgx*,int ,int ,int) ;
 int FUNC_3 (int *,char*,int ,int ) ;
 int FUNC_4 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_5(struct lmac *VAR_15)
{
 struct bgx *VAR_16 = VAR_15->bgx;
 u64 VAR_17;
 u64 VAR_18 = 0;
 u64 VAR_19 = 0;
 bool VAR_20, VAR_21;

 VAR_17 = FUNC_1(VAR_16, VAR_15->lmacid, VAR_0);
 VAR_20 = VAR_17 & VAR_6;
 VAR_21 = VAR_17 & VAR_5;
 VAR_17 &= ~(VAR_5 | VAR_6);
 FUNC_2(VAR_16, VAR_15->lmacid, VAR_0, VAR_17);


 if (FUNC_0(VAR_16, VAR_15->lmacid, VAR_1,
    VAR_8, 0)) {
  FUNC_3(&VAR_16->pdev->dev, "BGX%d LMAC%d GMI RX not idle\n",
   VAR_16->bgx_id, VAR_15->lmacid);
  return;
 }


 if (FUNC_0(VAR_16, VAR_15->lmacid, VAR_1,
    VAR_12, 0)) {
  FUNC_3(&VAR_16->pdev->dev, "BGX%d LMAC%d GMI TX not idle\n",
   VAR_16->bgx_id, VAR_15->lmacid);
  return;
 }

 VAR_18 = FUNC_1(VAR_16, VAR_15->lmacid, VAR_1);
 VAR_19 = FUNC_1(VAR_16, VAR_15->lmacid, VAR_4);

 if (VAR_15->link_up) {
  VAR_19 &= ~VAR_13;
  VAR_18 &= ~VAR_7;
  VAR_18 |= (VAR_15->last_duplex << 2);
 } else {
  VAR_19 |= VAR_13;
 }

 switch (VAR_15->last_speed) {
 case 10:
  VAR_18 &= ~VAR_10;
  VAR_18 |= VAR_11;
  VAR_18 &= ~VAR_9;
  VAR_19 &= ~VAR_14;
  VAR_19 |= 50;
  FUNC_2(VAR_16, VAR_15->lmacid, VAR_3, 64);
  FUNC_2(VAR_16, VAR_15->lmacid, VAR_2, 0);
  break;
 case 100:
  VAR_18 &= ~VAR_10;
  VAR_18 &= ~VAR_11;
  VAR_18 &= ~VAR_9;
  VAR_19 &= ~VAR_14;
  VAR_19 |= 5;
  FUNC_2(VAR_16, VAR_15->lmacid, VAR_3, 64);
  FUNC_2(VAR_16, VAR_15->lmacid, VAR_2, 0);
  break;
 case 1000:
  VAR_18 |= VAR_10;
  VAR_18 &= ~VAR_11;
  VAR_18 |= VAR_9;
  VAR_19 &= ~VAR_14;
  VAR_19 |= 1;
  FUNC_2(VAR_16, VAR_15->lmacid, VAR_3, 512);
  if (VAR_15->last_duplex)
   FUNC_2(VAR_16, VAR_15->lmacid,
          VAR_2, 0);
  else
   FUNC_2(VAR_16, VAR_15->lmacid,
          VAR_2, 8192);
  break;
 default:
  break;
 }
 FUNC_2(VAR_16, VAR_15->lmacid, VAR_4, VAR_19);
 FUNC_2(VAR_16, VAR_15->lmacid, VAR_1, VAR_18);


 VAR_17 |= (VAR_21 ? VAR_5 : 0) | (VAR_20 ? VAR_6 : 0);
 FUNC_2(VAR_16, VAR_15->lmacid, VAR_0, VAR_17);

 if (VAR_16->is_rgx && (VAR_17 & (VAR_5 | VAR_6)))
  FUNC_4(VAR_15->link_up, VAR_15->last_speed);
}
