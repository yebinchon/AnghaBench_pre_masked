
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlm_file {scalar_t__ f_count; } ;


 int FUNC_0 (char*,struct nlm_file*,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct nlm_file*) ;
 int FUNC_4 (struct nlm_file*) ;
 int VAR_0 ;

void
FUNC_5(struct nlm_file *VAR_1)
{
 FUNC_0("lockd: nlm_release_file(%p, ct = %d)\n",
    VAR_1, VAR_1->f_count);


 FUNC_1(&VAR_0);


 if (--VAR_1->f_count == 0 && !FUNC_4(VAR_1))
  FUNC_3(VAR_1);

 FUNC_2(&VAR_0);
}
