
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u_char ;
struct TYPE_5__ {int TupleDataLen; scalar_t__ TupleData; } ;
typedef TYPE_1__ tuple_t ;
struct TYPE_6__ {void* sysinit; void* func; } ;
typedef TYPE_2__ cistpl_funcid_t ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(tuple_t *VAR_1, cistpl_funcid_t *VAR_2)
{
 u_char *VAR_3;
 if (VAR_1->TupleDataLen < 2)
  return -VAR_0;
 VAR_3 = (u_char *)VAR_1->TupleData;
 VAR_2->func = VAR_3[0];
 VAR_2->sysinit = VAR_3[1];
 return 0;
}
