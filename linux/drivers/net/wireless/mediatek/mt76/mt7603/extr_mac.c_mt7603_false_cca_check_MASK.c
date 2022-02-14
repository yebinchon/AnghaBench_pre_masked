
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mt7603_dev {int false_cca_ofdm; int false_cca_cck; int sensitivity; void* last_cca_adj; int mt76; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int FUNC_1 (struct mt7603_dev*) ;
 int FUNC_2 (struct mt7603_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct mt7603_dev*,int ) ;
 scalar_t__ FUNC_5 (void*,void*) ;

__attribute__((used)) static void
FUNC_6(struct mt7603_dev *VAR_8)
{
 int VAR_9, VAR_10, VAR_11, VAR_12;
 int VAR_13;
 int VAR_14;
 u32 VAR_15;

 VAR_15 = FUNC_4(VAR_8, VAR_4);
 VAR_9 = FUNC_0(VAR_5, VAR_15);
 VAR_10 = FUNC_0(VAR_6, VAR_15);

 VAR_15 = FUNC_4(VAR_8, VAR_1);
 VAR_11 = FUNC_0(VAR_2, VAR_15);
 VAR_12 = FUNC_0(VAR_3, VAR_15);

 VAR_8->false_cca_ofdm = VAR_10 - VAR_12;
 VAR_8->false_cca_cck = VAR_9 - VAR_11;

 FUNC_2(VAR_8);

 VAR_14 = FUNC_3(&VAR_8->mt76);
 if (!VAR_14) {
  VAR_8->sensitivity = 0;
  VAR_8->last_cca_adj = VAR_7;
  goto out;
 }

 VAR_14 -= 15;

 VAR_13 = VAR_8->false_cca_ofdm + VAR_8->false_cca_cck;
 if (VAR_13 > 600) {
  if (!VAR_8->sensitivity)
   VAR_8->sensitivity = -92;
  else
   VAR_8->sensitivity += 2;
  VAR_8->last_cca_adj = VAR_7;
 } else if (VAR_13 < 100 ||
     FUNC_5(VAR_7, VAR_8->last_cca_adj + 10 * VAR_0)) {
  VAR_8->last_cca_adj = VAR_7;
  if (!VAR_8->sensitivity)
   goto out;

  VAR_8->sensitivity -= 2;
 }

 if (VAR_8->sensitivity && VAR_8->sensitivity > VAR_14) {
  VAR_8->sensitivity = VAR_14;
  VAR_8->last_cca_adj = VAR_7;
 }

out:
 FUNC_1(VAR_8);
}
