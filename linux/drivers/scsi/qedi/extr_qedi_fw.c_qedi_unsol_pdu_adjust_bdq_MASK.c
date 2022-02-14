
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct qedi_ctx {int dbg_ctx; } ;
struct iscsi_cqe_unsolicited {int dummy; } ;


 int FUNC_0 (int *,int ,char*,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (struct qedi_ctx*,struct iscsi_cqe_unsolicited*,char*,scalar_t__) ;
 int FUNC_2 (struct qedi_ctx*,struct iscsi_cqe_unsolicited*,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct qedi_ctx *VAR_1,
          struct iscsi_cqe_unsolicited *VAR_2,
          u32 VAR_3, u32 VAR_4,
          char *VAR_5)
{
 FUNC_0(&VAR_1->dbg_ctx, VAR_0,
    "num_bdqs [%d]\n", VAR_4);

 FUNC_1(VAR_1, VAR_2, VAR_5, VAR_3);
 FUNC_2(VAR_1, VAR_2, (VAR_4 + 1));
}
