
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct switchtec_ntb {struct switchtec_dev* stdev; } ;
struct switchtec_dev {TYPE_2__* mmio_pff_csr; TYPE_1__* mmio_part_cfg; } ;
typedef enum ntb_width { ____Placeholder_ntb_width } ntb_width ;
typedef enum ntb_speed { ____Placeholder_ntb_speed } ntb_speed ;
struct TYPE_4__ {int * pci_cap_region; } ;
struct TYPE_3__ {int vep_pff_inst_id; } ;


 size_t FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct switchtec_ntb *VAR_0,
       int VAR_1,
       enum ntb_speed *VAR_2,
       enum ntb_width *VAR_3)
{
 struct switchtec_dev *VAR_4 = VAR_0->stdev;

 u32 VAR_5 = FUNC_0(&VAR_4->mmio_part_cfg[VAR_1].vep_pff_inst_id);
 u32 VAR_6 = FUNC_0(&VAR_4->mmio_pff_csr[VAR_5].pci_cap_region[13]);

 if (VAR_2)
  *VAR_2 = (VAR_6 >> 16) & 0xF;

 if (VAR_3)
  *VAR_3 = (VAR_6 >> 20) & 0x3F;
}
