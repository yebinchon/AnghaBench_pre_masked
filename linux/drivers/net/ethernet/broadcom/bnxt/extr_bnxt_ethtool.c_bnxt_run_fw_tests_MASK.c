
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct hwrm_selftest_exec_output {scalar_t__ test_success; } ;
struct hwrm_selftest_exec_input {scalar_t__ flags; int member_0; } ;
struct bnxt {int hwrm_cmd_lock; TYPE_1__* test_info; struct hwrm_selftest_exec_output* hwrm_cmd_resp_addr; } ;
typedef int req ;
struct TYPE_2__ {int timeout; } ;


 int VAR_0 ;
 int FUNC_0 (struct bnxt*,struct hwrm_selftest_exec_input*,int,int ) ;
 int FUNC_1 (struct bnxt*,struct hwrm_selftest_exec_input*,int ,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct bnxt *VAR_1, u8 VAR_2, u8 *VAR_3)
{
 struct hwrm_selftest_exec_output *VAR_4 = VAR_1->hwrm_cmd_resp_addr;
 struct hwrm_selftest_exec_input VAR_5 = {0};
 int VAR_6;

 FUNC_1(VAR_1, &VAR_5, VAR_0, -1, -1);
 FUNC_2(&VAR_1->hwrm_cmd_lock);
 VAR_4->test_success = 0;
 VAR_5.flags = VAR_2;
 VAR_6 = FUNC_0(VAR_1, &VAR_5, sizeof(VAR_5), VAR_1->test_info->timeout);
 *VAR_3 = VAR_4->test_success;
 FUNC_3(&VAR_1->hwrm_cmd_lock);
 return VAR_6;
}
