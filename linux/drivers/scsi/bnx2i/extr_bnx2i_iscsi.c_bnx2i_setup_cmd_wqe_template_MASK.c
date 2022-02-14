
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef void* u32 ;
struct TYPE_3__ {scalar_t__ bd_tbl_dma; } ;
struct TYPE_4__ {int op_code; void* bd_list_addr_hi; void* bd_list_addr_lo; } ;
struct bnx2i_cmd {TYPE_1__ io_tbl; TYPE_2__ req; } ;


 int FUNC_0 (TYPE_2__*,int,int) ;

__attribute__((used)) static void FUNC_1(struct bnx2i_cmd *VAR_0)
{
 FUNC_0(&VAR_0->req, 0x00, sizeof(VAR_0->req));
 VAR_0->req.op_code = 0xFF;
 VAR_0->req.bd_list_addr_lo = (u32) VAR_0->io_tbl.bd_tbl_dma;
 VAR_0->req.bd_list_addr_hi =
  (u32) ((u64) VAR_0->io_tbl.bd_tbl_dma >> 32);

}
