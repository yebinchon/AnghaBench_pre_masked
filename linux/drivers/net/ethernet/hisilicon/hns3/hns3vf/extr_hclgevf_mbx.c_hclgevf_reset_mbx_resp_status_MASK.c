
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int received_resp; int additional_info; scalar_t__ resp_status; scalar_t__ origin_mbx_msg; } ;
struct hclgevf_dev {TYPE_1__ mbx_resp; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct hclgevf_dev *VAR_1)
{



 VAR_1->mbx_resp.received_resp = 0;
 VAR_1->mbx_resp.origin_mbx_msg = 0;
 VAR_1->mbx_resp.resp_status = 0;
 FUNC_0(VAR_1->mbx_resp.additional_info, 0, VAR_0);
}
