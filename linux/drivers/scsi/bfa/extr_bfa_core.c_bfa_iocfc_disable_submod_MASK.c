
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ submod_enabled; } ;
struct bfa_s {TYPE_1__ iocfc; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct bfa_s*) ;
 int FUNC_1 (struct bfa_s*) ;
 int FUNC_2 (struct bfa_s*) ;
 int FUNC_3 (struct bfa_s*) ;
 int FUNC_4 (struct bfa_s*) ;
 int FUNC_5 (struct bfa_s*) ;
 int FUNC_6 (struct bfa_s*) ;

__attribute__((used)) static void
FUNC_7(struct bfa_s *VAR_1)
{
 if (VAR_1->iocfc.submod_enabled == VAR_0)
  return;

 FUNC_1(VAR_1);
 FUNC_3(VAR_1);
 FUNC_4(VAR_1);
 FUNC_5(VAR_1);
 FUNC_6(VAR_1);
 FUNC_2(VAR_1);
 FUNC_0(VAR_1);

 VAR_1->iocfc.submod_enabled = VAR_0;
}
