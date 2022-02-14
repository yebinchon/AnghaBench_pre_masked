
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct hinic_status {int status_info; } ;
struct hinic_ctrl {int ctrl_info; } ;
struct hinic_cmdq_wqe_lcmd {struct hinic_ctrl ctrl; struct hinic_status status; } ;
struct hinic_cmdq_wqe {struct hinic_cmdq_wqe_lcmd wqe_lcmd; } ;
struct hinic_cmdq {int wq; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct hinic_cmdq*,struct hinic_cmdq_wqe*) ;
 int FUNC_4 (struct hinic_cmdq*,int ,int) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct hinic_cmdq *VAR_3, u16 VAR_4,
    struct hinic_cmdq_wqe *VAR_5)
{
 struct hinic_cmdq_wqe_lcmd *VAR_6 = &VAR_5->wqe_lcmd;
 struct hinic_status *VAR_7 = &VAR_6->status;
 struct hinic_ctrl *VAR_8 = &VAR_6->ctrl;
 int VAR_9;

 if (!FUNC_0(FUNC_2(VAR_8->ctrl_info)))
  return -VAR_0;

 VAR_9 = FUNC_1(FUNC_2(VAR_7->status_info), VAR_1);

 FUNC_4(VAR_3, VAR_4, VAR_9);

 FUNC_3(VAR_3, VAR_5);
 FUNC_5(VAR_3->wq, VAR_2);
 return 0;
}
