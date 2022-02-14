
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfad_s {int bfad_flags; int bfa; int hal_tmo; int comp; int bfad_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct bfad_s*) ;
 int FUNC_4 (struct bfad_s*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *) ;

void
FUNC_10(struct bfad_s *VAR_1)
{
 unsigned long VAR_2;

 FUNC_7(&VAR_1->bfad_lock, VAR_2);
 FUNC_6(&VAR_1->comp);
 FUNC_1(&VAR_1->bfa);
 FUNC_8(&VAR_1->bfad_lock, VAR_2);
 FUNC_9(&VAR_1->comp);

 FUNC_5(&VAR_1->hal_tmo);
 FUNC_2(&VAR_1->bfa);
 FUNC_0(&VAR_1->bfa);
 FUNC_4(VAR_1);
 FUNC_3(VAR_1);

 VAR_1->bfad_flags &= ~VAR_0;
}
