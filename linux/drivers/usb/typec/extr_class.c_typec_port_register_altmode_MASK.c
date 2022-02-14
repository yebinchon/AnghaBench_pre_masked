
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct typec_port {int dev; } ;
struct typec_mux {int dummy; } ;
struct typec_altmode_desc {int dummy; } ;
typedef struct typec_mux typec_altmode ;
struct TYPE_2__ {struct typec_mux* mux; } ;


 struct typec_mux* FUNC_0 (struct typec_mux*) ;
 scalar_t__ FUNC_1 (struct typec_mux*) ;
 TYPE_1__* FUNC_2 (struct typec_mux*) ;
 struct typec_mux* FUNC_3 (int *,struct typec_altmode_desc const*) ;
 int FUNC_4 (struct typec_mux*) ;
 struct typec_mux* FUNC_5 (int *,struct typec_altmode_desc const*) ;

struct typec_altmode *
FUNC_6(struct typec_port *VAR_0,
       const struct typec_altmode_desc *VAR_1)
{
 struct typec_altmode *VAR_2;
 struct typec_mux *VAR_3;

 VAR_3 = FUNC_3(&VAR_0->dev, VAR_1);
 if (FUNC_1(VAR_3))
  return FUNC_0(VAR_3);

 VAR_2 = FUNC_5(&VAR_0->dev, VAR_1);
 if (FUNC_1(VAR_2))
  FUNC_4(VAR_3);
 else
  FUNC_2(VAR_2)->mux = VAR_3;

 return VAR_2;
}
