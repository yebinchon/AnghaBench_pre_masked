
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u64 ;
typedef size_t u32 ;
struct mt7530_priv {int dummy; } ;
struct mt7530_mib_desc {size_t offset; int size; } ;
struct dsa_switch {struct mt7530_priv* priv; } ;


 size_t FUNC_0 (struct mt7530_mib_desc*) ;
 size_t FUNC_1 (int) ;
 struct mt7530_mib_desc* VAR_0 ;
 int FUNC_2 (struct mt7530_priv*,size_t) ;

__attribute__((used)) static void
FUNC_3(struct dsa_switch *VAR_1, int VAR_2,
    uint64_t *VAR_3)
{
 struct mt7530_priv *VAR_4 = VAR_1->priv;
 const struct mt7530_mib_desc *VAR_5;
 u32 VAR_6, VAR_7;
 u64 VAR_8;

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_0); VAR_7++) {
  VAR_5 = &VAR_0[VAR_7];
  VAR_6 = FUNC_1(VAR_2) + VAR_5->offset;

  VAR_3[VAR_7] = FUNC_2(VAR_4, VAR_6);
  if (VAR_5->size == 2) {
   VAR_8 = FUNC_2(VAR_4, VAR_6 + 4);
   VAR_3[VAR_7] |= VAR_8 << 32;
  }
 }
}
