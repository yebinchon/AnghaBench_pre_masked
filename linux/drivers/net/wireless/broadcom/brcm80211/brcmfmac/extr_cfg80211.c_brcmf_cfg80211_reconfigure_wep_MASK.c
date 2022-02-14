
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct brcmf_wsec_key {scalar_t__ algo; } ;
struct brcmf_pub {int dummy; } ;
struct brcmf_if {TYPE_2__* vif; struct brcmf_pub* drvr; } ;
typedef scalar_t__ s32 ;
struct TYPE_3__ {struct brcmf_wsec_key* key; } ;
struct TYPE_4__ {TYPE_1__ profile; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct brcmf_pub*,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct brcmf_if*,char*,scalar_t__*) ;
 scalar_t__ FUNC_2 (struct brcmf_if*,char*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct brcmf_if*,struct brcmf_wsec_key*) ;

__attribute__((used)) static void
FUNC_4(struct brcmf_if *VAR_4)
{
 struct brcmf_pub *VAR_5 = VAR_4->drvr;
 s32 VAR_6;
 u8 VAR_7;
 struct brcmf_wsec_key *VAR_8;
 s32 VAR_9;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  VAR_8 = &VAR_4->vif->profile.key[VAR_7];
  if ((VAR_8->algo == VAR_1) ||
      (VAR_8->algo == VAR_2))
   break;
 }
 if (VAR_7 == VAR_0)
  return;

 VAR_6 = FUNC_3(VAR_4, VAR_8);
 if (VAR_6) {
  FUNC_0(VAR_5, "Setting WEP key failed (%d)\n", VAR_6);
  return;
 }
 VAR_6 = FUNC_1(VAR_4, "wsec", &VAR_9);
 if (VAR_6) {
  FUNC_0(VAR_5, "get wsec error (%d)\n", VAR_6);
  return;
 }
 VAR_9 |= VAR_3;
 VAR_6 = FUNC_2(VAR_4, "wsec", VAR_9);
 if (VAR_6)
  FUNC_0(VAR_5, "set wsec error (%d)\n", VAR_6);
}
