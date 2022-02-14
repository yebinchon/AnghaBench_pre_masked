
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evtchn_unmask {unsigned int port; } ;
typedef int event_word_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct evtchn_unmask*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (unsigned int) ;
 scalar_t__ FUNC_4 (unsigned int) ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(unsigned VAR_1)
{
 event_word_t *VAR_2 = FUNC_3(VAR_1);

 FUNC_0(!FUNC_5());

 FUNC_2(VAR_2);
 if (FUNC_4(VAR_1)) {
  struct evtchn_unmask VAR_3 = { .port = VAR_1 };
  (void)FUNC_1(VAR_0, &VAR_3);
 }
}
