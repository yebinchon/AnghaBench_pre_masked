
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u64 ;
struct gswip_rmon_cnt_desc {int size; scalar_t__ offset; } ;
struct gswip_priv {int dummy; } ;
struct dsa_switch {struct gswip_priv* priv; } ;


 int FUNC_0 (struct gswip_rmon_cnt_desc*) ;
 int FUNC_1 (struct gswip_priv*,int,scalar_t__) ;
 struct gswip_rmon_cnt_desc* VAR_0 ;

__attribute__((used)) static void FUNC_2(struct dsa_switch *VAR_1, int VAR_2,
        uint64_t *VAR_3)
{
 struct gswip_priv *VAR_4 = VAR_1->priv;
 const struct gswip_rmon_cnt_desc *VAR_5;
 int VAR_6;
 u64 VAR_7;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_0); VAR_6++) {
  VAR_5 = &VAR_0[VAR_6];

  VAR_3[VAR_6] = FUNC_1(VAR_4, VAR_2,
         VAR_5->offset);
  if (VAR_5->size == 2) {
   VAR_7 = FUNC_1(VAR_4, VAR_2,
       VAR_5->offset + 1);
   VAR_3[VAR_6] |= VAR_7 << 32;
  }
 }
}
