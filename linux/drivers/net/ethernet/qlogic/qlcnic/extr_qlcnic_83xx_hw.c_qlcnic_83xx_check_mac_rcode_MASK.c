
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct qlcnic_cmd_args {scalar_t__ cmd_op; int rsp_opcode; } ;
struct qlcnic_adapter {int ahw; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct qlcnic_adapter *VAR_6,
           struct qlcnic_cmd_args *VAR_7)
{
 u8 VAR_8;
 u32 VAR_9;

 if (VAR_7->cmd_op == VAR_1) {
  VAR_9 = FUNC_1(FUNC_0(VAR_6->ahw, 2));
  VAR_8 = (u8)VAR_9;
  if (VAR_8 == VAR_5 ||
      VAR_8 == VAR_4 ||
      VAR_8 == VAR_3) {
   VAR_7->rsp_opcode = VAR_2;
   return VAR_2;
  }
 }

 return -VAR_0;
}
