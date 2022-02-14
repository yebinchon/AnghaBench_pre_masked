
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnad {int bna_lock; } ;


 int FUNC_0 (struct bnad*) ;
 int FUNC_1 (struct bnad*) ;
 int FUNC_2 (int,struct bnad*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_5(struct bnad *VAR_0)
{
 int VAR_1;
 unsigned long VAR_2;

 FUNC_3(&VAR_0->bna_lock, VAR_2);
 FUNC_1(VAR_0);
 FUNC_4(&VAR_0->bna_lock, VAR_2);

 VAR_1 = FUNC_0(VAR_0);
 FUNC_2(VAR_1, VAR_0);
}
