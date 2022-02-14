
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* submod_enabled; } ;
struct bfa_s {TYPE_1__ iocfc; void* queue_process; } ;
struct TYPE_4__ {int bfa; } ;


 TYPE_2__* FUNC_0 (struct bfa_s*) ;
 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct bfa_s*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct bfa_s*,int,int ) ;
 int FUNC_4 (struct bfa_s*,int) ;
 int FUNC_5 (struct bfa_s*) ;

__attribute__((used)) static void
FUNC_6(struct bfa_s *VAR_2)
{
 int VAR_3;

 VAR_2->queue_process = VAR_0;
 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  FUNC_3(VAR_2, VAR_3, FUNC_4(VAR_2, VAR_3));

 FUNC_1(VAR_2);
 FUNC_5(VAR_2);




 FUNC_2(FUNC_0(VAR_2)->bfa);

 VAR_2->iocfc.submod_enabled = VAR_0;
}
