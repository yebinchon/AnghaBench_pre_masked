
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lbuf {struct lbuf* l_redrive_next; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct lbuf*) ;
 struct lbuf* VAR_2 ;
 int VAR_3 ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 () ;

int FUNC_9(void *VAR_4)
{
 struct lbuf *VAR_5;

 do {
  FUNC_6(&VAR_3);
  while ((VAR_5 = VAR_2)) {
   VAR_2 = VAR_5->l_redrive_next;
   VAR_5->l_redrive_next = ((void*)0);
   FUNC_7(&VAR_3);
   FUNC_3(VAR_5);
   FUNC_6(&VAR_3);
  }

  if (FUNC_0(VAR_1)) {
   FUNC_7(&VAR_3);
   FUNC_8();
  } else {
   FUNC_5(VAR_0);
   FUNC_7(&VAR_3);
   FUNC_4();
  }
 } while (!FUNC_2());

 FUNC_1("jfsIOWait being killed!");
 return 0;
}
