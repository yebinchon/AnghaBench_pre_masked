
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct wmi {TYPE_1__* parent_dev; } ;
struct reg_dmn_pair_mapping {int reg_domain; } ;
struct country_code_to_enum_rd {char* isoName; } ;
struct ath6kl_wmi_regdomain {int reg_code; } ;
struct TYPE_2__ {int wiphy; scalar_t__ wiphy_registered; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,char,...) ;
 struct reg_dmn_pair_mapping* FUNC_1 (int) ;
 struct country_code_to_enum_rd* FUNC_2 (int) ;
 struct country_code_to_enum_rd* FUNC_3 (int) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static void FUNC_7(struct wmi *VAR_5, u8 *VAR_6, int VAR_7)
{
 struct ath6kl_wmi_regdomain *VAR_8;
 struct country_code_to_enum_rd *VAR_9 = ((void*)0);
 struct reg_dmn_pair_mapping *VAR_10 = ((void*)0);
 char VAR_11[2];
 u32 VAR_12;

 VAR_8 = (struct ath6kl_wmi_regdomain *) VAR_6;
 VAR_12 = FUNC_5(VAR_8->reg_code);

 if ((VAR_12 >> VAR_0) & VAR_2) {
  VAR_9 = FUNC_2((u16) VAR_12);
 } else if (!(((u16) VAR_12 & VAR_3) == VAR_4)) {
  VAR_10 = FUNC_1((u16) VAR_12);
  VAR_9 = FUNC_3((u16) VAR_12);
  if (VAR_10)
   FUNC_0(VAR_1, "Regpair used: 0x%0x\n",
       VAR_10->reg_domain);
  else
   FUNC_4("Regpair not found reg_code 0x%0x\n",
        VAR_12);
 }

 if (VAR_9 && VAR_5->parent_dev->wiphy_registered) {
  VAR_11[0] = VAR_9->isoName[0];
  VAR_11[1] = VAR_9->isoName[1];

  FUNC_6(VAR_5->parent_dev->wiphy, VAR_11);

  FUNC_0(VAR_1, "Country alpha2 being used: %c%c\n",
      VAR_11[0], VAR_11[1]);
 }
}
