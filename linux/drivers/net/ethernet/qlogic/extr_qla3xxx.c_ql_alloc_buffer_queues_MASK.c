
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ql_rcv_buf_cb {int dummy; } ;
struct ql3_adapter {int lrg_buf_q_size; int num_lbufq_entries; int lrg_buf_q_alloc_size; int small_buf_q_size; int small_buf_q_alloc_size; int flags; int small_buf_q_alloc_phy_addr; int small_buf_q_phy_addr; int * small_buf_q_alloc_virt_addr; int * small_buf_q_virt_addr; int lrg_buf_q_alloc_phy_addr; int * lrg_buf_q_alloc_virt_addr; int pdev; int ndev; int lrg_buf_q_phy_addr; int * lrg_buf_q_virt_addr; int * lrg_buf; int num_large_buffers; } ;
struct lrg_buf_q_entry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int ,char*) ;
 void* FUNC_2 (int ,int,int *) ;
 int FUNC_3 (int ,int,int *,int ) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct ql3_adapter *VAR_5)
{

 VAR_5->lrg_buf_q_size =
  VAR_5->num_lbufq_entries * sizeof(struct lrg_buf_q_entry);
 if (VAR_5->lrg_buf_q_size < VAR_3)
  VAR_5->lrg_buf_q_alloc_size = VAR_3;
 else
  VAR_5->lrg_buf_q_alloc_size = VAR_5->lrg_buf_q_size * 2;

 VAR_5->lrg_buf = FUNC_0(VAR_5->num_large_buffers,
          sizeof(struct ql_rcv_buf_cb),
          VAR_1);
 if (VAR_5->lrg_buf == ((void*)0))
  return -VAR_0;

 VAR_5->lrg_buf_q_alloc_virt_addr =
  FUNC_2(VAR_5->pdev,
         VAR_5->lrg_buf_q_alloc_size,
         &VAR_5->lrg_buf_q_alloc_phy_addr);

 if (VAR_5->lrg_buf_q_alloc_virt_addr == ((void*)0)) {
  FUNC_1(VAR_5->ndev, "lBufQ failed\n");
  return -VAR_0;
 }
 VAR_5->lrg_buf_q_virt_addr = VAR_5->lrg_buf_q_alloc_virt_addr;
 VAR_5->lrg_buf_q_phy_addr = VAR_5->lrg_buf_q_alloc_phy_addr;


 VAR_5->small_buf_q_size =
  VAR_2 * sizeof(struct lrg_buf_q_entry);
 if (VAR_5->small_buf_q_size < VAR_3)
  VAR_5->small_buf_q_alloc_size = VAR_3;
 else
  VAR_5->small_buf_q_alloc_size = VAR_5->small_buf_q_size * 2;

 VAR_5->small_buf_q_alloc_virt_addr =
  FUNC_2(VAR_5->pdev,
         VAR_5->small_buf_q_alloc_size,
         &VAR_5->small_buf_q_alloc_phy_addr);

 if (VAR_5->small_buf_q_alloc_virt_addr == ((void*)0)) {
  FUNC_1(VAR_5->ndev, "Small Buffer Queue allocation failed\n");
  FUNC_3(VAR_5->pdev, VAR_5->lrg_buf_q_alloc_size,
        VAR_5->lrg_buf_q_alloc_virt_addr,
        VAR_5->lrg_buf_q_alloc_phy_addr);
  return -VAR_0;
 }

 VAR_5->small_buf_q_virt_addr = VAR_5->small_buf_q_alloc_virt_addr;
 VAR_5->small_buf_q_phy_addr = VAR_5->small_buf_q_alloc_phy_addr;
 FUNC_4(VAR_4, &VAR_5->flags);
 return 0;
}
