
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_hbm_cl_cmd {int dummy; } ;
struct hbm_notification_response {int start; } ;
typedef enum mei_cb_file_ops { ____Placeholder_mei_cb_file_ops } mei_cb_file_ops ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline enum mei_cb_file_ops FUNC_1(struct mei_hbm_cl_cmd *VAR_0)
{
 struct hbm_notification_response *VAR_1 =
  (struct hbm_notification_response *)VAR_0;

 return FUNC_0(VAR_1->start);
}
