
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ioc; } ;
struct bfad_s {int bfad_lock; TYPE_1__ bfa; } ;
struct bfa_bsg_gen_s {int status; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

int
FUNC_3(struct bfad_s *VAR_0, void *VAR_1)
{
 struct bfa_bsg_gen_s *VAR_2 = (struct bfa_bsg_gen_s *)VAR_1;
 unsigned long VAR_3;

 FUNC_1(&VAR_0->bfad_lock, VAR_3);
 VAR_2->status = FUNC_0(&VAR_0->bfa.ioc);
 FUNC_2(&VAR_0->bfad_lock, VAR_3);
 return 0;
}
