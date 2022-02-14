
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
typedef int * capi_send_handler_t ;
struct TYPE_3__ {scalar_t__ const cmd; int * handler; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static inline capi_send_handler_t FUNC_1(const u16 VAR_1)
{
 size_t VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++)
  if (VAR_0[VAR_2].cmd == VAR_1)
   return VAR_0[VAR_2].handler;
 return ((void*)0);
}
