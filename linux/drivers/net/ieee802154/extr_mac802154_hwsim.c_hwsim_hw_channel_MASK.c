
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct ieee802154_hw {struct hwsim_phy* priv; } ;
struct hwsim_pib {void* channel; void* page; } ;
struct hwsim_phy {int pib; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hwsim_pib*,int ) ;
 struct hwsim_pib* FUNC_1 (int,int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,struct hwsim_pib*) ;
 struct hwsim_pib* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct ieee802154_hw *VAR_3, u8 VAR_4, u8 VAR_5)
{
 struct hwsim_phy *VAR_6 = VAR_3->priv;
 struct hwsim_pib *VAR_7, *VAR_8;

 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->page = VAR_4;
 VAR_7->channel = VAR_5;

 VAR_8 = FUNC_3(VAR_6->pib);
 FUNC_2(VAR_6->pib, VAR_7);
 FUNC_0(VAR_8, VAR_2);
 return 0;
}
