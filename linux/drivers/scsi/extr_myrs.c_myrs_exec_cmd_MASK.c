
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct myrs_hba {int queue_lock; } ;
struct myrs_cmdblk {int * complete; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 (struct myrs_hba*,struct myrs_cmdblk*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct myrs_hba *VAR_1,
  struct myrs_cmdblk *VAR_2)
{
 FUNC_0(VAR_0);
 unsigned long VAR_3;

 VAR_2->complete = &VAR_0;
 FUNC_4(&VAR_1->queue_lock, VAR_3);
 FUNC_3(VAR_1, VAR_2);
 FUNC_5(&VAR_1->queue_lock, VAR_3);

 FUNC_1(FUNC_2());
 FUNC_6(&VAR_0);
}
