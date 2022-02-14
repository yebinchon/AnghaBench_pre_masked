
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {struct hpt_iop_request_set_config* req_virt; } ;
struct TYPE_8__ {TYPE_2__ internal_req; } ;
struct TYPE_7__ {TYPE_4__ mvfrey; } ;
struct hptiop_hba {TYPE_3__ u; } ;
struct TYPE_5__ {scalar_t__ context_hi32; void* context; void* result; void* size; void* type; void* flags; } ;
struct hpt_iop_request_set_config {TYPE_1__ header; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (struct hptiop_hba*,int ,int) ;
 int FUNC_3 (struct hpt_iop_request_set_config*,struct hpt_iop_request_set_config*,int) ;

__attribute__((used)) static int FUNC_4(struct hptiop_hba *VAR_3,
    struct hpt_iop_request_set_config *VAR_4)
{
 struct hpt_iop_request_set_config *VAR_5 =
  VAR_3->u.mvfrey.internal_req.req_virt;

 FUNC_3(VAR_5, VAR_4, sizeof(struct hpt_iop_request_set_config));
 VAR_5->header.flags = FUNC_0(VAR_0);
 VAR_5->header.type = FUNC_0(VAR_1);
 VAR_5->header.size =
  FUNC_0(sizeof(struct hpt_iop_request_set_config));
 VAR_5->header.result = FUNC_0(VAR_2);
 VAR_5->header.context = FUNC_0(VAR_1<<5);
 VAR_5->header.context_hi32 = 0;

 if (FUNC_2(VAR_3, 0, 20000)) {
  FUNC_1("Set config send cmd failed\n");
  return -1;
 }

 return 0;
}
