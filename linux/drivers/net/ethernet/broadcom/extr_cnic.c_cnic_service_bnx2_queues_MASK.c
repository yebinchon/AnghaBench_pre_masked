
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct TYPE_2__ {int sw_prod_idx; int io_addr; scalar_t__* status_idx_ptr; } ;
struct cnic_local {TYPE_1__ kcq1; int * kwq_con_idx_ptr; int kwq_con_idx; } ;
struct cnic_dev {struct cnic_local* cnic_priv; } ;


 int FUNC_0 (struct cnic_dev*,int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (struct cnic_local*) ;
 int FUNC_3 (struct cnic_dev*,TYPE_1__*) ;
 int FUNC_4 () ;
 int FUNC_5 (struct cnic_dev*,int) ;

__attribute__((used)) static u32 FUNC_6(struct cnic_dev *VAR_0)
{
 struct cnic_local *VAR_1 = VAR_0->cnic_priv;
 u32 VAR_2 = (u16) *VAR_1->kcq1.status_idx_ptr;
 int VAR_3;


 FUNC_4();
 VAR_1->kwq_con_idx = *VAR_1->kwq_con_idx_ptr;

 while ((VAR_3 = FUNC_3(VAR_0, &VAR_1->kcq1))) {

  FUNC_5(VAR_0, VAR_3);


  FUNC_1();
  VAR_2 = (u16) *VAR_1->kcq1.status_idx_ptr;

  FUNC_4();
  VAR_1->kwq_con_idx = *VAR_1->kwq_con_idx_ptr;
 }

 FUNC_0(VAR_0, VAR_1->kcq1.io_addr, VAR_1->kcq1.sw_prod_idx);

 FUNC_2(VAR_1);

 return VAR_2;
}
