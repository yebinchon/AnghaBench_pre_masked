
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct TYPE_8__ {int type; scalar_t__ begin_addr; scalar_t__ end_addr; int inner_scope_patches; TYPE_1__* patches; int inner_scope; } ;
typedef TYPE_2__ scope_t ;
struct TYPE_7__ {scalar_t__ skip_instr; scalar_t__ skip_patch; } ;


 int VAR_0 ;




 TYPE_2__* FUNC_0 (int *,int ) ;
 TYPE_2__* FUNC_1 (TYPE_2__*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,int ) ;

void
FUNC_3(scope_t *VAR_3)
{





 scope_t *VAR_4;
 u_int VAR_5;
 u_int VAR_6;

 VAR_4 = FUNC_0(&VAR_3->inner_scope, VAR_2);
 VAR_5 = 0;
 VAR_6 = 0;
 while (VAR_4 != ((void*)0)) {
  u_int VAR_7;

  VAR_7 = 0;
  switch (VAR_4->type) {
  case 129:
  case 130:
   if (VAR_6 != 0) {

    VAR_7++;
    VAR_4->patches[1].skip_patch =
        VAR_5 + 1;
    VAR_4->patches[1].skip_instr =
        VAR_6;
   }


   VAR_7++;


   VAR_7 += VAR_4->inner_scope_patches;

   VAR_4->patches[0].skip_patch = VAR_7;
   VAR_4->patches[0].skip_instr =
       VAR_4->end_addr - VAR_4->begin_addr;

   VAR_6 += VAR_4->patches[0].skip_instr;

   VAR_5 += VAR_7;
   if (VAR_4->type == 129) {
    VAR_3->inner_scope_patches += VAR_5;
    VAR_5 = 0;
           VAR_6 = 0;
   }
   break;
  case 131:

   VAR_5 += VAR_4->inner_scope_patches;

   VAR_6 += VAR_4->end_addr
       - VAR_4->begin_addr;
   break;
  case 128:
   FUNC_2("Unexpected scope type encountered", VAR_0);

  }

  VAR_4 = FUNC_1(VAR_4, VAR_2, VAR_1);
 }
}
