
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfa_ioim_s {int dio; TYPE_1__* bfa; int itnim; } ;
typedef int bfa_boolean_t ;
struct TYPE_2__ {int bfad; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int *,int ) ;
 int FUNC_1 (struct bfa_ioim_s*,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_3(void *VAR_3, bfa_boolean_t VAR_4)
{
 struct bfa_ioim_s *VAR_5 = VAR_3;

 FUNC_2(VAR_5->itnim, VAR_2);
 if (!VAR_4) {
  FUNC_1(VAR_5, VAR_0);
  return;
 }

 FUNC_0(VAR_5->bfa->bfad, VAR_5->dio, VAR_1,
     0, 0, ((void*)0), 0);
}
