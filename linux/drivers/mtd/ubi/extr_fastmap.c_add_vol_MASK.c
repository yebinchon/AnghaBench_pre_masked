
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct ubi_attach_info {int dummy; } ;
struct ubi_ainf_volume {int data_pad; int last_data_size; scalar_t__ vol_type; int used_ebs; scalar_t__ compat; } ;


 scalar_t__ FUNC_0 (struct ubi_ainf_volume*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,int) ;
 struct ubi_ainf_volume* FUNC_2 (struct ubi_attach_info*,int) ;

__attribute__((used)) static struct ubi_ainf_volume *FUNC_3(struct ubi_attach_info *VAR_1, int VAR_2,
           int VAR_3, int VAR_4, u8 VAR_5,
           int VAR_6)
{
 struct ubi_ainf_volume *VAR_7;

 VAR_7 = FUNC_2(VAR_1, VAR_2);
 if (FUNC_0(VAR_7))
  return VAR_7;

 VAR_7->data_pad = VAR_4;
 VAR_7->last_data_size = VAR_6;
 VAR_7->compat = 0;
 VAR_7->vol_type = VAR_5;
 if (VAR_7->vol_type == VAR_0)
  VAR_7->used_ebs = VAR_3;

 FUNC_1("found volume (ID %i)", VAR_2);
 return VAR_7;
}
