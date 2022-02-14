
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iscsi_tm_rsp {scalar_t__ response; } ;
struct iscsi_hdr {int statsn; } ;
struct iscsi_conn {scalar_t__ tmf_state; int ehwait; int tmfrsp_pdus_cnt; scalar_t__ exp_statsn; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct iscsi_conn *VAR_6, struct iscsi_hdr *VAR_7)
{
 struct iscsi_tm_rsp *VAR_8 = (struct iscsi_tm_rsp *)VAR_7;

 VAR_6->exp_statsn = FUNC_0(VAR_7->statsn) + 1;
 VAR_6->tmfrsp_pdus_cnt++;

 if (VAR_6->tmf_state != VAR_4)
  return;

 if (VAR_8->response == VAR_0)
  VAR_6->tmf_state = VAR_5;
 else if (VAR_8->response == VAR_1)
  VAR_6->tmf_state = VAR_3;
 else
  VAR_6->tmf_state = VAR_2;
 FUNC_1(&VAR_6->ehwait);
}
