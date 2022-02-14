
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct dsa_switch {int dummy; } ;
struct cfp_rule {int dummy; } ;
struct TYPE_2__ {int lock; } ;
struct bcm_sf2_priv {unsigned int num_cfp_rules; TYPE_1__ cfp; } ;
struct bcm_sf2_cfp_stat {int ram_loc; int offset; } ;


 unsigned int FUNC_0 (struct bcm_sf2_cfp_stat*) ;
 int VAR_0 ;
 int FUNC_1 (struct bcm_sf2_priv*,int) ;
 int FUNC_2 (struct bcm_sf2_priv*,unsigned int) ;
 struct cfp_rule* FUNC_3 (struct bcm_sf2_priv*,int,unsigned int) ;
 struct bcm_sf2_cfp_stat* VAR_1 ;
 struct bcm_sf2_priv* FUNC_4 (struct dsa_switch*) ;
 int FUNC_5 (struct bcm_sf2_priv*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct dsa_switch *VAR_2, int VAR_3,
       uint64_t *VAR_4)
{
 struct bcm_sf2_priv *VAR_5 = FUNC_4(VAR_2);
 unsigned int VAR_6 = FUNC_0(VAR_1);
 const struct bcm_sf2_cfp_stat *VAR_7;
 unsigned int VAR_8, VAR_9, VAR_10;
 struct cfp_rule *VAR_11;
 int VAR_12;

 FUNC_6(&VAR_5->cfp.lock);
 for (VAR_8 = 1; VAR_8 < VAR_5->num_cfp_rules; VAR_8++) {
  VAR_11 = FUNC_3(VAR_5, VAR_3, VAR_8);
  if (!VAR_11)
   continue;

  for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
   VAR_7 = &VAR_1[VAR_9];

   FUNC_2(VAR_5, VAR_8);
   VAR_12 = FUNC_1(VAR_5, VAR_7->ram_loc | VAR_0);
   if (VAR_12)
    continue;

   VAR_10 = (VAR_8 - 1) * VAR_6 + VAR_9;
   VAR_4[VAR_10] = FUNC_5(VAR_5, VAR_7->offset);
  }

 }
 FUNC_7(&VAR_5->cfp.lock);
}
