
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ql3_adapter {int req_q_size; int rsp_q_size; int flags; int req_q_phy_addr; int * req_q_virt_addr; int pdev; int ndev; int rsp_q_phy_addr; int * rsp_q_virt_addr; } ;
struct ob_mac_iocb_req {int dummy; } ;
struct net_rsp_iocb {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*) ;
 void* FUNC_2 (int ,size_t,int *) ;
 int FUNC_3 (int ,size_t,int *,int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct ql3_adapter *VAR_4)
{
 VAR_4->req_q_size =
     (u32) (VAR_1 * sizeof(struct ob_mac_iocb_req));

 VAR_4->rsp_q_size = VAR_2 * sizeof(struct net_rsp_iocb);




 FUNC_5();

 VAR_4->req_q_virt_addr =
     FUNC_2(VAR_4->pdev,
     (size_t) VAR_4->req_q_size,
     &VAR_4->req_q_phy_addr);

 if ((VAR_4->req_q_virt_addr == ((void*)0)) ||
     FUNC_0(VAR_4->req_q_phy_addr) & (VAR_4->req_q_size - 1)) {
  FUNC_1(VAR_4->ndev, "reqQ failed\n");
  return -VAR_0;
 }

 VAR_4->rsp_q_virt_addr =
     FUNC_2(VAR_4->pdev,
     (size_t) VAR_4->rsp_q_size,
     &VAR_4->rsp_q_phy_addr);

 if ((VAR_4->rsp_q_virt_addr == ((void*)0)) ||
     FUNC_0(VAR_4->rsp_q_phy_addr) & (VAR_4->rsp_q_size - 1)) {
  FUNC_1(VAR_4->ndev, "rspQ allocation failed\n");
  FUNC_3(VAR_4->pdev, (size_t) VAR_4->req_q_size,
        VAR_4->req_q_virt_addr,
        VAR_4->req_q_phy_addr);
  return -VAR_0;
 }

 FUNC_4(VAR_3, &VAR_4->flags);

 return 0;
}
