
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hns_mac_cb {int mac_id; struct dsaf_device* dsaf_dev; } ;
struct hnae_handle {scalar_t__ port_type; } ;
struct dsaf_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct dsaf_device*,int ,int *) ;
 struct hns_mac_cb* FUNC_1 (struct hnae_handle*) ;
 int FUNC_2 (struct hns_mac_cb*,int *) ;
 int FUNC_3 (struct hns_mac_cb*,int *,int *) ;

__attribute__((used)) static void FUNC_4(struct hnae_handle *VAR_1,
      u32 *VAR_2, u32 *VAR_3, u32 *VAR_4)
{
 struct hns_mac_cb *VAR_5 = FUNC_1(VAR_1);
 struct dsaf_device *VAR_6 = VAR_5->dsaf_dev;

 FUNC_2(VAR_5, VAR_2);

 FUNC_3(VAR_5, VAR_3, VAR_4);


 if (VAR_1->port_type == VAR_0)
  FUNC_0(VAR_6, VAR_5->mac_id, VAR_3);
}
