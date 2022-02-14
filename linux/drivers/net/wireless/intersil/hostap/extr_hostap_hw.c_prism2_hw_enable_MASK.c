
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int name; } ;
struct hostap_interface {TYPE_1__* local; } ;
struct TYPE_2__ {int hw_resetting; int hw_ready; scalar_t__ hw_reset_tries; } ;
typedef TYPE_1__ local_info_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct net_device*,int ,int ,int *,int *) ;
 int FUNC_1 (struct net_device*) ;
 struct hostap_interface* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (char*,int ) ;
 scalar_t__ FUNC_6 (struct net_device*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_1, int VAR_2)
{
 struct hostap_interface *VAR_3;
 local_info_t *VAR_4;
 int VAR_5;

 VAR_3 = FUNC_2(VAR_1);
 VAR_4 = VAR_3->local;
 VAR_5 = VAR_4->hw_resetting;

 if (FUNC_0(VAR_1, VAR_0, 0, ((void*)0), ((void*)0))) {
  FUNC_5("%s: MAC port 0 enabling failed\n", VAR_1->name);
  return 1;
 }

 VAR_4->hw_ready = 1;
 VAR_4->hw_reset_tries = 0;
 VAR_4->hw_resetting = 0;
 FUNC_1(VAR_1);




 if (VAR_2 && FUNC_6(VAR_1)) {
  FUNC_5("%s: MAC port 0 resetting failed\n", VAR_1->name);
  return 1;
 }

 if (VAR_5 && FUNC_3(VAR_1)) {



  FUNC_4(VAR_1);
 }

 return 0;
}
