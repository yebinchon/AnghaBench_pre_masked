
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;


 int VAR_0 ;
 struct net_device* FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (struct net_device*) ;
 int VAR_1 ;
 int FUNC_2 (struct net_device*) ;

struct net_device *FUNC_3(void)
{
 struct net_device *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_0(0, "mon%d", VAR_0, VAR_1);
 if (!VAR_2)
  goto fail;

 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3 < 0)
  goto fail_free_dev;

 return VAR_2;

fail_free_dev:
 FUNC_1(VAR_2);
fail:
 return ((void*)0);
}
