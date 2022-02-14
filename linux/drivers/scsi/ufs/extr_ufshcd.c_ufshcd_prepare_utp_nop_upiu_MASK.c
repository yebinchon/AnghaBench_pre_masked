
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct utp_upiu_rsp {int dummy; } ;
struct TYPE_2__ {scalar_t__ dword_2; scalar_t__ dword_1; int dword_0; } ;
struct utp_upiu_req {TYPE_1__ header; } ;
struct ufshcd_lrb {struct utp_upiu_req* ucd_rsp_ptr; int task_tag; struct utp_upiu_req* ucd_req_ptr; } ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct utp_upiu_req*,int ,int) ;

__attribute__((used)) static inline void FUNC_2(struct ufshcd_lrb *VAR_1)
{
 struct utp_upiu_req *VAR_2 = VAR_1->ucd_req_ptr;

 FUNC_1(VAR_2, 0, sizeof(struct utp_upiu_req));


 VAR_2->header.dword_0 =
  FUNC_0(
   VAR_0, 0, 0, VAR_1->task_tag);

 VAR_2->header.dword_1 = 0;
 VAR_2->header.dword_2 = 0;

 FUNC_1(VAR_1->ucd_rsp_ptr, 0, sizeof(struct utp_upiu_rsp));
}
