
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ category; } ;
struct TYPE_6__ {TYPE_2__ action; } ;
struct ieee80211_mgmt {TYPE_3__ u; } ;
struct cw1200_txinfo {TYPE_1__* hdr; } ;
struct cw1200_common {int dummy; } ;
struct TYPE_4__ {int frame_control; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(struct cw1200_common *VAR_1,
     struct cw1200_txinfo *VAR_2)
{
 struct ieee80211_mgmt *VAR_3 =
  (struct ieee80211_mgmt *)VAR_2->hdr;
 if (FUNC_0(VAR_2->hdr->frame_control) &&
     VAR_3->u.action.category == VAR_0)
  return 1;
 else
  return 0;
}
