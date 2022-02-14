
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ u32 ;
struct dsa_switch {int dummy; } ;
struct bcm_sf2_priv {unsigned int num_cfp_rules; } ;
typedef int buf ;
struct TYPE_3__ {char* name; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 struct bcm_sf2_priv* FUNC_1 (struct dsa_switch*) ;
 int FUNC_2 (char*,int,char*,unsigned int,char*) ;
 int FUNC_3 (int *,char*,int) ;

void FUNC_4(struct dsa_switch *VAR_3, int VAR_4,
        u32 VAR_5, uint8_t *VAR_6)
{
 struct bcm_sf2_priv *VAR_7 = FUNC_1(VAR_3);
 unsigned int VAR_8 = FUNC_0(VAR_2);
 char VAR_9[VAR_0];
 unsigned int VAR_10, VAR_11, VAR_12;

 if (VAR_5 != VAR_1)
  return;

 for (VAR_10 = 1; VAR_10 < VAR_7->num_cfp_rules; VAR_10++) {
  for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++) {
   FUNC_2(VAR_9, sizeof(VAR_9),
     "CFP%03d_%sCntr",
     VAR_10, VAR_2[VAR_11].name);
   VAR_12 = (VAR_10 - 1) * VAR_8 + VAR_11;
   FUNC_3(VAR_6 + VAR_12 * VAR_0,
    VAR_9, VAR_0);
  }
 }
}
