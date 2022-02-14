
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netvsc_device {int num_chn; int subchan_work; } ;
struct net_device_context {struct hv_device* device_ctx; } ;
struct net_device {int dummy; } ;
struct hv_device {int dummy; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct net_device*,char*,...) ;
 struct net_device_context* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct netvsc_device*,struct net_device*) ;
 int FUNC_6 (struct netvsc_device*) ;
 int FUNC_7 (struct netvsc_device*) ;
 int FUNC_8 (struct hv_device*,struct netvsc_device*) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_0,
    struct netvsc_device *VAR_1)
{
 struct net_device_context *VAR_2 = FUNC_2(VAR_0);
 struct hv_device *VAR_3 = VAR_2->device_ctx;
 int VAR_4;


 if (FUNC_0(&VAR_1->subchan_work))
  VAR_1->num_chn = 1;


 if (FUNC_4(VAR_0)) {
  FUNC_5(VAR_1, VAR_0);

  VAR_4 = FUNC_7(VAR_1);
  if (VAR_4) {
   FUNC_1(VAR_0,
       "unable to close device (ret %d).\n", VAR_4);
   return VAR_4;
  }

  VAR_4 = FUNC_6(VAR_1);
  if (VAR_4) {
   FUNC_1(VAR_0,
       "Ring buffer not empty after closing rndis\n");
   return VAR_4;
  }
 }

 FUNC_3(VAR_0);

 FUNC_8(VAR_3, VAR_1);

 return 0;
}
