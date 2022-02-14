
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msp_state {int restart; int wq; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int VAR_2 ;

int FUNC_9(struct msp_state *VAR_3, int VAR_4)
{
 FUNC_0(VAR_2, VAR_1);

 FUNC_1(&VAR_3->wq, &VAR_2);
 if (!FUNC_2()) {
  if (VAR_4 < 0) {
   FUNC_7(VAR_0);
   FUNC_5();
  } else {
   FUNC_6
      (FUNC_3(VAR_4));
  }
 }

 FUNC_4(&VAR_3->wq, &VAR_2);
 FUNC_8();
 return VAR_3->restart;
}
