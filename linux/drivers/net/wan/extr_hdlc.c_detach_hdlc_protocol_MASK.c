
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_5__ {int * state; TYPE_1__* proto; } ;
typedef TYPE_2__ hdlc_device ;
struct TYPE_4__ {int module; int (* detach ) (struct net_device*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,struct net_device*) ;
 TYPE_2__* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct net_device*,char*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct net_device*) ;

int FUNC_8(struct net_device *VAR_1)
{
 hdlc_device *VAR_2 = FUNC_1(VAR_1);
 int VAR_3;

 if (VAR_2->proto) {
  VAR_3 = FUNC_0(VAR_0, VAR_1);
  VAR_3 = FUNC_6(VAR_3);
  if (VAR_3) {
   FUNC_5(VAR_1, "Refused to change device type\n");
   return VAR_3;
  }

  if (VAR_2->proto->detach)
   VAR_2->proto->detach(VAR_1);
  FUNC_4(VAR_2->proto->module);
  VAR_2->proto = ((void*)0);
 }
 FUNC_3(VAR_2->state);
 VAR_2->state = ((void*)0);
 FUNC_2(VAR_1);

 return 0;
}
