
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hinic_ctrl {int ctrl_info; } ;
struct hinic_cmdq_wqe_scmd {struct hinic_ctrl ctrl; } ;
struct hinic_cmdq_direct_wqe {struct hinic_cmdq_wqe_scmd wqe_scmd; } ;
struct hinic_cmdq_wqe {struct hinic_cmdq_direct_wqe direct_wqe; } ;
struct hinic_cmdq {int wq; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct hinic_cmdq*,struct hinic_cmdq_wqe*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct hinic_cmdq *VAR_2,
    struct hinic_cmdq_wqe *VAR_3)
{
 struct hinic_cmdq_direct_wqe *VAR_4 = &VAR_3->direct_wqe;
 struct hinic_cmdq_wqe_scmd *VAR_5;
 struct hinic_ctrl *VAR_6;
 u32 VAR_7;

 VAR_5 = &VAR_4->wqe_scmd;
 VAR_6 = &VAR_5->ctrl;
 VAR_7 = FUNC_1(VAR_6->ctrl_info);


 if (!FUNC_0(VAR_7))
  return -VAR_0;

 FUNC_2(VAR_2, VAR_3);

 FUNC_3(VAR_2->wq, VAR_1);
 return 0;
}
