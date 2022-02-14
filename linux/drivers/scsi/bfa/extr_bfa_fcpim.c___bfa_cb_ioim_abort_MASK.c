
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfa_ioim_s {int dio; TYPE_1__* bfa; } ;
typedef int bfa_boolean_t ;
struct TYPE_2__ {int bfad; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct bfa_ioim_s*,int ) ;

__attribute__((used)) static void
FUNC_2(void *VAR_1, bfa_boolean_t VAR_2)
{
 struct bfa_ioim_s *VAR_3 = VAR_1;

 if (!VAR_2) {
  FUNC_1(VAR_3, VAR_0);
  return;
 }

 FUNC_0(VAR_3->bfa->bfad, VAR_3->dio);
}
