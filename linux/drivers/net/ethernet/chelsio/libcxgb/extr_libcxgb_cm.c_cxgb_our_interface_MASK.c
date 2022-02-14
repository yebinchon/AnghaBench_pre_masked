
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct cxgb4_lld_info {int nports; struct net_device** ports; } ;



__attribute__((used)) static bool
FUNC_0(struct cxgb4_lld_info *VAR_0,
     struct net_device *(*VAR_1)(struct net_device *),
     struct net_device *VAR_2)
{
 int VAR_3;

 VAR_2 = VAR_1(VAR_2);
 for (VAR_3 = 0; VAR_3 < VAR_0->nports; VAR_3++)
  if (VAR_0->ports[VAR_3] == VAR_2)
   return 1;
 return 0;
}
