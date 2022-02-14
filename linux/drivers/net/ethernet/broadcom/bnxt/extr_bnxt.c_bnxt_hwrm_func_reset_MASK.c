
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hwrm_func_reset_input {scalar_t__ enables; int member_0; } ;
struct bnxt {int dummy; } ;
typedef int req ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bnxt*,struct hwrm_func_reset_input*,int ,int,int) ;
 int FUNC_1 (struct bnxt*,struct hwrm_func_reset_input*,int,int ) ;

__attribute__((used)) static int FUNC_2(struct bnxt *VAR_2)
{
 struct hwrm_func_reset_input VAR_3 = {0};

 FUNC_0(VAR_2, &VAR_3, VAR_0, -1, -1);
 VAR_3.enables = 0;

 return FUNC_1(VAR_2, &VAR_3, sizeof(VAR_3), VAR_1);
}
