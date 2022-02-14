
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sched_class {int dummy; } ;
struct port_info {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int class; } ;
struct TYPE_4__ {TYPE_1__ params; } ;
struct ch_sched_params {TYPE_2__ u; } ;


 int FUNC_0 (struct net_device*) ;
 struct port_info* FUNC_1 (struct net_device*) ;
 struct sched_class* FUNC_2 (struct port_info*,struct ch_sched_params*) ;
 int FUNC_3 (struct net_device*,int ) ;

struct sched_class *FUNC_4(struct net_device *VAR_0,
         struct ch_sched_params *VAR_1)
{
 struct port_info *VAR_2 = FUNC_1(VAR_0);
 u8 VAR_3;

 if (!FUNC_0(VAR_0))
  return ((void*)0);

 VAR_3 = VAR_1->u.params.class;
 if (!FUNC_3(VAR_0, VAR_3))
  return ((void*)0);

 return FUNC_2(VAR_2, VAR_1);
}
