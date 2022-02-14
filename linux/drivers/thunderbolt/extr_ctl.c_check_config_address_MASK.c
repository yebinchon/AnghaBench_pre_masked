
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tb_cfg_address {int space; scalar_t__ offset; scalar_t__ length; int zero; } ;
typedef enum tb_cfg_space { ____Placeholder_tb_cfg_space } tb_cfg_space ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,char*,scalar_t__,...) ;

__attribute__((used)) static int FUNC_1(struct tb_cfg_address VAR_1,
    enum tb_cfg_space VAR_2, u32 VAR_3,
    u32 VAR_4)
{
 if (FUNC_0(VAR_1.zero, "addr.zero is %#x\n", VAR_1.zero))
  return -VAR_0;
 if (FUNC_0(VAR_2 != VAR_1.space, "wrong space (expected %x, got %x\n)",
   VAR_2, VAR_1.space))
  return -VAR_0;
 if (FUNC_0(VAR_3 != VAR_1.offset, "wrong offset (expected %x, got %x\n)",
   VAR_3, VAR_1.offset))
  return -VAR_0;
 if (FUNC_0(VAR_4 != VAR_1.length, "wrong space (expected %x, got %x\n)",
   VAR_4, VAR_1.length))
  return -VAR_0;




 return 0;
}
