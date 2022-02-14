
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hns_mac_cb {TYPE_1__* dsaf_dev; } ;
struct hnae_handle {int dummy; } ;
struct TYPE_2__ {int dsaf_ver; } ;




 int VAR_0 ;
 int FUNC_0 (struct hnae_handle*) ;
 struct hns_mac_cb* FUNC_1 (struct hnae_handle*) ;
 int FUNC_2 (struct hns_mac_cb*,int,int) ;
 int FUNC_3 (struct hns_mac_cb*,int ) ;
 int FUNC_4 (struct hns_mac_cb*,int ) ;

__attribute__((used)) static void FUNC_5(struct hnae_handle *VAR_1, int VAR_2,
          int VAR_3)
{
 struct hns_mac_cb *VAR_4 = FUNC_1(VAR_1);

 switch (VAR_4->dsaf_dev->dsaf_ver) {
 case 129:
  FUNC_2(VAR_4, VAR_2, VAR_3);
  break;

 case 128:

  FUNC_3(VAR_4, VAR_0);
  if (FUNC_0(VAR_1)) {
   FUNC_4(VAR_4, VAR_0);
   break;
  }

  FUNC_2(VAR_4, VAR_2, VAR_3);
  FUNC_4(VAR_4, VAR_0);
  break;

 default:
  break;
 }

 return;
}
