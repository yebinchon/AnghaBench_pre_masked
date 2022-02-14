
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxfw_mfa2_tlv_package_descriptor {int cb_archive_size; int cb_offset; int num_components; int num_devices; } ;
struct mlxfw_mfa2_tlv_multi {int dummy; } ;
struct mlxfw_mfa2_tlv {int dummy; } ;
struct mlxfw_mfa2_file {void* cb; int cb_archive_size; void* component_count; void* dev_count; int first_dev; int first_component; struct firmware const* fw; } ;
struct firmware {void* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mlxfw_mfa2_file* FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct mlxfw_mfa2_file* FUNC_4 (int,int,int ) ;
 int FUNC_5 (struct mlxfw_mfa2_file*) ;
 int FUNC_6 (struct mlxfw_mfa2_file*) ;
 int VAR_3 ;
 int FUNC_7 (struct mlxfw_mfa2_file*,int ,void*) ;
 struct mlxfw_mfa2_tlv* FUNC_8 (struct mlxfw_mfa2_file*,void const*) ;
 struct mlxfw_mfa2_tlv* FUNC_9 (struct mlxfw_mfa2_file*,struct mlxfw_mfa2_tlv_multi const*) ;
 struct mlxfw_mfa2_tlv_multi* FUNC_10 (struct mlxfw_mfa2_file*,struct mlxfw_mfa2_tlv const*) ;
 int FUNC_11 (struct mlxfw_mfa2_file*,struct mlxfw_mfa2_tlv const*) ;
 struct mlxfw_mfa2_tlv_package_descriptor* FUNC_12 (struct mlxfw_mfa2_file*,struct mlxfw_mfa2_tlv const*) ;
 int FUNC_13 (struct mlxfw_mfa2_file*,void const*) ;
 int FUNC_14 (char*) ;

struct mlxfw_mfa2_file *FUNC_15(const struct firmware *VAR_4)
{
 const struct mlxfw_mfa2_tlv_package_descriptor *VAR_5;
 const struct mlxfw_mfa2_tlv_multi *VAR_6;
 const struct mlxfw_mfa2_tlv *VAR_7;
 const struct mlxfw_mfa2_tlv *VAR_8;
 struct mlxfw_mfa2_file *VAR_9;
 const void *VAR_10;
 const void *VAR_11;

 VAR_9 = FUNC_4(1, sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return FUNC_0(-VAR_1);

 VAR_9->fw = VAR_4;
 VAR_10 = VAR_4->data + FUNC_1(VAR_3);
 VAR_8 = FUNC_8(VAR_9, VAR_10);
 if (!VAR_8) {
  FUNC_14("Could not parse package descriptor TLV\n");
  goto err_out;
 }

 VAR_6 = FUNC_10(VAR_9, VAR_8);
 if (!VAR_6) {
  FUNC_14("First TLV is not of valid multi type\n");
  goto err_out;
 }

 VAR_7 = FUNC_9(VAR_9, VAR_6);
 if (!VAR_7)
  goto err_out;

 VAR_5 = FUNC_12(VAR_9, VAR_7);
 if (!VAR_5) {
  FUNC_14("Could not parse package descriptor TLV\n");
  goto err_out;
 }

 VAR_9->first_dev = FUNC_11(VAR_9, VAR_8);
 if (!VAR_9->first_dev) {
  FUNC_14("First device TLV is not valid\n");
  goto err_out;
 }

 VAR_9->dev_count = FUNC_2(VAR_5->num_devices);
 VAR_9->first_component = FUNC_7(VAR_9,
           VAR_9->first_dev,
           VAR_9->dev_count);
 VAR_9->component_count = FUNC_2(VAR_5->num_components);
 VAR_9->cb = VAR_4->data + FUNC_1(FUNC_3(VAR_5->cb_offset));
 if (!FUNC_13(VAR_9, VAR_9->cb)) {
  FUNC_14("Component block is out side the file\n");
  goto err_out;
 }
 VAR_9->cb_archive_size = FUNC_3(VAR_5->cb_archive_size);
 VAR_11 = VAR_9->cb + VAR_9->cb_archive_size - 1;
 if (!FUNC_13(VAR_9, VAR_11)) {
  FUNC_14("Component block size is too big\n");
  goto err_out;
 }

 if (!FUNC_6(VAR_9))
  goto err_out;
 return VAR_9;
err_out:
 FUNC_5(VAR_9);
 return FUNC_0(-VAR_0);
}
