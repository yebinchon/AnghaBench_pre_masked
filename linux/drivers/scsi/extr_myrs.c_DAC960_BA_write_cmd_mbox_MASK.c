
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union myrs_cmd_mbox {int * words; } ;


 int FUNC_0 () ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 () ;

__attribute__((used)) static inline void FUNC_3(union myrs_cmd_mbox *VAR_0,
  union myrs_cmd_mbox *VAR_1)
{
 FUNC_1(&VAR_0->words[1], &VAR_1->words[1],
        sizeof(union myrs_cmd_mbox) - sizeof(unsigned int));

 FUNC_2();
 VAR_0->words[0] = VAR_1->words[0];

 FUNC_0();
}
