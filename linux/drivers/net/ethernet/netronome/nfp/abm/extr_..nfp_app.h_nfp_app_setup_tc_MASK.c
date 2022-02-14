
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfp_app {TYPE_1__* type; } ;
struct net_device {int dummy; } ;
typedef enum tc_setup_type { ____Placeholder_tc_setup_type } tc_setup_type ;
struct TYPE_2__ {int (* setup_tc ) (struct nfp_app*,struct net_device*,int,void*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct nfp_app*,struct net_device*,int,void*) ;

__attribute__((used)) static inline int FUNC_1(struct nfp_app *VAR_1,
       struct net_device *VAR_2,
       enum tc_setup_type VAR_3, void *VAR_4)
{
 if (!VAR_1 || !VAR_1->type->setup_tc)
  return -VAR_0;
 return VAR_1->type->setup_tc(VAR_1, VAR_2, VAR_3, VAR_4);
}
