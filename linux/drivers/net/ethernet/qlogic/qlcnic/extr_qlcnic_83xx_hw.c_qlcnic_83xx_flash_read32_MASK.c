
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ulong ;
typedef int u8 ;
typedef int u32 ;
struct qlcnic_adapter {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct qlcnic_adapter*,int ,int*) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int *,char*,int) ;
 scalar_t__ FUNC_3 (struct qlcnic_adapter*) ;
 int FUNC_4 (struct qlcnic_adapter*) ;
 scalar_t__ FUNC_5 (struct qlcnic_adapter*,int ,int) ;

int FUNC_6(struct qlcnic_adapter *VAR_2, u32 VAR_3,
        u8 *VAR_4, int VAR_5)
{
 u32 VAR_6, VAR_7 = VAR_3, VAR_8;
 ulong VAR_9;
 int VAR_10, VAR_11 = 0;

 if (FUNC_3(VAR_2) != 0)
  return -VAR_0;

 if (VAR_7 & 0x3) {
  FUNC_2(&VAR_2->pdev->dev, "Illegal addr = 0x%x\n", VAR_7);
  FUNC_4(VAR_2);
  return -VAR_0;
 }

 for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++) {
  if (FUNC_5(VAR_2,
       VAR_1,
       (VAR_7))) {
   FUNC_4(VAR_2);
   return -VAR_0;
  }

  VAR_9 = FUNC_1(VAR_7);
  VAR_8 = FUNC_0(VAR_2, VAR_9, &VAR_11);
  if (VAR_11 == -VAR_0)
   return VAR_11;

  VAR_6 = VAR_8;
  *(u32 *)VAR_4 = VAR_6;
  VAR_4 = VAR_4 + 4;
  VAR_7 = VAR_7 + 4;
 }

 FUNC_4(VAR_2);

 return 0;
}
