
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct intel_scu_ipc_dev {scalar_t__ ipc_base; int * dev; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct intel_scu_ipc_dev*) ;
 int FUNC_2 (struct intel_scu_ipc_dev*,int) ;
 int FUNC_3 (struct intel_scu_ipc_dev*,int) ;
 int FUNC_4 (struct intel_scu_ipc_dev*,int ,int) ;
 struct intel_scu_ipc_dev VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,scalar_t__) ;

int FUNC_9(int VAR_6, int VAR_7, u8 *VAR_8, int VAR_9,
         u32 *VAR_10, int VAR_11, u32 VAR_12, u32 VAR_13)
{
 struct intel_scu_ipc_dev *VAR_14 = &VAR_4;
 int VAR_15 = FUNC_0(VAR_9, 4);
 u32 VAR_16[4];
 int VAR_17, VAR_18;


 if (VAR_15 > 4)
  return -VAR_0;

 FUNC_6(&VAR_5);
 if (VAR_14->dev == ((void*)0)) {
  FUNC_7(&VAR_5);
  return -VAR_1;
 }

 FUNC_8(VAR_12, VAR_14->ipc_base + VAR_2);
 FUNC_8(VAR_13, VAR_14->ipc_base + VAR_3);
 FUNC_5(VAR_16, VAR_8, VAR_9);

 for (VAR_17 = 0; VAR_17 < VAR_15; VAR_17++)
  FUNC_4(VAR_14, VAR_16[VAR_17], 4 * VAR_17);

 FUNC_2(VAR_14, (VAR_9 << 16) | (VAR_7 << 12) | VAR_6);
 VAR_18 = FUNC_1(VAR_14);
 if (!VAR_18) {
  for (VAR_17 = 0; VAR_17 < VAR_11; VAR_17++)
   *VAR_10++ = FUNC_3(VAR_14, 4 * VAR_17);
 }

 FUNC_7(&VAR_5);
 return VAR_18;
}
