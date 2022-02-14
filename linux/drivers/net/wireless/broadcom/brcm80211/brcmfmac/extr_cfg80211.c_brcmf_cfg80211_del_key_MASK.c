
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef scalar_t__ u32 ;
struct wiphy {int dummy; } ;
struct net_device {int dummy; } ;
struct brcmf_wsec_key {scalar_t__ algo; int flags; scalar_t__ index; } ;
struct brcmf_if {TYPE_2__* vif; } ;
typedef int s32 ;
struct TYPE_3__ {struct brcmf_wsec_key* key; } ;
struct TYPE_4__ {TYPE_1__ profile; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct brcmf_wsec_key*,int ,int) ;
 struct brcmf_if* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct brcmf_if*,struct brcmf_wsec_key*) ;

__attribute__((used)) static s32
FUNC_5(struct wiphy *VAR_7, struct net_device *VAR_8,
         u8 VAR_9, bool VAR_10, const u8 *VAR_11)
{
 struct brcmf_if *VAR_12 = FUNC_3(VAR_8);
 struct brcmf_wsec_key *VAR_13;
 s32 VAR_14;

 FUNC_0(VAR_6, "Enter\n");
 FUNC_0(VAR_2, "key index (%d)\n", VAR_9);

 if (!FUNC_1(VAR_12->vif))
  return -VAR_5;

 if (VAR_9 >= VAR_0) {

  return -VAR_4;
 }

 VAR_13 = &VAR_12->vif->profile.key[VAR_9];

 if (VAR_13->algo == VAR_3) {
  FUNC_0(VAR_2, "Ignore clearing of (never configured) key\n");
  return -VAR_4;
 }

 FUNC_2(VAR_13, 0, sizeof(*VAR_13));
 VAR_13->index = (u32)VAR_9;
 VAR_13->flags = VAR_1;


 VAR_14 = FUNC_4(VAR_12, VAR_13);

 FUNC_0(VAR_6, "Exit\n");
 return VAR_14;
}
