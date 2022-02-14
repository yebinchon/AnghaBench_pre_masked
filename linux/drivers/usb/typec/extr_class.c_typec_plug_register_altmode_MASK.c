
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct typec_plug {int dev; } ;
struct typec_altmode_desc {int dummy; } ;
struct typec_altmode {int dummy; } ;


 struct typec_altmode* FUNC_0 (int *,struct typec_altmode_desc const*) ;

struct typec_altmode *
FUNC_1(struct typec_plug *VAR_0,
       const struct typec_altmode_desc *VAR_1)
{
 return FUNC_0(&VAR_0->dev, VAR_1);
}
