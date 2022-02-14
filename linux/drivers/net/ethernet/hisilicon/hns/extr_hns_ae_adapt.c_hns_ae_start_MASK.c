
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hns_mac_cb {TYPE_1__* dsaf_dev; } ;
struct hnae_handle {int q_num; int * qs; } ;
struct TYPE_2__ {int dsaf_ver; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct hnae_handle*,int) ;
 struct hns_mac_cb* FUNC_2 (struct hnae_handle*) ;
 int FUNC_3 (struct hns_mac_cb*) ;
 int FUNC_4 (struct hns_mac_cb*,int ,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct hnae_handle *VAR_2)
{
 int VAR_3;
 int VAR_4;
 struct hns_mac_cb *VAR_5 = FUNC_2(VAR_2);

 VAR_3 = FUNC_4(VAR_5, 0, 1);
 if (VAR_3)
  return VAR_3;

 for (VAR_4 = 0; VAR_4 < VAR_2->q_num; VAR_4++) {
  if (FUNC_0(VAR_5->dsaf_dev->dsaf_ver))
   FUNC_5(VAR_2->qs[VAR_4],
        VAR_1 | VAR_0);
  else
   FUNC_6(VAR_2->qs[VAR_4],
          VAR_1 | VAR_0);
 }
 FUNC_1(VAR_2, 1);
 FUNC_7(100);

 FUNC_3(VAR_5);

 return 0;
}
