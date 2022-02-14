
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bss_descriptor; } ;
struct mwifiex_private {int curr_bcn_buf_lock; TYPE_1__ curr_bss_params; } ;
struct mwifiex_bssdescriptor {struct mwifiex_bssdescriptor* beacon_buf; } ;
struct cfg80211_bss {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mwifiex_bssdescriptor*) ;
 struct mwifiex_bssdescriptor* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,struct mwifiex_bssdescriptor*,int) ;
 int FUNC_3 (struct mwifiex_private*,struct mwifiex_bssdescriptor*) ;
 int FUNC_4 (struct mwifiex_private*,struct cfg80211_bss*,struct mwifiex_bssdescriptor*) ;
 int FUNC_5 (struct mwifiex_private*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct mwifiex_private *VAR_2,
       struct cfg80211_bss *VAR_3)
{
 struct mwifiex_bssdescriptor *VAR_4;
 int VAR_5;


 VAR_4 = FUNC_1(sizeof(struct mwifiex_bssdescriptor), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_5 = FUNC_4(VAR_2, VAR_3, VAR_4);
 if (VAR_5)
  goto done;

 VAR_5 = FUNC_3(VAR_2, VAR_4);
 if (VAR_5)
  goto done;

 FUNC_6(&VAR_2->curr_bcn_buf_lock);

 FUNC_2(&VAR_2->curr_bss_params.bss_descriptor, VAR_4,
        sizeof(VAR_2->curr_bss_params.bss_descriptor));




 FUNC_5(VAR_2);
 FUNC_7(&VAR_2->curr_bcn_buf_lock);

done:



 FUNC_0(VAR_4->beacon_buf);
 FUNC_0(VAR_4);
 return 0;
}
