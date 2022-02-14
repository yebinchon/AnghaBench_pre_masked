
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct hclgevf_mbx_resp_status {int origin_mbx_msg; int resp_status; int * additional_info; int received_resp; } ;
struct hclgevf_dev {TYPE_1__* pdev; struct hclgevf_mbx_resp_status mbx_resp; int state; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *,char*,scalar_t__,scalar_t__,...) ;
 int FUNC_1 (struct hclgevf_dev*) ;
 int FUNC_2 (int *,int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct hclgevf_dev *VAR_6, u16 VAR_7, u16 VAR_8,
    u8 *VAR_9, u16 VAR_10)
{


 struct hclgevf_mbx_resp_status *VAR_11;
 u16 VAR_12, VAR_13;
 int VAR_14 = 0;

 if (VAR_10 > VAR_5) {
  FUNC_0(&VAR_6->pdev->dev,
   "VF mbx response len(=%d) exceeds maximum(=%d)\n",
   VAR_10,
   VAR_5);
  return -VAR_0;
 }

 while ((!VAR_6->mbx_resp.received_resp) && (VAR_14 < 500)) {
  if (FUNC_3(VAR_4, &VAR_6->state))
   return -VAR_1;

  FUNC_4(1000, 1000 * 2);
  VAR_14++;
 }

 if (VAR_14 >= 500) {
  FUNC_0(&VAR_6->pdev->dev,
   "VF could not get mbx(%d,%d) resp(=%d) from PF in %d tries\n",
   VAR_7, VAR_8, VAR_6->mbx_resp.received_resp, VAR_14);
  return -VAR_1;
 }

 VAR_11 = &VAR_6->mbx_resp;
 VAR_12 = (u16)(VAR_11->origin_mbx_msg >> 16);
 VAR_13 = (u16)(VAR_11->origin_mbx_msg & 0xff);

 if (VAR_11->resp_status)
  return VAR_11->resp_status;

 if (VAR_9)
  FUNC_2(VAR_9, &VAR_11->additional_info[0], VAR_10);

 FUNC_1(VAR_6);

 if (!(VAR_12 == VAR_7 && VAR_13 == VAR_8 && !VAR_11->resp_status)) {
  FUNC_0(&VAR_6->pdev->dev,
   "VF could not match resp code(code0=%d,code1=%d), %d\n",
   VAR_7, VAR_8, VAR_11->resp_status);
  FUNC_0(&VAR_6->pdev->dev,
   "VF could not match resp r_code(r_code0=%d,r_code1=%d)\n",
   VAR_12, VAR_13);
  return -VAR_1;
 }

 return 0;
}
