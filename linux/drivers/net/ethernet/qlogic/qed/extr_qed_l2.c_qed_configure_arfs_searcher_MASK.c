
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_hwfn {int p_arfs_ptt; } ;
struct qed_dev {int dummy; } ;
struct qed_arfs_config_params {int tcp; int udp; int ipv4; int ipv6; int mode; } ;
typedef enum qed_filter_config_mode { ____Placeholder_qed_filter_config_mode } qed_filter_config_mode ;
typedef int arfs_config_params ;


 struct qed_hwfn* FUNC_0 (struct qed_dev*) ;
 int FUNC_1 (struct qed_arfs_config_params*,int ,int) ;
 int FUNC_2 (struct qed_hwfn*,int ,struct qed_arfs_config_params*) ;

__attribute__((used)) static int FUNC_3(struct qed_dev *VAR_0,
           enum qed_filter_config_mode VAR_1)
{
 struct qed_hwfn *VAR_2 = FUNC_0(VAR_0);
 struct qed_arfs_config_params VAR_3;

 FUNC_1(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.tcp = 1;
 VAR_3.udp = 1;
 VAR_3.ipv4 = 1;
 VAR_3.ipv6 = 1;
 VAR_3.mode = VAR_1;
 FUNC_2(VAR_2, VAR_2->p_arfs_ptt,
    &VAR_3);
 return 0;
}
