
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * field; } ;
union xhci_trb {TYPE_1__ generic; } ;
struct xhci_segment {scalar_t__ dma; union xhci_trb* trbs; } ;
struct seq_file {int dummy; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct seq_file*,char*,scalar_t__*,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct seq_file *VAR_1,
       struct xhci_segment *VAR_2)
{
 int VAR_3;
 dma_addr_t VAR_4;
 union xhci_trb *VAR_5;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_5 = &VAR_2->trbs[VAR_3];
  VAR_4 = VAR_2->dma + VAR_3 * sizeof(*VAR_5);
  FUNC_1(VAR_1, "%pad: %s\n", &VAR_4,
      FUNC_2(FUNC_0(VAR_5->generic.field[0]),
        FUNC_0(VAR_5->generic.field[1]),
        FUNC_0(VAR_5->generic.field[2]),
        FUNC_0(VAR_5->generic.field[3])));
 }
}
