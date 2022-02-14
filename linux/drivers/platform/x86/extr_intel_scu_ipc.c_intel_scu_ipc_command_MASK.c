
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_scu_ipc_dev {int * dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct intel_scu_ipc_dev*) ;
 int FUNC_1 (struct intel_scu_ipc_dev*,int) ;
 int FUNC_2 (struct intel_scu_ipc_dev*,int) ;
 int FUNC_3 (struct intel_scu_ipc_dev*,int ,int) ;
 struct intel_scu_ipc_dev VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(int VAR_3, int VAR_4, u32 *VAR_5, int VAR_6,
     u32 *VAR_7, int VAR_8)
{
 struct intel_scu_ipc_dev *VAR_9 = &VAR_1;
 int VAR_10, VAR_11;

 FUNC_4(&VAR_2);
 if (VAR_9->dev == ((void*)0)) {
  FUNC_5(&VAR_2);
  return -VAR_0;
 }

 for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++)
  FUNC_3(VAR_9, *VAR_5++, 4 * VAR_10);

 FUNC_1(VAR_9, (VAR_6 << 16) | (VAR_4 << 12) | VAR_3);
 VAR_11 = FUNC_0(VAR_9);

 if (!VAR_11) {
  for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++)
   *VAR_7++ = FUNC_2(VAR_9, 4 * VAR_10);
 }

 FUNC_5(&VAR_2);
 return VAR_11;
}
