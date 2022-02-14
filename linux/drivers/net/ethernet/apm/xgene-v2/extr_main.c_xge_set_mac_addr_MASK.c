
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xge_pdata {int dummy; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*,void*) ;
 struct xge_pdata* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct xge_pdata*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_0, void *VAR_1)
{
 struct xge_pdata *VAR_2 = FUNC_1(VAR_0);
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1);
 if (VAR_3)
  return VAR_3;

 FUNC_2(VAR_2);

 return 0;
}
