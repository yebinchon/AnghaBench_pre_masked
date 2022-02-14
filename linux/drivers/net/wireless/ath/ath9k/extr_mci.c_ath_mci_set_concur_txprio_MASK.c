
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ath_mci_profile {int voice_priority; scalar_t__ num_pan; scalar_t__ num_hid; scalar_t__ num_a2dp; scalar_t__ num_other_acl; scalar_t__ num_sco; scalar_t__ num_mgmt; } ;
struct ath_btcoex {struct ath_mci_profile mci; } ;
struct ath_softc {int sc_ah; struct ath_btcoex btcoex; } ;
typedef int stomp_txprio ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int*) ;
 int FUNC_1 (int,int*) ;
 int FUNC_2 (int*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct ath_softc *VAR_5)
{
 struct ath_btcoex *VAR_6 = &VAR_5->btcoex;
 struct ath_mci_profile *VAR_7 = &VAR_6->mci;
 u8 VAR_8[VAR_2];

 FUNC_2(VAR_8, 0, sizeof(VAR_8));
 if (VAR_7->num_mgmt) {
  VAR_8[VAR_0] = VAR_4;
  if (!VAR_7->num_pan && !VAR_7->num_other_acl)
   VAR_8[VAR_3] =
    VAR_4;
 } else {
  u8 VAR_9[] = { 50, 90, 94, 52 };

  VAR_8[VAR_1] =
  VAR_8[VAR_3] = 0xff;

  if (VAR_7->num_sco)
   FUNC_1(VAR_7->voice_priority,
          VAR_8);
  if (VAR_7->num_other_acl)
   FUNC_1(VAR_9[0], VAR_8);
  if (VAR_7->num_a2dp)
   FUNC_1(VAR_9[1], VAR_8);
  if (VAR_7->num_hid)
   FUNC_1(VAR_9[2], VAR_8);
  if (VAR_7->num_pan)
   FUNC_1(VAR_9[3], VAR_8);

  if (VAR_8[VAR_3] == 0xff)
   VAR_8[VAR_3] = 0;

  if (VAR_8[VAR_1] == 0xff)
   VAR_8[VAR_1] = 0;
 }
 FUNC_0(VAR_5->sc_ah, VAR_8);
}
