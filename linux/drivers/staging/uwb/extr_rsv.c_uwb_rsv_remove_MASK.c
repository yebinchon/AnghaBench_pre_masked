
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; int dev; } ;
struct TYPE_3__ {int companion_mas; } ;
struct uwb_rsv {scalar_t__ state; int rc_node; TYPE_2__ target; int owner; int mas; int rc; TYPE_1__ mv; scalar_t__ needs_release_companion_mas; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (char*,struct uwb_rsv*) ;
 scalar_t__ FUNC_4 (struct uwb_rsv*) ;
 int FUNC_5 (struct uwb_rsv*) ;
 int FUNC_6 (struct uwb_rsv*) ;
 int FUNC_7 (struct uwb_rsv*,scalar_t__) ;

void FUNC_8(struct uwb_rsv *VAR_2)
{
 FUNC_3("RM", VAR_2);

 if (VAR_2->state != VAR_0)
  FUNC_7(VAR_2, VAR_0);

 if (VAR_2->needs_release_companion_mas)
  FUNC_2(VAR_2->rc, &VAR_2->mv.companion_mas);
 FUNC_2(VAR_2->rc, &VAR_2->mas);

 if (FUNC_4(VAR_2))
  FUNC_6(VAR_2);

 FUNC_1(VAR_2->owner);
 if (VAR_2->target.type == VAR_1)
  FUNC_1(VAR_2->target.dev);

 FUNC_0(&VAR_2->rc_node);
 FUNC_5(VAR_2);
}
