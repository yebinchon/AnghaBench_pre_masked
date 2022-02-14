
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct nfp_nsp {int cpp; } ;
struct TYPE_3__ {scalar_t__ code; int msg; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,char*,int ) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_2(struct nfp_nsp *VAR_1, u32 VAR_2)
{
 int VAR_3;

 if (!VAR_2)
  return;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++)
  if (VAR_2 == VAR_0[VAR_3].code)
   FUNC_1(VAR_1->cpp, "err msg: %s\n", VAR_0[VAR_3].msg);
}
