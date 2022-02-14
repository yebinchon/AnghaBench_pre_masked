
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ cpl_handler_func ;


 unsigned int VAR_0 ;
 scalar_t__* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,unsigned int) ;

void FUNC_1(unsigned int VAR_3, cpl_handler_func VAR_4)
{
 if (VAR_3 < VAR_0)
  VAR_1[VAR_3] = VAR_4 ? VAR_4 : VAR_2;
 else
  FUNC_0("T3C: handler registration for opcode %x failed\n",
         VAR_3);
}
