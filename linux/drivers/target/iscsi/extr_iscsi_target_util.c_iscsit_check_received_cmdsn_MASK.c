
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct iscsi_session {scalar_t__ exp_cmd_sn; int max_cmd_sn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (char*,scalar_t__,...) ;
 int FUNC_3 (char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static inline int FUNC_4(struct iscsi_session *VAR_4, u32 VAR_5)
{
 u32 VAR_6;
 int VAR_7;







 VAR_6 = FUNC_0(&VAR_4->max_cmd_sn);
 if (FUNC_1(VAR_5, VAR_6)) {
  FUNC_3("Received CmdSN: 0x%08x is greater than"
         " MaxCmdSN: 0x%08x, ignoring.\n", VAR_5, VAR_6);
  VAR_7 = VAR_2;

 } else if (VAR_5 == VAR_4->exp_cmd_sn) {
  VAR_4->exp_cmd_sn++;
  FUNC_2("Received CmdSN matches ExpCmdSN,"
        " incremented ExpCmdSN to: 0x%08x\n",
        VAR_4->exp_cmd_sn);
  VAR_7 = VAR_3;

 } else if (FUNC_1(VAR_5, VAR_4->exp_cmd_sn)) {
  FUNC_2("Received CmdSN: 0x%08x is greater"
        " than ExpCmdSN: 0x%08x, not acknowledging.\n",
        VAR_5, VAR_4->exp_cmd_sn);
  VAR_7 = VAR_0;

 } else {
  FUNC_3("Received CmdSN: 0x%08x is less than"
         " ExpCmdSN: 0x%08x, ignoring.\n", VAR_5,
         VAR_4->exp_cmd_sn);
  VAR_7 = VAR_1;
 }

 return VAR_7;
}
