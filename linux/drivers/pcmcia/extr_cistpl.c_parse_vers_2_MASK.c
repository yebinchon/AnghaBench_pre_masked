
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u_char ;
struct TYPE_5__ {int TupleDataLen; void** TupleData; } ;
typedef TYPE_1__ tuple_t ;
struct TYPE_6__ {int vendor; int str; void* nhdr; void* vspec9; void* vspec8; int dindex; void* comply; void* vers; } ;
typedef TYPE_2__ cistpl_vers_2_t ;


 int VAR_0 ;
 int FUNC_0 (void**) ;
 int FUNC_1 (void**,void**,int,int ,int *,int *) ;

__attribute__((used)) static int FUNC_2(tuple_t *VAR_1, cistpl_vers_2_t *VAR_2)
{
 u_char *VAR_3, *VAR_4;

 if (VAR_1->TupleDataLen < 10)
  return -VAR_0;

 VAR_3 = VAR_1->TupleData;
 VAR_4 = VAR_3 + VAR_1->TupleDataLen;

 VAR_2->vers = VAR_3[0];
 VAR_2->comply = VAR_3[1];
 VAR_2->dindex = FUNC_0(VAR_3 + 2);
 VAR_2->vspec8 = VAR_3[6];
 VAR_2->vspec9 = VAR_3[7];
 VAR_2->nhdr = VAR_3[8];
 VAR_3 += 9;
 return FUNC_1(VAR_3, VAR_4, 2, VAR_2->str, &VAR_2->vendor, ((void*)0));
}
