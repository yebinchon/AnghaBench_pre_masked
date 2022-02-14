
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct virtchnl_rss_key {int key_len; int key; int vsi_id; } ;
struct TYPE_4__ {int id; } ;
struct iavf_adapter {scalar_t__ current_op; int rss_key_size; int aq_required; int rss_key; TYPE_2__ vsi; TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,char*,scalar_t__) ;
 int FUNC_1 (struct iavf_adapter*,scalar_t__,int *,int) ;
 int FUNC_2 (struct virtchnl_rss_key*) ;
 struct virtchnl_rss_key* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int ,int) ;

void FUNC_5(struct iavf_adapter *VAR_4)
{
 struct virtchnl_rss_key *VAR_5;
 int VAR_6;

 if (VAR_4->current_op != VAR_3) {

  FUNC_0(&VAR_4->pdev->dev, "Cannot set RSS key, command %d pending\n",
   VAR_4->current_op);
  return;
 }
 VAR_6 = sizeof(struct virtchnl_rss_key) +
       (VAR_4->rss_key_size * sizeof(u8)) - 1;
 VAR_5 = FUNC_3(VAR_6, VAR_0);
 if (!VAR_5)
  return;
 VAR_5->vsi_id = VAR_4->vsi.id;
 VAR_5->key_len = VAR_4->rss_key_size;
 FUNC_4(VAR_5->key, VAR_4->rss_key, VAR_4->rss_key_size);

 VAR_4->current_op = VAR_2;
 VAR_4->aq_required &= ~VAR_1;
 FUNC_1(VAR_4, VAR_2, (u8 *)VAR_5, VAR_6);
 FUNC_2(VAR_5);
}
