
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_bc_trans {struct qlcnic_bc_trans* rsp_hdr; struct qlcnic_bc_trans* req_hdr; } ;


 int FUNC_0 (struct qlcnic_bc_trans*) ;

__attribute__((used)) static void FUNC_1(struct qlcnic_bc_trans *VAR_0)
{
 if (!VAR_0)
  return;
 FUNC_0(VAR_0->req_hdr);
 FUNC_0(VAR_0->rsp_hdr);
 FUNC_0(VAR_0);
}
