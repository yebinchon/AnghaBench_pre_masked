
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iavf_cloud_filter {int del; } ;
struct iavf_adapter {int cloud_filter_list_lock; int aq_required; } ;
struct flow_cls_offload {int cookie; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct iavf_cloud_filter* FUNC_0 (struct iavf_adapter*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct iavf_adapter *VAR_2,
     struct flow_cls_offload *VAR_3)
{
 struct iavf_cloud_filter *VAR_4 = ((void*)0);
 int VAR_5 = 0;

 FUNC_1(&VAR_2->cloud_filter_list_lock);
 VAR_4 = FUNC_0(VAR_2, &VAR_3->cookie);
 if (VAR_4) {
  VAR_4->del = 1;
  VAR_2->aq_required |= VAR_1;
 } else {
  VAR_5 = -VAR_0;
 }
 FUNC_2(&VAR_2->cloud_filter_list_lock);

 return VAR_5;
}
