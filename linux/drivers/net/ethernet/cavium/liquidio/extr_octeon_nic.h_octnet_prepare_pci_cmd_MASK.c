
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union octnic_cmd_setup {int dummy; } octnic_cmd_setup ;
typedef union octeon_instr_64B {int dummy; } octeon_instr_64B ;
typedef int u32 ;
struct octeon_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct octeon_device*) ;
 int FUNC_1 (struct octeon_device*,union octeon_instr_64B*,union octnic_cmd_setup*,int ) ;
 int FUNC_2 (struct octeon_device*,union octeon_instr_64B*,union octnic_cmd_setup*,int ) ;

__attribute__((used)) static inline void
FUNC_3(struct octeon_device *VAR_0, union octeon_instr_64B *VAR_1,
         union octnic_cmd_setup *VAR_2, u32 VAR_3)
{
 if (FUNC_0(VAR_0))
  FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
 else
  FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);
}
