
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfad_s {int bfad_lock; int * bfad_tsk; } ;


 int VAR_0 ;
 int FUNC_0 (struct bfad_s*,int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

int
FUNC_4(void *VAR_1)
{
 struct bfad_s *VAR_2 = VAR_1;
 unsigned long VAR_3;

 if (FUNC_1())
  return 0;


 FUNC_0(VAR_2, VAR_0);

 FUNC_2(&VAR_2->bfad_lock, VAR_3);
 VAR_2->bfad_tsk = ((void*)0);
 FUNC_3(&VAR_2->bfad_lock, VAR_3);

 return 0;
}
