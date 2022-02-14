
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef size_t u32 ;
struct status_desc {int * status_desc_data; } ;
struct qlcnic_host_sds_ring {size_t consumer; int crb_sts_consumer; int num_desc; struct status_desc* desc_head; struct qlcnic_adapter* adapter; } ;
struct qlcnic_adapter {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 size_t FUNC_2 (size_t,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct qlcnic_adapter*,int,int *) ;
 int FUNC_6 (size_t,int ) ;

void FUNC_7(struct qlcnic_host_sds_ring *VAR_1)
{
 struct qlcnic_adapter *VAR_2 = VAR_1->adapter;
 struct status_desc *VAR_3;
 u64 VAR_4[2];
 int VAR_5, VAR_6;
 u32 VAR_7 = VAR_1->consumer;

 VAR_3 = &VAR_1->desc_head[VAR_7];
 VAR_4[0] = FUNC_3(VAR_3->status_desc_data[0]);
 VAR_4[1] = FUNC_3(VAR_3->status_desc_data[1]);
 VAR_6 = FUNC_4(VAR_4[1]);
 if (!VAR_6)
  return;

 VAR_5 = FUNC_0(VAR_4[0]);
 FUNC_5(VAR_2, VAR_5, VAR_4);
 VAR_3 = &VAR_1->desc_head[VAR_7];
 VAR_3->status_desc_data[0] = FUNC_1(VAR_0);
 VAR_7 = FUNC_2(VAR_7, VAR_1->num_desc);
 VAR_1->consumer = VAR_7;
 FUNC_6(VAR_7, VAR_1->crb_sts_consumer);
}
