
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nfp_app {TYPE_1__* type; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {struct net_device* (* dev_get ) (struct nfp_app*,int ,int*) ;} ;


 struct net_device* FUNC_0 (struct nfp_app*,int ,int*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static inline
struct net_device *FUNC_2(struct nfp_app *VAR_0, u32 VAR_1,
       bool *VAR_2)
{
 if (FUNC_1(!VAR_0 || !VAR_0->type->dev_get))
  return ((void*)0);

 return VAR_0->type->dev_get(VAR_0, VAR_1, VAR_2);
}
