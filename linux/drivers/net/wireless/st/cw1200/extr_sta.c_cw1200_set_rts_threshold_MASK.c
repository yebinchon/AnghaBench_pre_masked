
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val32 ;
typedef scalar_t__ u32 ;
struct ieee80211_hw {struct cw1200_common* priv; } ;
struct cw1200_common {scalar_t__ mode; scalar_t__ rts_threshold; } ;
typedef scalar_t__ __le32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (struct cw1200_common*,int ,scalar_t__*,int) ;

int FUNC_3(struct ieee80211_hw *VAR_2, u32 VAR_3)
{
 int VAR_4 = 0;
 __le32 VAR_5;
 struct cw1200_common *VAR_6 = VAR_2->priv;

 if (VAR_6->mode == VAR_0)
  return 0;

 if (VAR_3 != (u32) -1)
  VAR_5 = FUNC_0(VAR_3);
 else
  VAR_5 = 0;

 if (VAR_6->rts_threshold == VAR_3)
  goto out;

 FUNC_1("[STA] Setting RTS threshold: %d\n",
   VAR_6->rts_threshold);


 VAR_4 = FUNC_2(VAR_6, VAR_1,
       &VAR_5, sizeof(VAR_5));
 if (!VAR_4)
  VAR_6->rts_threshold = VAR_3;


out:
 return VAR_4;
}
