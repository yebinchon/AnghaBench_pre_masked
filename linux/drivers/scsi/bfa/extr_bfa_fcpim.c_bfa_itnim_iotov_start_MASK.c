
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfa_itnim_s {TYPE_1__* fcpim; int timer; int bfa; int iotov_active; } ;
struct TYPE_2__ {scalar_t__ path_tov; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct bfa_itnim_s*) ;
 int VAR_1 ;
 int FUNC_2 (int ,int *,int ,struct bfa_itnim_s*,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct bfa_itnim_s *VAR_2)
{
 if (VAR_2->fcpim->path_tov > 0) {

  VAR_2->iotov_active = VAR_0;
  FUNC_0(!FUNC_1(VAR_2));
  FUNC_2(VAR_2->bfa, &VAR_2->timer,
   VAR_1, VAR_2, VAR_2->fcpim->path_tov);
 }
}
