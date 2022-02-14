
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct ena_com_dev {int dummy; } ;
struct TYPE_3__ {int intr_delay_resolution; } ;
struct TYPE_4__ {TYPE_1__ intr_moderation; } ;
struct ena_admin_get_feat_resp {TYPE_2__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ena_com_dev*) ;
 int FUNC_1 (struct ena_com_dev*,struct ena_admin_get_feat_resp*,int ,int ) ;
 int FUNC_2 (struct ena_com_dev*,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,int) ;

int FUNC_5(struct ena_com_dev *VAR_2)
{
 struct ena_admin_get_feat_resp VAR_3;
 u16 VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_2, &VAR_3,
     VAR_0, 0);

 if (VAR_5) {
  if (VAR_5 == -VAR_1) {
   FUNC_3("Feature %d isn't supported\n",
     VAR_0);
   VAR_5 = 0;
  } else {
   FUNC_4("Failed to get interrupt moderation admin cmd. rc: %d\n",
          VAR_5);
  }


  FUNC_0(VAR_2);
  return VAR_5;
 }


 VAR_4 = VAR_3.u.intr_moderation.intr_delay_resolution;
 FUNC_2(VAR_2, VAR_4);


 FUNC_0(VAR_2);

 return 0;
}
