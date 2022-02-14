
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rndis_device {int link_state; } ;
struct netvsc_device_info {int dummy; } ;
struct netvsc_device {int num_chn; int max_chn; struct rndis_device* extension; } ;
struct net_device_context {struct hv_device* device_ctx; } ;
struct net_device {int dummy; } ;
struct hv_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct netvsc_device*) ;
 int FUNC_1 (struct netvsc_device*) ;
 struct net_device_context* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 scalar_t__ FUNC_7 (struct net_device*) ;
 struct netvsc_device* FUNC_8 (struct hv_device*,struct netvsc_device_info*) ;
 int FUNC_9 (struct hv_device*,struct netvsc_device*) ;
 int FUNC_10 (struct netvsc_device*) ;
 int FUNC_11 (struct net_device*,struct netvsc_device*,struct netvsc_device_info*) ;

__attribute__((used)) static int FUNC_12(struct net_device *VAR_0,
    struct netvsc_device_info *VAR_1)
{
 struct net_device_context *VAR_2 = FUNC_2(VAR_0);
 struct hv_device *VAR_3 = VAR_2->device_ctx;
 struct netvsc_device *VAR_4;
 struct rndis_device *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_8(VAR_3, VAR_1);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 if (VAR_4->num_chn > 1) {
  VAR_6 = FUNC_11(VAR_0, VAR_4, VAR_1);


  if (VAR_6) {
   VAR_4->max_chn = 1;
   VAR_4->num_chn = 1;
  }
 }


 FUNC_5(VAR_0);


 FUNC_3(VAR_0);

 if (FUNC_7(VAR_0)) {
  VAR_6 = FUNC_10(VAR_4);
  if (VAR_6)
   goto err;

  VAR_5 = VAR_4->extension;
  if (!VAR_5->link_state)
   FUNC_4(VAR_0);
 }

 return 0;

err:
 FUNC_6(VAR_0);

 FUNC_9(VAR_3, VAR_4);

 return VAR_6;
}
