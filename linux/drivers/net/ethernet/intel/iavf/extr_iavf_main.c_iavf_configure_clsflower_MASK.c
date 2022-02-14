
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct virtchnl_l4_spec {int dummy; } ;
struct TYPE_5__ {int tcp_spec; } ;
struct TYPE_6__ {int flow_type; TYPE_2__ mask; } ;
struct iavf_cloud_filter {int add; int list; TYPE_3__ f; int cookie; } ;
struct iavf_adapter {int crit_section; int cloud_filter_list_lock; int aq_required; int num_cloud_filters; int cloud_filter_list; TYPE_1__* pdev; int netdev; } ;
struct flow_cls_offload {int cookie; int classid; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct iavf_adapter*,int,struct iavf_cloud_filter*) ;
 int FUNC_3 (struct iavf_adapter*,struct flow_cls_offload*,struct iavf_cloud_filter*) ;
 int FUNC_4 (struct iavf_cloud_filter*) ;
 struct iavf_cloud_filter* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int ,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int ) ;
 scalar_t__ FUNC_11 (int ,int *) ;
 int FUNC_12 (int) ;

__attribute__((used)) static int FUNC_13(struct iavf_adapter *VAR_6,
        struct flow_cls_offload *VAR_7)
{
 int VAR_8 = FUNC_10(VAR_6->netdev, VAR_7->classid);
 struct iavf_cloud_filter *VAR_9 = ((void*)0);
 int VAR_10 = -VAR_0, VAR_11 = 50;

 if (VAR_8 < 0) {
  FUNC_1(&VAR_6->pdev->dev, "Invalid traffic class\n");
  return -VAR_0;
 }

 VAR_9 = FUNC_5(sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 while (FUNC_11(VAR_5,
    &VAR_6->crit_section)) {
  if (--VAR_11 == 0)
   goto err;
  FUNC_12(1);
 }

 VAR_9->cookie = VAR_7->cookie;


 FUNC_7(&VAR_9->f.mask.tcp_spec, 0, sizeof(struct virtchnl_l4_spec));

 VAR_9->f.flow_type = VAR_4;
 VAR_10 = FUNC_3(VAR_6, VAR_7, VAR_9);
 if (VAR_10 < 0)
  goto err;

 VAR_10 = FUNC_2(VAR_6, VAR_8, VAR_9);
 if (VAR_10 < 0)
  goto err;


 FUNC_8(&VAR_6->cloud_filter_list_lock);
 FUNC_6(&VAR_9->list, &VAR_6->cloud_filter_list);
 VAR_6->num_cloud_filters++;
 VAR_9->add = 1;
 VAR_6->aq_required |= VAR_3;
 FUNC_9(&VAR_6->cloud_filter_list_lock);
err:
 if (VAR_10)
  FUNC_4(VAR_9);

 FUNC_0(VAR_5, &VAR_6->crit_section);
 return VAR_10;
}
