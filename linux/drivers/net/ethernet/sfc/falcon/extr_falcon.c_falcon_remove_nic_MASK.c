
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct falcon_nic_data {int * pci_dev2; } ;
struct falcon_board {int i2c_adap; TYPE_1__* type; } ;
struct ef4_nic {struct falcon_nic_data* nic_data; int irq_status; } ;
struct TYPE_2__ {int (* fini ) (struct ef4_nic*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct ef4_nic*,int ) ;
 int FUNC_1 (struct ef4_nic*,int *) ;
 struct falcon_board* FUNC_2 (struct ef4_nic*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct falcon_nic_data*) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct ef4_nic*) ;

__attribute__((used)) static void FUNC_8(struct ef4_nic *VAR_1)
{
 struct falcon_nic_data *VAR_2 = VAR_1->nic_data;
 struct falcon_board *VAR_3 = FUNC_2(VAR_1);

 VAR_3->type->fini(VAR_1);


 FUNC_3(&VAR_3->i2c_adap);
 FUNC_5(&VAR_3->i2c_adap, 0, sizeof(VAR_3->i2c_adap));

 FUNC_1(VAR_1, &VAR_1->irq_status);

 FUNC_0(VAR_1, VAR_0);


 if (VAR_2->pci_dev2) {
  FUNC_6(VAR_2->pci_dev2);
  VAR_2->pci_dev2 = ((void*)0);
 }


 FUNC_4(VAR_1->nic_data);
 VAR_1->nic_data = ((void*)0);
}
