
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u8 ;
struct TYPE_6__ {int opcode; void* selector; void* index; void* idn; } ;
struct ufs_query_res {TYPE_3__ upiu_req; } ;
struct ufs_query_req {TYPE_3__ upiu_req; } ;
struct TYPE_4__ {struct ufs_query_res response; struct ufs_query_res request; } ;
struct TYPE_5__ {TYPE_1__ query; } ;
struct ufs_hba {TYPE_2__ dev_cmd; } ;
typedef enum query_opcode { ____Placeholder_query_opcode } query_opcode ;


 int FUNC_0 (struct ufs_query_res*,int ,int) ;

__attribute__((used)) static inline void FUNC_1(struct ufs_hba *VAR_0,
  struct ufs_query_req **VAR_1, struct ufs_query_res **VAR_2,
  enum query_opcode VAR_3, u8 VAR_4, u8 VAR_5, u8 VAR_6)
{
 *VAR_1 = &VAR_0->dev_cmd.query.request;
 *VAR_2 = &VAR_0->dev_cmd.query.response;
 FUNC_0(*VAR_1, 0, sizeof(struct ufs_query_req));
 FUNC_0(*VAR_2, 0, sizeof(struct ufs_query_res));
 (*VAR_1)->upiu_req.opcode = VAR_3;
 (*VAR_1)->upiu_req.idn = VAR_4;
 (*VAR_1)->upiu_req.index = VAR_5;
 (*VAR_1)->upiu_req.selector = VAR_6;
}
