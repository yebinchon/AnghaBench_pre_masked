
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct iwl_mvm {int dummy; } ;
struct TYPE_4__ {int width; TYPE_1__* chan; } ;
struct cfg80211_pmsr_request_peer {TYPE_2__ chandef; } ;
struct TYPE_3__ {int center_freq; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_mvm*,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_3(struct iwl_mvm *VAR_5,
          struct cfg80211_pmsr_request_peer *VAR_6,
          u8 *VAR_7, u8 *VAR_8,
          u8 *VAR_9)
{
 u32 VAR_10 = VAR_6->chandef.chan->center_freq;

 *VAR_7 = FUNC_1(VAR_10);

 switch (VAR_6->chandef.width) {
 case 130:
  *VAR_8 = VAR_2;
  break;
 case 131:
  *VAR_8 = VAR_1;
  break;
 case 129:
  *VAR_8 = VAR_3;
  break;
 case 128:
  *VAR_8 = VAR_4;
  break;
 default:
  FUNC_0(VAR_5, "Unsupported BW in FTM request (%d)\n",
   VAR_6->chandef.width);
  return -VAR_0;
 }

 *VAR_9 = (VAR_6->chandef.width > 131) ?
  FUNC_2(&VAR_6->chandef) : 0;

 return 0;
}
