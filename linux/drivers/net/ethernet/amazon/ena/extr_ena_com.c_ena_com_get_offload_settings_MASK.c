
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ena_com_dev {int dummy; } ;
struct TYPE_2__ {int offload; } ;
struct ena_admin_get_feat_resp {TYPE_1__ u; } ;
struct ena_admin_feature_offload_desc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ena_com_dev*,struct ena_admin_get_feat_resp*,int ,int ) ;
 int FUNC_1 (struct ena_admin_feature_offload_desc*,int *,int) ;
 int FUNC_2 (char*,int) ;
 scalar_t__ FUNC_3 (int) ;

int FUNC_4(struct ena_com_dev *VAR_1,
     struct ena_admin_feature_offload_desc *VAR_2)
{
 int VAR_3;
 struct ena_admin_get_feat_resp VAR_4;

 VAR_3 = FUNC_0(VAR_1, &VAR_4,
      VAR_0, 0);
 if (FUNC_3(VAR_3)) {
  FUNC_2("Failed to get offload capabilities %d\n", VAR_3);
  return VAR_3;
 }

 FUNC_1(VAR_2, &VAR_4.u.offload, sizeof(VAR_4.u.offload));

 return 0;
}
