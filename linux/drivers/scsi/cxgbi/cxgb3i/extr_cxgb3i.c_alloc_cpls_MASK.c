
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxgbi_sock {void* cpl_abort_rpl; void* cpl_abort_req; void* cpl_close; } ;
struct cpl_close_con_req {int dummy; } ;
struct cpl_abort_rpl {int dummy; } ;
struct cpl_abort_req {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int,int ,int ) ;
 int FUNC_1 (struct cxgbi_sock*) ;

__attribute__((used)) static int FUNC_2(struct cxgbi_sock *VAR_2)
{
 VAR_2->cpl_close = FUNC_0(sizeof(struct cpl_close_con_req), 0,
     VAR_1);
 if (!VAR_2->cpl_close)
  return -VAR_0;
 VAR_2->cpl_abort_req = FUNC_0(sizeof(struct cpl_abort_req), 0,
     VAR_1);
 if (!VAR_2->cpl_abort_req)
  goto free_cpl_skbs;

 VAR_2->cpl_abort_rpl = FUNC_0(sizeof(struct cpl_abort_rpl), 0,
     VAR_1);
 if (!VAR_2->cpl_abort_rpl)
  goto free_cpl_skbs;

 return 0;

free_cpl_skbs:
 FUNC_1(VAR_2);
 return -VAR_0;
}
