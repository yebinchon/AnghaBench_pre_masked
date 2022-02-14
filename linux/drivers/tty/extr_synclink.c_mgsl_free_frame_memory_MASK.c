
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mgsl_struct {scalar_t__ bus_type; } ;
struct TYPE_3__ {int * virt_addr; int dma_addr; } ;
typedef TYPE_1__ DMABUFFERENTRY ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int ,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct mgsl_struct *VAR_2, DMABUFFERENTRY *VAR_3, int VAR_4)
{
 int VAR_5;

 if ( VAR_3 ) {
  for ( VAR_5 = 0 ; VAR_5 < VAR_4 ; VAR_5++ ) {
   if ( VAR_3[VAR_5].virt_addr ) {
    if ( VAR_2->bus_type != VAR_1 )
     FUNC_0(((void*)0), VAR_0, VAR_3[VAR_5].virt_addr, VAR_3[VAR_5].dma_addr);
    VAR_3[VAR_5].virt_addr = ((void*)0);
   }
  }
 }

}
