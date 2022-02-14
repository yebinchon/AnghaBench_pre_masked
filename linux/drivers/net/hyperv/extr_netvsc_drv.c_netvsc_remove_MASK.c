
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netvsc_device {int subchan_work; } ;
struct net_device_context {int vf_stats; int list; int vf_netdev; int nvdev; int dwork; } ;
struct net_device {int dummy; } ;
struct hv_device {int device; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ) ;
 struct net_device* FUNC_5 (struct hv_device*) ;
 int FUNC_6 (struct hv_device*,int *) ;
 int FUNC_7 (int *) ;
 struct net_device_context* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct hv_device*,struct netvsc_device*) ;
 void* FUNC_11 (int ) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (struct net_device*) ;

__attribute__((used)) static int FUNC_15(struct hv_device *VAR_0)
{
 struct net_device_context *VAR_1;
 struct net_device *VAR_2, *VAR_3;
 struct netvsc_device *VAR_4;

 VAR_3 = FUNC_5(VAR_0);
 if (VAR_3 == ((void*)0)) {
  FUNC_2(&VAR_0->device, "No net device to remove\n");
  return 0;
 }

 VAR_1 = FUNC_8(VAR_3);

 FUNC_0(&VAR_1->dwork);

 FUNC_12();
 VAR_4 = FUNC_11(VAR_1->nvdev);
 if (VAR_4)
  FUNC_1(&VAR_4->subchan_work);





 VAR_2 = FUNC_11(VAR_1->vf_netdev);
 if (VAR_2)
  FUNC_9(VAR_2);

 if (VAR_4)
  FUNC_10(VAR_0, VAR_4);

 FUNC_14(VAR_3);
 FUNC_7(&VAR_1->list);

 FUNC_13();

 FUNC_6(VAR_0, ((void*)0));

 FUNC_4(VAR_1->vf_stats);
 FUNC_3(VAR_3);
 return 0;
}
