
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ioc; } ;
struct bfad_s {int enable_comp; int bfad_lock; TYPE_1__ bfa; } ;
struct bfa_bsg_gen_s {void* status; } ;


 void* VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *) ;

int
FUNC_6(struct bfad_s *VAR_1, void *VAR_2)
{
 struct bfa_bsg_gen_s *VAR_3 = (struct bfa_bsg_gen_s *)VAR_2;
 unsigned long VAR_4;

 FUNC_3(&VAR_1->bfad_lock, VAR_4);

 if (!FUNC_0(&VAR_1->bfa.ioc)) {
  FUNC_4(&VAR_1->bfad_lock, VAR_4);
  VAR_3->status = VAR_0;
  return 0;
 }

 FUNC_2(&VAR_1->enable_comp);
 FUNC_1(&VAR_1->bfa);
 VAR_3->status = VAR_0;
 FUNC_4(&VAR_1->bfad_lock, VAR_4);
 FUNC_5(&VAR_1->enable_comp);

 return 0;
}
