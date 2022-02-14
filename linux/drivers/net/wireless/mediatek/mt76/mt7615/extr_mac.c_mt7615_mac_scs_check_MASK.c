
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mt7615_dev {scalar_t__ last_cca_adj; scalar_t__ false_cca_cck; scalar_t__ false_cca_ofdm; int scs_en; } ;


 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (struct mt7615_dev*,scalar_t__,int) ;
 int FUNC_4 (struct mt7615_dev*) ;
 int FUNC_5 (struct mt7615_dev*) ;
 scalar_t__ FUNC_6 (struct mt7615_dev*,int ) ;
 scalar_t__ FUNC_7 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_8(struct mt7615_dev *VAR_10)
{
 u32 VAR_11, VAR_12 = 0, VAR_13 = 0, VAR_14 = 0;
 u32 VAR_15, VAR_16, VAR_17, VAR_18;
 int VAR_19;

 if (!VAR_10->scs_en)
  return;

 for (VAR_19 = 0; VAR_19 < 4; VAR_19++) {
  u32 VAR_20;

  VAR_11 = FUNC_6(VAR_10, FUNC_2(VAR_19));
  VAR_20 = FUNC_0(VAR_2, VAR_11);
  if (VAR_20 > VAR_13) {
   VAR_12 = FUNC_0(VAR_1, VAR_11);
   VAR_13 = VAR_20;
  }
 }

 VAR_11 = FUNC_6(VAR_10, VAR_7);
 VAR_17 = FUNC_0(VAR_5, VAR_11);
 VAR_18 = FUNC_0(VAR_6, VAR_11);

 VAR_11 = FUNC_6(VAR_10, VAR_8);
 VAR_15 = FUNC_0(VAR_3, VAR_11);
 VAR_16 = FUNC_0(VAR_4, VAR_11);

 VAR_10->false_cca_ofdm = VAR_18 - VAR_16;
 VAR_10->false_cca_cck = VAR_17 - VAR_15;
 FUNC_4(VAR_10);

 if (VAR_12 + VAR_13)
  VAR_14 = FUNC_1(VAR_13,
           VAR_12 + VAR_13);


 FUNC_3(VAR_10, VAR_14, 0);

 FUNC_3(VAR_10, VAR_14, 1);

 if (FUNC_7(VAR_9, VAR_10->last_cca_adj + 10 * VAR_0))
  FUNC_5(VAR_10);
}
