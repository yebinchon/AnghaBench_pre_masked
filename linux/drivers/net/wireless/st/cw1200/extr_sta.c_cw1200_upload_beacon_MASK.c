
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct wsm_template_frame {TYPE_1__* skb; int frame_type; int rate; } ;
struct ieee80211_mgmt {int frame_control; } ;
struct cw1200_common {scalar_t__ mode; TYPE_2__* vif; int hw; } ;
struct TYPE_5__ {scalar_t__ p2p; } ;
struct TYPE_4__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int ,TYPE_2__*,int *,int *) ;
 int FUNC_3 (struct cw1200_common*,int) ;
 int FUNC_4 (struct cw1200_common*,struct wsm_template_frame*) ;

__attribute__((used)) static int FUNC_5(struct cw1200_common *VAR_9)
{
 int VAR_10 = 0;
 struct ieee80211_mgmt *VAR_11;
 struct wsm_template_frame VAR_12 = {
  .frame_type = VAR_6,
 };

 u16 VAR_13;
 u16 VAR_14;

 if (VAR_9->mode == VAR_4 ||
     VAR_9->mode == VAR_3 ||
     VAR_9->mode == VAR_5)
  goto done;

 if (VAR_9->vif->p2p)
  VAR_12.rate = VAR_8;

 VAR_12.skb = FUNC_2(VAR_9->hw, VAR_9->vif,
          &VAR_13, &VAR_14);
 if (!VAR_12.skb)
  return -VAR_0;

 VAR_10 = FUNC_4(VAR_9, &VAR_12);

 if (VAR_10)
  goto done;




 VAR_11 = (void *)VAR_12.skb->data;
 VAR_11->frame_control =
  FUNC_0(VAR_1 |
         VAR_2);

 VAR_12.frame_type = VAR_7;
 if (VAR_9->vif->p2p) {
  VAR_10 = FUNC_3(VAR_9, 1);
 } else {
  VAR_10 = FUNC_4(VAR_9, &VAR_12);
  FUNC_3(VAR_9, 0);
 }

done:
 FUNC_1(VAR_12.skb);

 return VAR_10;
}
