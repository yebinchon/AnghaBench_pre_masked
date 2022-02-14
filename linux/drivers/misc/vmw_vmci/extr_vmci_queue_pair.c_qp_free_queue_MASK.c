
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u64 ;
struct vmci_queue {TYPE_2__* kernel_if; } ;
struct TYPE_8__ {int dev; } ;
struct TYPE_5__ {int * pas; int * vas; } ;
struct TYPE_7__ {TYPE_1__ g; } ;
struct TYPE_6__ {TYPE_3__ u; } ;


 size_t FUNC_0 (size_t,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (struct vmci_queue*) ;
 TYPE_4__* VAR_1 ;

__attribute__((used)) static void FUNC_3(void *VAR_2, u64 VAR_3)
{
 struct vmci_queue *VAR_4 = VAR_2;

 if (VAR_4) {
  u64 VAR_5;


  for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_3, VAR_0) + 1; VAR_5++) {
   FUNC_1(&VAR_1->dev, VAR_0,
       VAR_4->kernel_if->u.g.vas[VAR_5],
       VAR_4->kernel_if->u.g.pas[VAR_5]);
  }

  FUNC_2(VAR_4);
 }
}
