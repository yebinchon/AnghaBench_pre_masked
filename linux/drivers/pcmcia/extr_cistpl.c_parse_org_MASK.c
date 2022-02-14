
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef char u_char ;
struct TYPE_5__ {char* TupleData; int TupleDataLen; } ;
typedef TYPE_1__ tuple_t ;
struct TYPE_6__ {char data_org; char* desc; } ;
typedef TYPE_2__ cistpl_org_t ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(tuple_t *VAR_1, cistpl_org_t *VAR_2)
{
 u_char *VAR_3, *VAR_4;
 int VAR_5;

 VAR_3 = VAR_1->TupleData;
 VAR_4 = VAR_3 + VAR_1->TupleDataLen;
 if (VAR_3 == VAR_4)
  return -VAR_0;
 VAR_2->data_org = *VAR_3;
 if (++VAR_3 == VAR_4)
  return -VAR_0;
 for (VAR_5 = 0; VAR_5 < 30; VAR_5++) {
  VAR_2->desc[VAR_5] = *VAR_3;
  if (*VAR_3 == '\0')
   break;
  if (++VAR_3 == VAR_4)
   return -VAR_0;
 }
 return 0;
}
