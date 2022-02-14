
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfad_s {int comp; int bfad_lock; int bfad_flags; int bfa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct bfad_s*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *) ;

void
FUNC_6(struct bfad_s *VAR_2)
{
 unsigned long VAR_3;

 FUNC_3(&VAR_2->bfad_lock, VAR_3);
 FUNC_2(&VAR_2->comp);
 FUNC_0(&VAR_2->bfa);
 VAR_2->bfad_flags &= ~VAR_1;
 FUNC_4(&VAR_2->bfad_lock, VAR_3);
 FUNC_5(&VAR_2->comp);

 FUNC_1(VAR_2, VAR_0);
}
