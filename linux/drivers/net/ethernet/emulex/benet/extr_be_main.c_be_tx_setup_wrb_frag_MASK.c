
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct be_queue_info {int dummy; } ;
struct be_tx_obj {struct be_queue_info q; } ;
struct be_eth_wrb {int dummy; } ;
typedef int dma_addr_t ;


 int FUNC_0 (struct be_queue_info*) ;
 struct be_eth_wrb* FUNC_1 (struct be_queue_info*) ;
 int FUNC_2 (struct be_eth_wrb*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct be_tx_obj *VAR_0, dma_addr_t VAR_1,
     int VAR_2)
{
 struct be_eth_wrb *VAR_3;
 struct be_queue_info *VAR_4 = &VAR_0->q;

 VAR_3 = FUNC_1(VAR_4);
 FUNC_2(VAR_3, VAR_1, VAR_2);
 FUNC_0(VAR_4);
}
