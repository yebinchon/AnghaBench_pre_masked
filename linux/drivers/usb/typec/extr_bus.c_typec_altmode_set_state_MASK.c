
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct typec_altmode {TYPE_1__ dev; } ;
struct altmode {int nh; struct altmode* partner; } ;


 int FUNC_0 (int *,int,int *) ;
 int FUNC_1 (int ) ;
 struct altmode* FUNC_2 (struct typec_altmode*) ;
 int FUNC_3 (struct altmode*,int) ;

__attribute__((used)) static int FUNC_4(struct typec_altmode *VAR_0, int VAR_1)
{
 bool VAR_2 = FUNC_1(VAR_0->dev.parent);
 struct altmode *VAR_3;
 int VAR_4;

 VAR_3 = VAR_2 ? FUNC_2(VAR_0) : FUNC_2(VAR_0)->partner;

 VAR_4 = FUNC_3(VAR_3, VAR_1);
 if (VAR_4)
  return VAR_4;

 FUNC_0(&VAR_3->nh, VAR_1, ((void*)0));

 return 0;
}
