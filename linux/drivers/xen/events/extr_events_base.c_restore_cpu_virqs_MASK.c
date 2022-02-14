
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evtchn_bind_virq {int virq; int port; int vcpu; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ,struct evtchn_bind_virq*) ;
 int VAR_1 ;
 int FUNC_3 (int,unsigned int) ;
 int* FUNC_4 (int ,unsigned int) ;
 int FUNC_5 (int) ;
 int VAR_2 ;
 int FUNC_6 (unsigned int,int,int,int) ;
 int FUNC_7 (unsigned int) ;

__attribute__((used)) static void FUNC_8(unsigned int VAR_3)
{
 struct evtchn_bind_virq VAR_4;
 int VAR_5, VAR_6, VAR_7;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  if ((VAR_6 = FUNC_4(VAR_2, VAR_3)[VAR_5]) == -1)
   continue;

  FUNC_1(FUNC_5(VAR_6) != VAR_5);


  VAR_4.virq = VAR_5;
  VAR_4.vcpu = FUNC_7(VAR_3);
  if (FUNC_2(VAR_0,
      &VAR_4) != 0)
   FUNC_0();
  VAR_7 = VAR_4.port;


  (void)FUNC_6(VAR_3, VAR_6, VAR_7, VAR_5);
  FUNC_3(VAR_7, VAR_3);
 }
}
