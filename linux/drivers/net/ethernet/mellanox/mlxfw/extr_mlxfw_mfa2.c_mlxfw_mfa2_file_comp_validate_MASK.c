
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u16 ;
struct mlxfw_mfa2_tlv_multi {int dummy; } ;
struct mlxfw_mfa2_tlv_component_descriptor {int size; int cb_offset_l; int cb_offset_h; int identifier; } ;
struct mlxfw_mfa2_tlv {int dummy; } ;
struct mlxfw_mfa2_file {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct mlxfw_mfa2_tlv_component_descriptor* FUNC_2 (struct mlxfw_mfa2_file const*,struct mlxfw_mfa2_tlv const*) ;
 struct mlxfw_mfa2_tlv* FUNC_3 (struct mlxfw_mfa2_file const*,struct mlxfw_mfa2_tlv_multi const*) ;
 struct mlxfw_mfa2_tlv_multi* FUNC_4 (struct mlxfw_mfa2_file const*,struct mlxfw_mfa2_tlv const*) ;
 int FUNC_5 (struct mlxfw_mfa2_file const*,struct mlxfw_mfa2_tlv_multi const*) ;
 int FUNC_6 (char*,int,...) ;
 int FUNC_7 (char*,int ) ;

__attribute__((used)) static bool
FUNC_8(const struct mlxfw_mfa2_file *VAR_0,
         const struct mlxfw_mfa2_tlv *VAR_1,
         u16 VAR_2)
{
 const struct mlxfw_mfa2_tlv_component_descriptor *VAR_3;
 const struct mlxfw_mfa2_tlv_multi *VAR_4;
 const struct mlxfw_mfa2_tlv *VAR_5;

 FUNC_6("Component %d\n", VAR_2);

 VAR_4 = FUNC_4(VAR_0, VAR_1);
 if (!VAR_4) {
  FUNC_7("Component %d is not a valid TLV error\n", VAR_2);
  return 0;
 }

 if (!FUNC_5(VAR_0, VAR_4))
  return 0;


 VAR_5 = FUNC_3(VAR_0, VAR_4);
 if (!VAR_5) {
  FUNC_7("Component descriptor %d multi TLV error\n", VAR_2);
  return 0;
 }

 VAR_3 = FUNC_2(VAR_0, VAR_5);
 if (!VAR_3) {
  FUNC_7("Component %d does not have a valid descriptor\n",
         VAR_2);
  return 0;
 }
 FUNC_6("  -- Component type %d\n", FUNC_0(VAR_3->identifier));
 FUNC_6("  -- Offset 0x%llx and size %d\n",
   ((u64) FUNC_1(VAR_3->cb_offset_h) << 32)
   | FUNC_1(VAR_3->cb_offset_l), FUNC_1(VAR_3->size));

 return 1;
}
