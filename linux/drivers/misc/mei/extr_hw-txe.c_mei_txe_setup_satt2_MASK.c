
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mei_txe_hw {int dummy; } ;
struct mei_device {int dev; } ;
typedef int phys_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,int,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mei_txe_hw*,int ,int) ;
 struct mei_txe_hw* FUNC_3 (struct mei_device*) ;
 int FUNC_4 (int ) ;

int FUNC_5(struct mei_device *VAR_7, phys_addr_t VAR_8, u32 VAR_9)
{
 struct mei_txe_hw *VAR_10 = FUNC_3(VAR_7);

 u32 VAR_11 = FUNC_1(VAR_8);
 u32 VAR_12 = FUNC_4(VAR_8);
 u32 VAR_13;


 if (VAR_12 & ~0xF)
  return -VAR_0;


 if (VAR_11 & 0xF)
  return -VAR_0;


 if (VAR_9 & 0x4)
  return -VAR_0;


 if (VAR_9 > VAR_6)
  return -VAR_0;

 VAR_13 = VAR_4;
 VAR_13 |= VAR_12 << VAR_2;

 FUNC_2(VAR_10, VAR_5, VAR_9);
 FUNC_2(VAR_10, VAR_1, VAR_11);
 FUNC_2(VAR_10, VAR_3, VAR_13);
 FUNC_0(VAR_7->dev, "SATT2: SAP_SIZE_OFFSET=0x%08X, BRG_BA_LSB_OFFSET=0x%08X, CTRL_OFFSET=0x%08X\n",
  VAR_9, VAR_11, VAR_13);

 return 0;
}
