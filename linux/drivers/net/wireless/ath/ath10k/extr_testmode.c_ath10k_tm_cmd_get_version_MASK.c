
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct TYPE_4__ {int wmi_op_version; } ;
struct TYPE_5__ {TYPE_1__ fw_file; } ;
struct ath10k {TYPE_2__ normal_mode_fw; TYPE_3__* hw; } ;
struct TYPE_6__ {int wiphy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ath10k*,int ,char*,int ,int ) ;
 struct sk_buff* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,int ,int ) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct ath10k *VAR_7, struct nlattr *VAR_8[])
{
 struct sk_buff *VAR_9;
 int VAR_10;

 FUNC_0(VAR_7, VAR_0,
     "testmode cmd get version_major %d version_minor %d\n",
     VAR_1,
     VAR_2);

 VAR_9 = FUNC_1(VAR_7->hw->wiphy,
      FUNC_5(sizeof(u32)));
 if (!VAR_9)
  return -VAR_6;

 VAR_10 = FUNC_4(VAR_9, VAR_3,
     VAR_1);
 if (VAR_10) {
  FUNC_3(VAR_9);
  return VAR_10;
 }

 VAR_10 = FUNC_4(VAR_9, VAR_4,
     VAR_2);
 if (VAR_10) {
  FUNC_3(VAR_9);
  return VAR_10;
 }

 VAR_10 = FUNC_4(VAR_9, VAR_5,
     VAR_7->normal_mode_fw.fw_file.wmi_op_version);
 if (VAR_10) {
  FUNC_3(VAR_9);
  return VAR_10;
 }

 return FUNC_2(VAR_9);
}
