
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct hwrm_selftest_qlist_output {int num_tests; int offline_tests; char* test0_name; int test_timeout; } ;
struct hwrm_selftest_qlist_input {int member_0; } ;
struct bnxt_test_info {int offline_mask; char** string; scalar_t__ timeout; } ;
struct bnxt {int fw_cap; int num_tests; int hwrm_spec_code; int hwrm_cmd_lock; struct bnxt_test_info* test_info; struct net_device* dev; struct hwrm_selftest_qlist_output* hwrm_cmd_resp_addr; } ;
typedef int req ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct bnxt*) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct bnxt*,struct hwrm_selftest_qlist_input*,int,scalar_t__) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct bnxt*,struct hwrm_selftest_qlist_input*,int ,int,int) ;
 struct bnxt_test_info* FUNC_4 (int,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char*,char*,scalar_t__) ;
 scalar_t__ FUNC_10 (char*) ;
 int FUNC_11 (char*,char*,scalar_t__) ;

void FUNC_12(struct bnxt *VAR_11)
{
 struct hwrm_selftest_qlist_output *VAR_12 = VAR_11->hwrm_cmd_resp_addr;
 struct hwrm_selftest_qlist_input VAR_13 = {0};
 struct bnxt_test_info *VAR_14;
 struct net_device *VAR_15 = VAR_11->dev;
 int VAR_16, VAR_17;

 if (!(VAR_11->fw_cap & VAR_2))
  FUNC_2(VAR_15);

 VAR_11->num_tests = 0;
 if (VAR_11->hwrm_spec_code < 0x10704 || !FUNC_0(VAR_11))
  return;

 FUNC_3(VAR_11, &VAR_13, VAR_10, -1, -1);
 FUNC_6(&VAR_11->hwrm_cmd_lock);
 VAR_17 = FUNC_1(VAR_11, &VAR_13, sizeof(VAR_13), VAR_9);
 if (VAR_17)
  goto ethtool_init_exit;

 VAR_14 = VAR_11->test_info;
 if (!VAR_14)
  VAR_14 = FUNC_4(sizeof(*VAR_11->test_info), VAR_8);
 if (!VAR_14)
  goto ethtool_init_exit;

 VAR_11->test_info = VAR_14;
 VAR_11->num_tests = VAR_12->num_tests + VAR_0;
 if (VAR_11->num_tests > VAR_5)
  VAR_11->num_tests = VAR_5;

 VAR_14->offline_mask = VAR_12->offline_tests;
 VAR_14->timeout = FUNC_5(VAR_12->test_timeout);
 if (!VAR_14->timeout)
  VAR_14->timeout = VAR_9;
 for (VAR_16 = 0; VAR_16 < VAR_11->num_tests; VAR_16++) {
  char *VAR_18 = VAR_14->string[VAR_16];
  char *VAR_19 = VAR_12->test0_name + VAR_16 * 32;

  if (VAR_16 == VAR_4) {
   FUNC_8(VAR_18, "Mac loopback test (offline)");
  } else if (VAR_16 == VAR_6) {
   FUNC_8(VAR_18, "Phy loopback test (offline)");
  } else if (VAR_16 == VAR_1) {
   FUNC_8(VAR_18, "Ext loopback test (offline)");
  } else if (VAR_16 == VAR_3) {
   FUNC_8(VAR_18, "Interrupt_test (offline)");
  } else {
   FUNC_9(VAR_18, VAR_19, VAR_7);
   FUNC_11(VAR_18, " test", VAR_7 - FUNC_10(VAR_18));
   if (VAR_14->offline_mask & (1 << VAR_16))
    FUNC_11(VAR_18, " (offline)",
     VAR_7 - FUNC_10(VAR_18));
   else
    FUNC_11(VAR_18, " (online)",
     VAR_7 - FUNC_10(VAR_18));
  }
 }

ethtool_init_exit:
 FUNC_7(&VAR_11->hwrm_cmd_lock);
}
