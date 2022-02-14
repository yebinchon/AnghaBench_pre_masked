
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct isci_host {size_t completion_queue_get; int * completion_queue; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (size_t) ;
 size_t VAR_0 ;

__attribute__((used)) static bool FUNC_2(struct isci_host *VAR_1)
{
 u32 VAR_2 = VAR_1->completion_queue_get;
 u32 VAR_3 = VAR_2 & VAR_0;

 if (FUNC_1(VAR_2) ==
     FUNC_0(VAR_1->completion_queue[VAR_3]))
  return 1;

 return 0;
}
