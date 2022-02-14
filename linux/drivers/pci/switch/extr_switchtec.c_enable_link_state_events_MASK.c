
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct switchtec_dev {int pff_csr_count; TYPE_1__* mmio_pff_csr; } ;
struct TYPE_2__ {int link_state_hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int *) ;

__attribute__((used)) static void FUNC_1(struct switchtec_dev *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->pff_csr_count; VAR_3++) {
  FUNC_0(VAR_0 |
     VAR_1,
     &VAR_2->mmio_pff_csr[VAR_3].link_state_hdr);
 }
}
