
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ql3_adapter {int small_buf_total_size; int flags; scalar_t__ small_buf_index; scalar_t__ small_buf_phy_addr_low; scalar_t__ small_buf_phy_addr_high; struct bufq_addr_element* small_buf_q_virt_addr; int small_buf_phy_addr; int ndev; int * small_buf_virt_addr; int pdev; } ;
struct bufq_addr_element {void* addr_low; void* addr_high; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,char*) ;
 int * FUNC_4 (int ,int,int *) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct ql3_adapter *VAR_5)
{
 int VAR_6;
 struct bufq_addr_element *VAR_7;


 VAR_5->small_buf_total_size =
  (VAR_2 * VAR_1 *
   VAR_4);

 VAR_5->small_buf_virt_addr =
  FUNC_4(VAR_5->pdev,
         VAR_5->small_buf_total_size,
         &VAR_5->small_buf_phy_addr);

 if (VAR_5->small_buf_virt_addr == ((void*)0)) {
  FUNC_3(VAR_5->ndev, "Failed to get small buffer memory\n");
  return -VAR_0;
 }

 VAR_5->small_buf_phy_addr_low = FUNC_0(VAR_5->small_buf_phy_addr);
 VAR_5->small_buf_phy_addr_high = FUNC_1(VAR_5->small_buf_phy_addr);

 VAR_7 = VAR_5->small_buf_q_virt_addr;


 for (VAR_6 = 0; VAR_6 < (VAR_2 * VAR_1); VAR_6++) {
  VAR_7->addr_high =
      FUNC_2(VAR_5->small_buf_phy_addr_high);
  VAR_7->addr_low =
      FUNC_2(VAR_5->small_buf_phy_addr_low +
    (VAR_6 * VAR_4));
  VAR_7++;
 }
 VAR_5->small_buf_index = 0;
 FUNC_5(VAR_3, &VAR_5->flags);
 return 0;
}
