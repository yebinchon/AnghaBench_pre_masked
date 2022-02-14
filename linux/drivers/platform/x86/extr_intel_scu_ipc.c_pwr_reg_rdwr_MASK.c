
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct intel_scu_ipc_dev {scalar_t__ ipc_base; int * dev; } ;
typedef int cbuf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct intel_scu_ipc_dev*) ;
 int FUNC_1 (struct intel_scu_ipc_dev*,int) ;
 int FUNC_2 (struct intel_scu_ipc_dev*,int) ;
 int FUNC_3 (struct intel_scu_ipc_dev*,int,int) ;
 struct intel_scu_ipc_dev VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int*,scalar_t__,int) ;
 int FUNC_5 (int*,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(u16 *VAR_7, u8 *VAR_8, u32 VAR_9, u32 VAR_10, u32 VAR_11)
{
 struct intel_scu_ipc_dev *VAR_12 = &VAR_5;
 int VAR_13;
 u32 VAR_14 = 0;
 int VAR_15;
 u8 VAR_16[VAR_4];
 u32 *VAR_17 = (u32 *)&VAR_16;

 FUNC_5(VAR_16, 0, sizeof(VAR_16));

 FUNC_6(&VAR_6);

 if (VAR_12->dev == ((void*)0)) {
  FUNC_7(&VAR_6);
  return -VAR_0;
 }

 for (VAR_13 = 0; VAR_13 < VAR_9; VAR_13++, VAR_14 += 2) {
  VAR_16[VAR_14] = VAR_7[VAR_13];
  VAR_16[VAR_14 + 1] = VAR_7[VAR_13] >> 8;
 }

 if (VAR_11 == VAR_2) {
  for (VAR_13 = 0, VAR_14 = 0; VAR_13 < VAR_9; VAR_13++, VAR_14 += 4)
   FUNC_3(VAR_12, VAR_17[VAR_13], VAR_14);
  FUNC_1(VAR_12, (VAR_9 * 2) << 16 | VAR_11 << 12 | 0 << 8 | VAR_10);
 } else if (VAR_11 == VAR_3) {
  for (VAR_13 = 0; VAR_13 < VAR_9; VAR_13++, VAR_14 += 1)
   VAR_16[VAR_14] = VAR_8[VAR_13];
  for (VAR_13 = 0, VAR_14 = 0; VAR_13 < VAR_9; VAR_13++, VAR_14 += 4)
   FUNC_3(VAR_12, VAR_17[VAR_13], VAR_14);
  FUNC_1(VAR_12, (VAR_9 * 3) << 16 | VAR_11 << 12 | 0 << 8 | VAR_10);
 } else if (VAR_11 == VAR_1) {
  VAR_16[VAR_14] = VAR_8[0];
  VAR_16[VAR_14 + 1] = VAR_8[1];
  FUNC_3(VAR_12, VAR_17[0], 0);
  FUNC_1(VAR_12, 4 << 16 | VAR_11 << 12 | 0 << 8 | VAR_10);
 }

 VAR_15 = FUNC_0(VAR_12);
 if (!VAR_15 && VAR_11 == VAR_2) {

  FUNC_4(VAR_16, VAR_12->ipc_base + 0x90, 16);
  for (VAR_13 = 0; VAR_13 < VAR_9; VAR_13++)
   VAR_8[VAR_13] = FUNC_2(VAR_12, VAR_13);
 }
 FUNC_7(&VAR_6);
 return VAR_15;
}
