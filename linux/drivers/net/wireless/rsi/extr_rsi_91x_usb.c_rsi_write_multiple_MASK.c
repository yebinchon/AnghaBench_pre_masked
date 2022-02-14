
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct rsi_hw {scalar_t__ rsi_dev; } ;
struct rsi_91x_usbdev {scalar_t__ write_fail; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rsi_hw*,scalar_t__*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct rsi_hw *VAR_3,
         u8 VAR_4,
         u8 *VAR_5,
         u32 VAR_6)
{
 struct rsi_91x_usbdev *VAR_7;

 if (!VAR_3)
  return -VAR_2;

 if (VAR_4 == 0)
  return -VAR_0;

 VAR_7 = (struct rsi_91x_usbdev *)VAR_3->rsi_dev;
 if (VAR_7->write_fail)
  return -VAR_1;

 return FUNC_0(VAR_3, VAR_5, VAR_6, VAR_4);
}
