
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct qlcnic_flt_entry {scalar_t__ start_addr; } ;
struct qlcnic_adapter {TYPE_1__* pdev; TYPE_2__* ahw; } ;
struct TYPE_4__ {scalar_t__ revision_id; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,char*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_5 (struct qlcnic_adapter*,int ,struct qlcnic_flt_entry*) ;
 int FUNC_6 (struct qlcnic_adapter*,scalar_t__,int*) ;

int
FUNC_7(struct qlcnic_adapter *VAR_6)
{
 struct qlcnic_flt_entry VAR_7;
 u32 VAR_8 = -1, VAR_9;
 int VAR_10;

 if (VAR_6->ahw->revision_id == VAR_5)
  VAR_10 = FUNC_5(VAR_6, VAR_2,
       &VAR_7);
 else
  VAR_10 = FUNC_5(VAR_6, VAR_1,
       &VAR_7);

 if (!VAR_10)

  FUNC_6(VAR_6, VAR_7.start_addr + 4,
         (int *)&VAR_8);
 else
  FUNC_6(VAR_6, VAR_3,
         (int *)&VAR_8);

 VAR_8 = FUNC_0(VAR_8);
 VAR_9 = VAR_4;

 if (VAR_8 < VAR_9) {
  FUNC_4(&VAR_6->pdev->dev,
   "firmware version %d.%d.%d unsupported."
   "Min supported version %d.%d.%d\n",
   FUNC_2(VAR_8), FUNC_3(VAR_8), FUNC_1(VAR_8),
   FUNC_2(VAR_9), FUNC_3(VAR_9), FUNC_1(VAR_9));
  return -VAR_0;
 }

 return 0;
}
