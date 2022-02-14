
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct fs_platform_info {int dummy; } ;
struct fs_enet_private {int ev_napi; int ev_err; int ev; int napi; TYPE_1__* ops; struct fs_platform_info* fpi; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int (* get_int_events ) (struct net_device*) ;int (* clear_int_events ) (struct net_device*,int) ;int (* napi_disable ) (struct net_device*) ;int (* ev_error ) (struct net_device*,int) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct fs_enet_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*,int) ;
 int FUNC_6 (struct net_device*,int) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*,int) ;

__attribute__((used)) static irqreturn_t
FUNC_9(int VAR_0, void *VAR_1)
{
 struct net_device *VAR_2 = VAR_1;
 struct fs_enet_private *VAR_3;
 const struct fs_platform_info *VAR_4;
 u32 VAR_5;
 u32 VAR_6;
 int VAR_7, VAR_8;
 int VAR_9;

 VAR_3 = FUNC_3(VAR_2);
 VAR_4 = VAR_3->fpi;

 VAR_7 = 0;
 while ((VAR_5 = (*VAR_3->ops->get_int_events)(VAR_2)) != 0) {
  VAR_7++;

  VAR_6 = VAR_5;
  VAR_6 &= ~VAR_3->ev_napi;

  (*VAR_3->ops->clear_int_events)(VAR_2, VAR_6);

  if (VAR_5 & VAR_3->ev_err)
   (*VAR_3->ops->ev_error)(VAR_2, VAR_5);

  if (VAR_5 & VAR_3->ev) {
   VAR_8 = FUNC_2(&VAR_3->napi);

   (*VAR_3->ops->napi_disable)(VAR_2);
   (*VAR_3->ops->clear_int_events)(VAR_2, VAR_3->ev_napi);



   if (VAR_8)
    FUNC_1(&VAR_3->napi);
  }

 }

 VAR_9 = VAR_7 > 0;
 return FUNC_0(VAR_9);
}
