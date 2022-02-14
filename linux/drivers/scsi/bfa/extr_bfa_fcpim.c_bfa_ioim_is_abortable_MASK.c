
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfa_ioim_s {TYPE_1__* itnim; } ;
typedef int bfa_boolean_t ;
struct TYPE_2__ {int pending_q; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,struct bfa_ioim_s*) ;
 scalar_t__ FUNC_1 (struct bfa_ioim_s*,int ) ;

__attribute__((used)) static bfa_boolean_t
FUNC_2(struct bfa_ioim_s *VAR_8)
{
 if ((FUNC_1(VAR_8, VAR_7) &&
     (!FUNC_0(&VAR_8->itnim->pending_q, VAR_8))) ||
     (FUNC_1(VAR_8, VAR_2)) ||
     (FUNC_1(VAR_8, VAR_3)) ||
     (FUNC_1(VAR_8, VAR_4)) ||
     (FUNC_1(VAR_8, VAR_5)) ||
     (FUNC_1(VAR_8, VAR_6)))
  return VAR_0;

 return VAR_1;
}
