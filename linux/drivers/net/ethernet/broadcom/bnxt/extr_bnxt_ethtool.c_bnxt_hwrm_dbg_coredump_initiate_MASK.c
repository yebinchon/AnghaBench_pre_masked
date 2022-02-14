
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct hwrm_dbg_coredump_initiate_input {void* segment_id; void* component_id; int member_0; } ;
struct bnxt {int dummy; } ;
typedef int req ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bnxt*,struct hwrm_dbg_coredump_initiate_input*,int ,int,int) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct bnxt*,struct hwrm_dbg_coredump_initiate_input*,int,int ) ;

__attribute__((used)) static int FUNC_3(struct bnxt *VAR_2, u16 VAR_3,
        u16 VAR_4)
{
 struct hwrm_dbg_coredump_initiate_input VAR_5 = {0};

 FUNC_0(VAR_2, &VAR_5, VAR_1, -1, -1);
 VAR_5.component_id = FUNC_1(VAR_3);
 VAR_5.segment_id = FUNC_1(VAR_4);

 return FUNC_2(VAR_2, &VAR_5, sizeof(VAR_5), VAR_0);
}
