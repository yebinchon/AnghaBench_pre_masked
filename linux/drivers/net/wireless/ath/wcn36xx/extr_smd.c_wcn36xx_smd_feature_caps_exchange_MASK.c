
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; } ;
struct wcn36xx_hal_feat_caps_msg {int * feat_caps; TYPE_1__ header; } ;
struct wcn36xx {int hal_rsp_len; int hal_mutex; int * fw_feat_caps; scalar_t__ hal_buf; } ;


 int FUNC_0 (struct wcn36xx_hal_feat_caps_msg,int ) ;
 int FUNC_1 (scalar_t__,struct wcn36xx_hal_feat_caps_msg) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct wcn36xx*,int ) ;

int FUNC_7(struct wcn36xx *VAR_3)
{
 struct wcn36xx_hal_feat_caps_msg VAR_4, *VAR_5;
 int VAR_6, VAR_7;

 FUNC_2(&VAR_3->hal_mutex);
 FUNC_0(VAR_4, VAR_2);

 FUNC_4(VAR_4.feat_caps, VAR_0);

 FUNC_1(VAR_3->hal_buf, VAR_4);

 VAR_6 = FUNC_6(VAR_3, VAR_4.header.len);
 if (VAR_6) {
  FUNC_5("Sending hal_feature_caps_exchange failed\n");
  goto out;
 }
 if (VAR_3->hal_rsp_len != sizeof(*VAR_5)) {
  FUNC_5("Invalid hal_feature_caps_exchange response");
  goto out;
 }

 VAR_5 = (struct wcn36xx_hal_feat_caps_msg *) VAR_3->hal_buf;

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
  VAR_3->fw_feat_caps[VAR_7] = VAR_5->feat_caps[VAR_7];
out:
 FUNC_3(&VAR_3->hal_mutex);
 return VAR_6;
}
