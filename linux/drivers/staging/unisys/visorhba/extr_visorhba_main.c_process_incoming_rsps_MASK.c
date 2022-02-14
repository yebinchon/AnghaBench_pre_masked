
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct visorhba_devdata {int thread_wait_ms; int interrupt_rcvd; int rsp_queue; } ;
struct uiscmdrsp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct uiscmdrsp*,struct visorhba_devdata*) ;
 int FUNC_2 (struct uiscmdrsp*) ;
 struct uiscmdrsp* FUNC_3 (int const,int ) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int,int ) ;

__attribute__((used)) static int FUNC_7(void *VAR_2)
{
 struct visorhba_devdata *VAR_3 = VAR_2;
 struct uiscmdrsp *VAR_4 = ((void*)0);
 const int VAR_5 = sizeof(*VAR_4);

 VAR_4 = FUNC_3(VAR_5, VAR_1);
 if (!VAR_4)
  return -VAR_0;

 while (1) {
  if (FUNC_4())
   break;
  FUNC_6(
   VAR_3->rsp_queue, (FUNC_0(
          &VAR_3->interrupt_rcvd) == 1),
    FUNC_5(VAR_3->thread_wait_ms));

  FUNC_1(VAR_4, VAR_3);
 }
 FUNC_2(VAR_4);
 return 0;
}
