
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int reset_action; int reset_type; } ;
union pqi_reset_register {scalar_t__ all_bits; TYPE_1__ bits; } ;
struct pqi_ctrl_info {TYPE_3__* pci_dev; TYPE_2__* pqi_registers; scalar_t__ pqi_reset_quiesce_supported; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {int device_reset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct pqi_ctrl_info*) ;
 int FUNC_2 (struct pqi_ctrl_info*) ;
 int FUNC_3 (scalar_t__,int *) ;

__attribute__((used)) static int FUNC_4(struct pqi_ctrl_info *VAR_2)
{
 int VAR_3;
 union pqi_reset_register VAR_4;

 if (VAR_2->pqi_reset_quiesce_supported) {
  VAR_3 = FUNC_2(VAR_2);
  if (VAR_3) {
   FUNC_0(&VAR_2->pci_dev->dev,
    "PQI reset failed during quiesce with error %d\n",
    VAR_3);
   return VAR_3;
  }
 }

 VAR_4.all_bits = 0;
 VAR_4.bits.reset_type = VAR_1;
 VAR_4.bits.reset_action = VAR_0;

 FUNC_3(VAR_4.all_bits, &VAR_2->pqi_registers->device_reset);

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3)
  FUNC_0(&VAR_2->pci_dev->dev,
   "PQI reset failed with error %d\n", VAR_3);

 return VAR_3;
}
