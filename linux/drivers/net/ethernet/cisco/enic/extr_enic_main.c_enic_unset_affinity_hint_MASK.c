
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct enic {int intr_count; TYPE_1__* msix_entry; } ;
struct TYPE_2__ {int vector; } ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void FUNC_1(struct enic *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->intr_count; VAR_1++)
  FUNC_0(VAR_0->msix_entry[VAR_1].vector, ((void*)0));
}
