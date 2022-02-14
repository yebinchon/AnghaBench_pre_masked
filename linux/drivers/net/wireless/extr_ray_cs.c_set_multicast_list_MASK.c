
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct net_device {int flags; } ;
struct TYPE_5__ {int a_promiscuous_mode; } ;
struct TYPE_6__ {TYPE_1__ b5; } ;
struct TYPE_7__ {scalar_t__ num_multi; TYPE_2__ sparm; } ;
typedef TYPE_3__ ray_dev_t ;
typedef int promisc ;
typedef int UCHAR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct net_device*) ;
 TYPE_3__* FUNC_1 (struct net_device*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct net_device*,int) ;
 int FUNC_4 (struct net_device*,int ,int*,int) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_3)
{
 ray_dev_t *VAR_4 = FUNC_1(VAR_3);
 UCHAR VAR_5;

 FUNC_2("ray_cs set_multicast_list(%p)\n", VAR_3);

 if (VAR_3->flags & VAR_1) {
  if (VAR_4->sparm.b5.a_promiscuous_mode == 0) {
   FUNC_2("ray_cs set_multicast_list promisc on\n");
   VAR_4->sparm.b5.a_promiscuous_mode = 1;
   VAR_5 = 1;
   FUNC_4(VAR_3, VAR_2,
     &VAR_5, sizeof(VAR_5));
  }
 } else {
  if (VAR_4->sparm.b5.a_promiscuous_mode == 1) {
   FUNC_2("ray_cs set_multicast_list promisc off\n");
   VAR_4->sparm.b5.a_promiscuous_mode = 0;
   VAR_5 = 0;
   FUNC_4(VAR_3, VAR_2,
     &VAR_5, sizeof(VAR_5));
  }
 }

 if (VAR_3->flags & VAR_0)
  FUNC_3(VAR_3, 1);
 else {
  if (VAR_4->num_multi != FUNC_0(VAR_3))
   FUNC_3(VAR_3, 0);
 }
}
