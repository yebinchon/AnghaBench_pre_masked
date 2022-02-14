
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rndis_device {int dummy; } ;
struct netvsc_device {struct rndis_device* extension; } ;
struct hv_device {int dummy; } ;


 int FUNC_0 (struct hv_device*) ;
 int FUNC_1 (struct netvsc_device*,struct rndis_device*) ;

void FUNC_2(struct hv_device *VAR_0,
    struct netvsc_device *VAR_1)
{
 struct rndis_device *VAR_2 = VAR_1->extension;


 FUNC_1(VAR_1, VAR_2);

 VAR_1->extension = ((void*)0);

 FUNC_0(VAR_0);
}
