
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msg_msgseg {struct msg_msgseg* next; } ;
struct msg_msg {struct msg_msg* next; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct msg_msgseg*) ;
 int FUNC_2 (struct msg_msgseg*) ;

void FUNC_3(struct msg_msg *VAR_0)
{
 struct msg_msgseg *VAR_1;

 FUNC_2(VAR_0);

 VAR_1 = VAR_0->next;
 FUNC_1(VAR_0);
 while (VAR_1 != ((void*)0)) {
  struct msg_msgseg *VAR_2 = VAR_1->next;

  FUNC_0();
  FUNC_1(VAR_1);
  VAR_1 = VAR_2;
 }
}
