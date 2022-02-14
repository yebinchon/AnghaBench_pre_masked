
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct hns_ppe_cb {int dummy; } ;
struct hnae_vf_cb {int port_index; TYPE_3__* dsaf_dev; TYPE_1__* mac_cb; } ;
struct hnae_handle {int q_num; int * qs; } ;
struct TYPE_5__ {int * rcb_common; } ;
struct TYPE_4__ {scalar_t__ mac_type; } ;


 scalar_t__ VAR_0 ;
 struct hnae_vf_cb* FUNC_0 (struct hnae_handle*) ;
 int FUNC_1 (TYPE_3__*,int ,int *) ;
 struct hns_ppe_cb* FUNC_2 (struct hnae_handle*) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct hns_ppe_cb*,int *) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 () ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 () ;

__attribute__((used)) static void FUNC_11(struct hnae_handle *VAR_1, void *VAR_2)
{
 u32 *VAR_3 = VAR_2;
 int VAR_4;
 struct hnae_vf_cb *VAR_5 = FUNC_0(VAR_1);
 struct hns_ppe_cb *VAR_6 = FUNC_2(VAR_1);

 FUNC_5(VAR_6, VAR_3);
 VAR_3 += FUNC_6();

 FUNC_7(VAR_5->dsaf_dev->rcb_common[0], VAR_3);
 VAR_3 += FUNC_8();

 for (VAR_4 = 0; VAR_4 < VAR_1->q_num; VAR_4++) {
  FUNC_9(VAR_1->qs[VAR_4], VAR_3);
  VAR_3 += FUNC_10();
 }

 FUNC_3(VAR_5->mac_cb, VAR_3);
 VAR_3 += FUNC_4(VAR_5->mac_cb);

 if (VAR_5->mac_cb->mac_type == VAR_0)
  FUNC_1(VAR_5->dsaf_dev, VAR_5->port_index, VAR_3);
}
