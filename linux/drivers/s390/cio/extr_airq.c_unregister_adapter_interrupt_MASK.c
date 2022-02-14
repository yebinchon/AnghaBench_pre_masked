
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct airq_struct {int flags; int * lsi_ptr; int isc; int list; } ;
typedef int dbf_txt ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int,char*,struct airq_struct*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 () ;

void FUNC_9(struct airq_struct *VAR_2)
{
 char VAR_3[32];

 if (FUNC_2(&VAR_2->list))
  return;
 FUNC_5(VAR_3, sizeof(VAR_3), "urairq:%p", VAR_2);
 FUNC_0(4, VAR_3);
 FUNC_6(&VAR_1);
 FUNC_1(&VAR_2->list);
 FUNC_7(&VAR_1);
 FUNC_8();
 FUNC_3(VAR_2->isc);
 if (VAR_2->flags & VAR_0) {
  FUNC_4(VAR_2->lsi_ptr);
  VAR_2->lsi_ptr = ((void*)0);
  VAR_2->flags &= ~VAR_0;
 }
}
