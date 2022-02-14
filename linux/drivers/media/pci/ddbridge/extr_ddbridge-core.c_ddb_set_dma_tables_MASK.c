
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct ddb {TYPE_1__* port; } ;
struct TYPE_2__ {scalar_t__ output; scalar_t__* input; } ;


 size_t VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct ddb *VAR_1)
{
 u32 VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (VAR_1->port[VAR_2].input[0])
   FUNC_0(VAR_1->port[VAR_2].input[0]);
  if (VAR_1->port[VAR_2].input[1])
   FUNC_0(VAR_1->port[VAR_2].input[1]);
  if (VAR_1->port[VAR_2].output)
   FUNC_0(VAR_1->port[VAR_2].output);
 }
}
