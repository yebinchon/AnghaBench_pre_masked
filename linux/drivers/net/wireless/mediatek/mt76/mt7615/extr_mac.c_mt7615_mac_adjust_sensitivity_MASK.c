
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct mt7615_dev {int false_cca_ofdm; int false_cca_cck; int ofdm_sensitivity; int cck_sensitivity; int last_cca_adj; int mt76; } ;
typedef int s8 ;


 scalar_t__ FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (struct mt7615_dev*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct mt7615_dev*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_8(struct mt7615_dev *VAR_7,
         u32 VAR_8, bool VAR_9)
{
 int VAR_10 = VAR_9 ? VAR_7->false_cca_ofdm : VAR_7->false_cca_cck;
 u16 VAR_11 = VAR_9 ? -98 : -110;
 bool VAR_12 = 0;
 s8 *VAR_13;
 int VAR_14;

 VAR_13 = VAR_9 ? &VAR_7->ofdm_sensitivity : &VAR_7->cck_sensitivity;
 VAR_14 = FUNC_6(&VAR_7->mt76);
 if (!VAR_14) {
  FUNC_5(VAR_7);
  return;
 }

 VAR_14 = FUNC_4(VAR_14, -72);
 if (VAR_10 > 500) {
  if (VAR_8 > FUNC_0(40, 100))
   return;


  if (*VAR_13 == VAR_11 && VAR_14 > -90) {
   *VAR_13 = -90;
   VAR_12 = 1;
  } else if (*VAR_13 + 2 < VAR_14) {
   *VAR_13 += 2;
   VAR_12 = 1;
  }
 } else if ((VAR_10 > 0 && VAR_10 < 50) ||
     VAR_8 > FUNC_0(60, 100)) {

  if (*VAR_13 - 2 >= VAR_11) {
   *VAR_13 -= 2;
   VAR_12 = 1;
  }
 }

 if (*VAR_13 > VAR_14) {
  *VAR_13 = VAR_14;
  VAR_12 = 1;
 }

 if (VAR_12) {
  u16 VAR_15;

  if (VAR_9) {

   VAR_15 = *VAR_13 * 2 + 512;
   FUNC_7(VAR_7, VAR_0,
     VAR_2,
     FUNC_2(VAR_15));
  } else {
   VAR_15 = *VAR_13 + 256;
   FUNC_7(VAR_7, VAR_3,
     VAR_1,
     FUNC_1(VAR_15));
   FUNC_7(VAR_7, VAR_5,
     VAR_4,
     FUNC_3(VAR_15));
  }
  VAR_7->last_cca_adj = VAR_6;
 }
}
