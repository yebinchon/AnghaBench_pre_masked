
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int escan_state; } ;
struct brcmf_cfg80211_info {int escan_timeout_work; int escan_timeout; TYPE_1__ escan_info; int pub; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct brcmf_cfg80211_info *VAR_5)
{
 FUNC_1(VAR_5->pub, VAR_0,
       VAR_2);
 VAR_5->escan_info.escan_state = VAR_1;

 FUNC_2(&VAR_5->escan_timeout, VAR_4, 0);
 FUNC_0(&VAR_5->escan_timeout_work,
    VAR_3);
}
