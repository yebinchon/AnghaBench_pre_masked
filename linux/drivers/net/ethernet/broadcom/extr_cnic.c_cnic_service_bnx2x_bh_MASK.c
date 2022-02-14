
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ sw_prod_idx; int io_addr; } ;
struct cnic_local {int bnx2x_igu_sb_id; TYPE_1__ kcq2; int (* arm_int ) (struct cnic_dev*,scalar_t__) ;TYPE_1__ kcq1; } ;
struct cnic_dev {int flags; int netdev; struct cnic_local* cnic_priv; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (struct cnic_dev*,int ,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct cnic_dev*,int ,int ,scalar_t__,int ,int) ;
 scalar_t__ FUNC_3 (struct cnic_dev*,TYPE_1__*) ;
 struct bnx2x* FUNC_4 (int ) ;
 int FUNC_5 (struct cnic_dev*,scalar_t__) ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(unsigned long VAR_4)
{
 struct cnic_dev *VAR_5 = (struct cnic_dev *) VAR_4;
 struct cnic_local *VAR_6 = VAR_5->cnic_priv;
 struct bnx2x *VAR_7 = FUNC_4(VAR_5->netdev);
 u32 VAR_8, VAR_9;

 if (FUNC_7(!FUNC_6(VAR_0, &VAR_5->flags)))
  return;

 while (1) {
  VAR_8 = FUNC_3(VAR_5, &VAR_6->kcq1);

  FUNC_1(VAR_5, VAR_6->kcq1.io_addr,
     VAR_6->kcq1.sw_prod_idx + VAR_3);

  if (!FUNC_0(VAR_7)) {
   VAR_6->arm_int(VAR_5, VAR_8);
   break;
  }

  VAR_9 = FUNC_3(VAR_5, &VAR_6->kcq2);

  if (VAR_9 != VAR_8)
   continue;

  FUNC_1(VAR_5, VAR_6->kcq2.io_addr, VAR_6->kcq2.sw_prod_idx +
     VAR_3);

  FUNC_2(VAR_5, VAR_6->bnx2x_igu_sb_id, VAR_2,
    VAR_8, VAR_1, 1);

  break;
 }
}
