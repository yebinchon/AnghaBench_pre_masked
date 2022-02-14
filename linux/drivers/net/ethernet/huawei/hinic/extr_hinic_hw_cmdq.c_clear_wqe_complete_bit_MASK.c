
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct hinic_ctrl {scalar_t__ ctrl_info; } ;
struct hinic_cmdq_wqe_scmd {struct hinic_ctrl ctrl; } ;
struct hinic_cmdq_wqe_lcmd {struct hinic_ctrl ctrl; } ;
struct hinic_cmdq_direct_wqe {struct hinic_cmdq_wqe_scmd wqe_scmd; } ;
struct hinic_cmdq_wqe {struct hinic_cmdq_direct_wqe direct_wqe; struct hinic_cmdq_wqe_lcmd wqe_lcmd; } ;
struct hinic_cmdq {int dummy; } ;
struct TYPE_2__ {int header_info; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct hinic_cmdq_wqe*) ;
 unsigned int FUNC_1 (int ,int ) ;
 unsigned int VAR_1 ;
 int FUNC_2 (int ) ;
 unsigned int FUNC_3 (unsigned int) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct hinic_cmdq *VAR_2,
       struct hinic_cmdq_wqe *VAR_3)
{
 u32 VAR_4 = FUNC_2(FUNC_0(VAR_3)->header_info);
 unsigned int VAR_5, VAR_6;
 struct hinic_ctrl *VAR_7;

 VAR_5 = FUNC_1(VAR_4, VAR_0);
 VAR_6 = FUNC_3(VAR_5);
 if (VAR_6 == VAR_1) {
  struct hinic_cmdq_wqe_lcmd *VAR_8 = &VAR_3->wqe_lcmd;

  VAR_7 = &VAR_8->ctrl;
 } else {
  struct hinic_cmdq_direct_wqe *VAR_9 = &VAR_3->direct_wqe;
  struct hinic_cmdq_wqe_scmd *VAR_10;

  VAR_10 = &VAR_9->wqe_scmd;
  VAR_7 = &VAR_10->ctrl;
 }


 VAR_7->ctrl_info = 0;

 FUNC_4();
}
