
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hns_mac_cb {scalar_t__ mac_type; } ;
struct hnae_handle {int q_num; int dev; } ;
struct dsaf_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct hnae_handle*) ;
 struct dsaf_device* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct dsaf_device*,int) ;
 struct hns_mac_cb* FUNC_3 (struct hnae_handle*) ;
 scalar_t__ FUNC_4 (struct hns_mac_cb*,int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct hnae_handle *VAR_1, int VAR_2)
{
 u32 VAR_3 = 0;
 struct hns_mac_cb *VAR_4;
 struct dsaf_device *VAR_5 = FUNC_1(VAR_1->dev);

 FUNC_0(VAR_1);

 VAR_4 = FUNC_3(VAR_1);

 VAR_3 += FUNC_6(VAR_2) * VAR_1->q_num;
 VAR_3 += FUNC_5(VAR_2);
 VAR_3 += FUNC_4(VAR_4, VAR_2);

 if (VAR_4->mac_type == VAR_0)
  VAR_3 += FUNC_2(VAR_5, VAR_2);

 return VAR_3;
}
