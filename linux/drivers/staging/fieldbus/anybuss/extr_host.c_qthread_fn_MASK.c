
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kfifo {int dummy; } ;
struct anybuss_host {int ind_ab; int wq; struct kfifo* qs; } ;


 size_t FUNC_0 (struct kfifo*) ;
 int VAR_0 ;
 unsigned int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct anybuss_host*) ;
 int FUNC_4 (struct anybuss_host*) ;
 scalar_t__ FUNC_5 (struct kfifo*,size_t) ;
 int FUNC_6 (int ,int,int ) ;

__attribute__((used)) static int FUNC_7(void *VAR_1)
{
 struct anybuss_host *VAR_2 = VAR_1;
 struct kfifo *VAR_3 = VAR_2->qs;
 size_t VAR_4 = FUNC_0(VAR_2->qs);
 unsigned int VAR_5;
 while (!FUNC_2()) {




  VAR_5 = FUNC_1(&VAR_2->ind_ab);
  FUNC_3(VAR_2);
  FUNC_4(VAR_2);
  FUNC_6(VAR_2->wq,
       (FUNC_1(&VAR_2->ind_ab) != VAR_5) ||
    FUNC_5(VAR_3, VAR_4) ||
    FUNC_2(),
   VAR_0);




 }

 return 0;
}
