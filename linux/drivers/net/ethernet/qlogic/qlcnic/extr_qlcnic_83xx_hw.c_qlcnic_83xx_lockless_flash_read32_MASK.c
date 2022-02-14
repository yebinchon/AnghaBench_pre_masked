
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
 int VAR_1 ;
 int FUNC_0 (struct qlcnic_adapter*,int ,int*) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (struct qlcnic_adapter*,int ,int) ;

int FUNC_4(struct qlcnic_adapter *VAR_3,
          u32 VAR_4, u8 *VAR_5,
          int VAR_6)
{
 u32 VAR_7, VAR_8, VAR_9, VAR_10 = VAR_4, VAR_11;
 ulong VAR_12, VAR_13;
 int VAR_14, VAR_15 = 0;

 VAR_9 = VAR_10 & (VAR_1 - 1);
 if (VAR_10 & 0x3) {
  FUNC_2(&VAR_3->pdev->dev, "Illegal addr = 0x%x\n", VAR_10);
  return -VAR_0;
 }

 FUNC_3(VAR_3, VAR_2,
         (VAR_10 & 0xFFFF0000));

 VAR_8 = VAR_9 + (VAR_6 * sizeof(u32));

 if (VAR_8 > (VAR_1 - 1)) {


  for (VAR_14 = 0; VAR_14 < VAR_6; VAR_14++) {
   VAR_12 = FUNC_1(VAR_10);
   VAR_11 = FUNC_0(VAR_3, VAR_12, &VAR_15);
   if (VAR_15 == -VAR_0)
    return VAR_15;

   VAR_7 = VAR_11;
   *(u32 *)VAR_5 = VAR_7;
   VAR_5 = VAR_5 + 4;
   VAR_10 = VAR_10 + 4;
   VAR_9 = VAR_9 + 4;

   if (VAR_9 > (VAR_1 - 1)) {
    VAR_13 = VAR_2;

    FUNC_3(VAR_3,
            VAR_13,
            (VAR_10));
    VAR_9 = 0;
   }
  }
 } else {

  for (VAR_14 = 0; VAR_14 < VAR_6; VAR_14++) {
   VAR_12 = FUNC_1(VAR_10);
   VAR_11 = FUNC_0(VAR_3, VAR_12, &VAR_15);
   if (VAR_15 == -VAR_0)
    return VAR_15;

   VAR_7 = VAR_11;
   *(u32 *)VAR_5 = VAR_7;
   VAR_5 = VAR_5 + 4;
   VAR_10 = VAR_10 + 4;
  }
 }

 return 0;
}
