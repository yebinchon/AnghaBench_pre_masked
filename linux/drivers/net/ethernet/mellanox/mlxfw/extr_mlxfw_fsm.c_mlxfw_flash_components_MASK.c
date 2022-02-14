
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct netlink_ext_ack {int dummy; } ;
struct mlxfw_mfa2_file {int dummy; } ;
struct mlxfw_mfa2_component {int index; } ;
struct mlxfw_dev {int psid_size; int psid; } ;


 scalar_t__ FUNC_0 (struct mlxfw_mfa2_component*) ;
 int FUNC_1 (struct netlink_ext_ack*,char*) ;
 int FUNC_2 (struct mlxfw_mfa2_component*) ;
 int FUNC_3 (struct mlxfw_dev*,int,struct mlxfw_mfa2_component*,struct netlink_ext_ack*) ;
 int FUNC_4 (struct mlxfw_mfa2_file*,int ,int ,int*) ;
 struct mlxfw_mfa2_component* FUNC_5 (struct mlxfw_mfa2_file*,int ,int ,int) ;
 int FUNC_6 (struct mlxfw_mfa2_component*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,int ) ;

__attribute__((used)) static int FUNC_9(struct mlxfw_dev *VAR_0, u32 VAR_1,
      struct mlxfw_mfa2_file *VAR_2,
      struct netlink_ext_ack *VAR_3)
{
 u32 VAR_4;
 int VAR_5;
 int VAR_6;

 VAR_5 = FUNC_4(VAR_2, VAR_0->psid,
           VAR_0->psid_size,
           &VAR_4);
 if (VAR_5) {
  FUNC_7("Could not find device PSID in MFA2 file\n");
  FUNC_1(VAR_3, "Could not find device PSID in MFA2 file");
  return VAR_5;
 }

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  struct mlxfw_mfa2_component *VAR_7;

  VAR_7 = FUNC_5(VAR_2, VAR_0->psid,
           VAR_0->psid_size, VAR_6);
  if (FUNC_0(VAR_7))
   return FUNC_2(VAR_7);

  FUNC_8("Flashing component type %d\n", VAR_7->index);
  VAR_5 = FUNC_3(VAR_0, VAR_1, VAR_7, VAR_3);
  FUNC_6(VAR_7);
  if (VAR_5)
   return VAR_5;
 }
 return 0;
}
