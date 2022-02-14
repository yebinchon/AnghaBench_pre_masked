
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hns_mac_cb {struct dsaf_device* dsaf_dev; } ;
struct hnae_vf_cb {int mac_cb; } ;
struct hnae_handle {int dummy; } ;
struct dsaf_device {TYPE_1__* misc_op; } ;
typedef enum hnae_loop { ____Placeholder_hnae_loop } hnae_loop ;
struct TYPE_2__ {int (* cfg_serdes_loopback ) (int ,int) ;} ;


 int VAR_0 ;



 struct hnae_vf_cb* FUNC_0 (struct hnae_handle*) ;
 struct hns_mac_cb* FUNC_1 (struct hnae_handle*) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(struct hnae_handle *VAR_1,
      enum hnae_loop VAR_2, int VAR_3)
{
 int VAR_4;
 struct hnae_vf_cb *VAR_5 = FUNC_0(VAR_1);
 struct hns_mac_cb *VAR_6 = FUNC_1(VAR_1);
 struct dsaf_device *VAR_7 = VAR_6->dsaf_dev;

 switch (VAR_2) {
 case 129:
  VAR_4 = 0;
  break;
 case 128:
  VAR_4 = VAR_7->misc_op->cfg_serdes_loopback(VAR_5->mac_cb,
            !!VAR_3);
  break;
 case 130:
  VAR_4 = FUNC_2(VAR_5->mac_cb, VAR_2, VAR_3);
  break;
 default:
  VAR_4 = -VAR_0;
 }

 return VAR_4;
}
