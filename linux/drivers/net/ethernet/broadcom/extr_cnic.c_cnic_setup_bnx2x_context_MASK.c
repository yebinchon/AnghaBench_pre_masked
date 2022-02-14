
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct cnic_local {int ctx_blks; int ctx_align; struct cnic_ctx* ctx_arr; struct cnic_eth_dev* ethdev; } ;
struct cnic_eth_dev {scalar_t__ ctx_tbl_offset; } ;
struct cnic_dev {struct cnic_local* cnic_priv; } ;
struct cnic_ctx {unsigned long mapping; } ;
typedef unsigned long dma_addr_t ;


 int FUNC_0 (struct cnic_dev*,scalar_t__,unsigned long) ;

__attribute__((used)) static void FUNC_1(struct cnic_dev *VAR_0)
{
 struct cnic_local *VAR_1 = VAR_0->cnic_priv;
 struct cnic_eth_dev *VAR_2 = VAR_1->ethdev;
 u32 VAR_3 = VAR_2->ctx_tbl_offset;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1->ctx_blks; VAR_4++) {
  struct cnic_ctx *VAR_5 = &VAR_1->ctx_arr[VAR_4];
  dma_addr_t VAR_6 = VAR_5->mapping;

  if (VAR_1->ctx_align) {
   unsigned long VAR_7 = VAR_1->ctx_align - 1;

   VAR_6 = (VAR_6 + VAR_7) & ~VAR_7;
  }

  FUNC_0(VAR_0, VAR_3 + VAR_4, VAR_6);
 }
}
