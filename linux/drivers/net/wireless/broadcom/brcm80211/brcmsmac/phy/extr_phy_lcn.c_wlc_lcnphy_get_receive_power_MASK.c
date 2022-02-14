
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct brcms_phy_lcnphy {int lcnphy_noise_samples; } ;
struct TYPE_2__ {struct brcms_phy_lcnphy* pi_lcnphy; } ;
struct brcms_phy {TYPE_1__ u; } ;
typedef scalar_t__ s32 ;


 int* VAR_0 ;
 int FUNC_0 (struct brcms_phy*,int ) ;
 int FUNC_1 (struct brcms_phy*,int) ;

__attribute__((used)) static u32 FUNC_2(struct brcms_phy *VAR_1, s32 *VAR_2)
{
 u32 VAR_3 = 0;
 s32 VAR_4 = 0;
 u32 VAR_5 = 0;
 struct brcms_phy_lcnphy *VAR_6 = VAR_1->u.pi_lcnphy;

 VAR_4 = 36;
 if (*VAR_2 >= 0)
  VAR_5 = VAR_0[*VAR_2];

 if (-1 == *VAR_2) {
  *VAR_2 = 0;
  while ((*VAR_2 <= (s32) VAR_4)
         && (VAR_3 < 700)) {
   FUNC_1(VAR_1,
            VAR_0
            [*VAR_2]);
   VAR_3 =
    FUNC_0(
     VAR_1,
     VAR_6->
     lcnphy_noise_samples);
   (*VAR_2)++;
  }
  (*VAR_2)--;
 } else {
  FUNC_1(VAR_1, VAR_5);
  VAR_3 =
   FUNC_0(VAR_1,
        VAR_6->
        lcnphy_noise_samples);
 }

 return VAR_3;
}
