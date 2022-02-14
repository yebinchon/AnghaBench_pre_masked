
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* u_char ;
struct TYPE_7__ {int TupleDataLen; scalar_t__ TupleData; } ;
typedef TYPE_2__ tuple_t ;
struct TYPE_8__ {int nid; TYPE_1__* id; } ;
typedef TYPE_3__ cistpl_jedec_t ;
struct TYPE_6__ {void* info; void* mfr; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(tuple_t *VAR_1, cistpl_jedec_t *VAR_2)
{
 u_char *VAR_3, *VAR_4;
 int VAR_5;

 VAR_3 = (u_char *)VAR_1->TupleData;
 VAR_4 = VAR_3 + VAR_1->TupleDataLen;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (VAR_3 > VAR_4-2)
   break;
  VAR_2->id[VAR_5].mfr = VAR_3[0];
  VAR_2->id[VAR_5].info = VAR_3[1];
  VAR_3 += 2;
 }
 VAR_2->nid = VAR_5;
 return 0;
}
