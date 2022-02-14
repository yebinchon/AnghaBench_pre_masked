
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct sk_buff {int data; } ;
struct qlcnic_recv_context {struct qlcnic_host_rds_ring* rds_rings; } ;
struct qlcnic_host_rds_ring {int num_desc; int skb_size; } ;
struct qlcnic_adapter {int max_rds_rings; TYPE_1__* ahw; int mac_addr; struct qlcnic_recv_context* recv_ctx; } ;
struct TYPE_2__ {int diag_cnt; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,struct qlcnic_adapter*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 struct sk_buff* FUNC_5 (struct qlcnic_adapter*,struct qlcnic_host_rds_ring*,int,int ) ;
 int FUNC_6 (struct sk_buff*,int) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct qlcnic_adapter *VAR_1,
      int VAR_2, u64 VAR_3[])
{
 struct qlcnic_recv_context *VAR_4 = VAR_1->recv_ctx;
 struct sk_buff *VAR_5;
 struct qlcnic_host_rds_ring *VAR_6;
 int VAR_7, VAR_8;

 if (FUNC_7(VAR_2 >= VAR_1->max_rds_rings))
  return;

 VAR_6 = &VAR_4->rds_rings[VAR_2];
 VAR_7 = FUNC_2(VAR_3[0]);
 if (FUNC_7(VAR_7 >= VAR_6->num_desc))
  return;

 VAR_8 = FUNC_3(VAR_3[0]);

 VAR_5 = FUNC_5(VAR_1, VAR_6, VAR_7, VAR_0);
 if (!VAR_5)
  return;

 if (VAR_8 > VAR_6->skb_size)
  FUNC_6(VAR_5, VAR_6->skb_size);
 else
  FUNC_6(VAR_5, VAR_8);

 if (!FUNC_4(VAR_5->data, VAR_1->mac_addr))
  VAR_1->ahw->diag_cnt++;
 else
  FUNC_1(VAR_5, VAR_1);

 FUNC_0(VAR_5);
 return;
}
