
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct utp_task_req_desc {int input_param1; int req_header; } ;
struct ufs_hba {int nutrs; int dev; struct utp_task_req_desc* utmrdl_base_addr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char const*,int *,int *) ;

__attribute__((used)) static void FUNC_2(struct ufs_hba *VAR_0, unsigned int VAR_1,
  const char *VAR_2)
{
 int VAR_3 = (int)VAR_1 - VAR_0->nutrs;
 struct utp_task_req_desc *VAR_4 = &VAR_0->utmrdl_base_addr[VAR_3];

 FUNC_1(FUNC_0(VAR_0->dev), VAR_2, &VAR_4->req_header,
   &VAR_4->input_param1);
}
