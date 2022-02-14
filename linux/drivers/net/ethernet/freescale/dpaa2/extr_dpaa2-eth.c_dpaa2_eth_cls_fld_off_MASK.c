
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cls_prot; int cls_field; scalar_t__ size; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int,char*) ;
 TYPE_1__* VAR_0 ;

int FUNC_2(int VAR_1, int VAR_2)
{
 int VAR_3, VAR_4 = 0;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  if (VAR_0[VAR_3].cls_prot == VAR_1 &&
      VAR_0[VAR_3].cls_field == VAR_2)
   return VAR_4;
  VAR_4 += VAR_0[VAR_3].size;
 }

 FUNC_1(1, "Unsupported header field used for Rx flow cls\n");
 return 0;
}
