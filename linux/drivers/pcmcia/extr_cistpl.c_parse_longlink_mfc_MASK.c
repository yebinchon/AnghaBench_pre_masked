
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
struct TYPE_8__ {int nfn; TYPE_1__* fn; } ;
typedef TYPE_3__ cistpl_longlink_mfc_t ;
struct TYPE_6__ {int addr; void* space; } ;


 int VAR_0 ;
 int FUNC_0 (void**) ;

__attribute__((used)) static int FUNC_1(tuple_t *VAR_1, cistpl_longlink_mfc_t *VAR_2)
{
 u_char *VAR_3;
 int VAR_4;

 VAR_3 = (u_char *)VAR_1->TupleData;

 VAR_2->nfn = *VAR_3; VAR_3++;
 if (VAR_1->TupleDataLen <= VAR_2->nfn*5)
  return -VAR_0;
 for (VAR_4 = 0; VAR_4 < VAR_2->nfn; VAR_4++) {
  VAR_2->fn[VAR_4].space = *VAR_3; VAR_3++;
  VAR_2->fn[VAR_4].addr = FUNC_0(VAR_3);
  VAR_3 += 4;
 }
 return 0;
}
