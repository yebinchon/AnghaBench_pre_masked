
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sym_tcb {int dummy; } ;
struct TYPE_2__ {int Tekram; int Symbios; } ;
struct sym_nvram {int type; TYPE_1__ data; } ;




 int FUNC_0 (struct sym_tcb*,int,int *) ;
 int FUNC_1 (struct sym_tcb*,int,int *) ;

void FUNC_2(struct sym_tcb *VAR_0, int VAR_1, struct sym_nvram *VAR_2)
{
 switch (VAR_2->type) {
 case 129:
  FUNC_0(VAR_0, VAR_1, &VAR_2->data.Symbios);
  break;
 case 128:
  FUNC_1(VAR_0, VAR_1, &VAR_2->data.Tekram);
  break;
 default:
  break;
 }
}
