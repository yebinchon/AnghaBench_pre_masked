
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hns_mac_cb {int mac_id; struct dsaf_device* dsaf_dev; } ;
struct dsaf_device {int dummy; } ;


 int FUNC_0 (struct dsaf_device*,int ,int ) ;
 int FUNC_1 (struct hns_mac_cb*,int,int *) ;

int FUNC_2(struct hns_mac_cb *VAR_0, int VAR_1)
{
 struct dsaf_device *VAR_2 = VAR_0->dsaf_dev;
 u8 VAR_3;
 int VAR_4 = FUNC_1(VAR_0, VAR_1, &VAR_3);

 if (VAR_4)
  return VAR_4;

 return FUNC_0(VAR_2, VAR_0->mac_id, VAR_3);
}
