
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ef4_nic {TYPE_1__* type; } ;
struct TYPE_2__ {int (* describe_stats ) (struct ef4_nic*,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct ef4_nic*,int *) ;
 int FUNC_1 (struct ef4_nic*,int *,int *,int *) ;
 struct ef4_nic* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct ef4_nic*,int *) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2,
          int VAR_3)
{
 struct ef4_nic *VAR_4 = FUNC_2(VAR_2);

 switch (VAR_3) {
 case 129:
  return VAR_4->type->describe_stats(VAR_4, ((void*)0)) +
         VAR_0 +
         FUNC_0(VAR_4, ((void*)0));
 case 128:
  return FUNC_1(VAR_4, ((void*)0), ((void*)0), ((void*)0));
 default:
  return -VAR_1;
 }
}
