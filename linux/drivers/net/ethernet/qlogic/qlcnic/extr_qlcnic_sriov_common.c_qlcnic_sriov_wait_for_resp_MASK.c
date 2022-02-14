
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct completion {int dummy; } ;
struct qlcnic_bc_trans {int trans_state; struct completion resp_cmpl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct completion*,int ) ;

__attribute__((used)) static inline void FUNC_1(struct qlcnic_bc_trans *VAR_3)
{
 struct completion *VAR_4 = &VAR_3->resp_cmpl;

 if (FUNC_0(VAR_4, VAR_2))
  VAR_3->trans_state = VAR_1;
 else
  VAR_3->trans_state = VAR_0;

 return;
}
