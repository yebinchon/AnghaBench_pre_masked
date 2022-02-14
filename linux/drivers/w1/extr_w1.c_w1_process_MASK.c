
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w1_master {int refcnt; scalar_t__ search_count; int list_mutex; int mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 unsigned long FUNC_6 (unsigned long) ;
 unsigned long FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct w1_master*) ;
 int FUNC_9 (struct w1_master*,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

int FUNC_10(void *VAR_4)
{
 struct w1_master *VAR_5 = (struct w1_master *) VAR_4;



 const unsigned long VAR_6 =
   FUNC_7(VAR_2 * 1000000 + VAR_3);

 unsigned long VAR_7 = 0;

 for (;;) {

  if (!VAR_7 && VAR_5->search_count) {
   FUNC_3(&VAR_5->mutex);
   FUNC_9(VAR_5, VAR_1);
   FUNC_4(&VAR_5->mutex);
  }

  FUNC_3(&VAR_5->list_mutex);



  if (!FUNC_8(VAR_5) && VAR_7) {




   VAR_7 = 1;
  }

  FUNC_0(VAR_0);




  FUNC_4(&VAR_5->list_mutex);

  if (FUNC_2())
   break;


  if (VAR_5->search_count) {
   if (!VAR_7)
    VAR_7 = VAR_6;
   VAR_7 = FUNC_6(VAR_7);
  }
  else
   FUNC_5();
 }

 FUNC_1(&VAR_5->refcnt);

 return 0;
}
