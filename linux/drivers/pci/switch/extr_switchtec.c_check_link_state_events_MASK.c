
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct switchtec_dev {int pff_csr_count; int* link_event_count; int link_event_work; int dev; TYPE_1__* mmio_pff_csr; } ;
struct TYPE_2__ {int link_state_hdr; } ;


 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct switchtec_dev *VAR_0)
{
 int VAR_1;
 u32 VAR_2;
 int VAR_3;
 int VAR_4 = 0;

 for (VAR_1 = 0; VAR_1 < VAR_0->pff_csr_count; VAR_1++) {
  VAR_2 = FUNC_1(&VAR_0->mmio_pff_csr[VAR_1].link_state_hdr);
  FUNC_0(&VAR_0->dev, "link_state: %d->%08x\n", VAR_1, VAR_2);
  VAR_3 = (VAR_2 >> 5) & 0xFF;

  if (VAR_3 != VAR_0->link_event_count[VAR_1]) {
   VAR_4 = 1;
   VAR_0->link_event_count[VAR_1] = VAR_3;
  }
 }

 if (VAR_4)
  FUNC_2(&VAR_0->link_event_work);
}
