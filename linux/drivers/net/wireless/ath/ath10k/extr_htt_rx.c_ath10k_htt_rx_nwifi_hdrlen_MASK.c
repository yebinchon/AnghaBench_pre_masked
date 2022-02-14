
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ieee80211_hdr {int frame_control; } ;
struct ath10k {TYPE_2__* running_fw; } ;
struct TYPE_3__ {int fw_features; } ;
struct TYPE_4__ {TYPE_1__ fw_file; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct ath10k *VAR_1,
          struct ieee80211_hdr *VAR_2)
{
 int VAR_3 = FUNC_0(VAR_2->frame_control);

 if (!FUNC_2(VAR_0,
        VAR_1->running_fw->fw_file.fw_features))
  VAR_3 = FUNC_1(VAR_3, 4);

 return VAR_3;
}
