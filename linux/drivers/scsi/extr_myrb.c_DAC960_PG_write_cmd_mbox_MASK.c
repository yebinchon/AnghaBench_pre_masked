
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union myrb_cmd_mbox {int * words; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;

__attribute__((used)) static inline void FUNC_2(union myrb_cmd_mbox *VAR_0,
  union myrb_cmd_mbox *VAR_1)
{
 VAR_0->words[1] = VAR_1->words[1];
 VAR_0->words[2] = VAR_1->words[2];
 VAR_0->words[3] = VAR_1->words[3];

 FUNC_1();
 VAR_0->words[0] = VAR_1->words[0];

 FUNC_0();
}
