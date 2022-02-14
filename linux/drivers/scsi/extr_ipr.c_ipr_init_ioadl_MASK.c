
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct ipr_ioadl_desc {void* address; void* flags_and_data_len; } ;
struct ipr_ioadl64_desc {int address; void* data_len; void* flags; } ;
struct TYPE_6__ {void* data_transfer_length; void* ioadl_len; void* read_data_transfer_length; void* read_ioadl_len; } ;
struct TYPE_4__ {struct ipr_ioadl64_desc* ioadl64; struct ipr_ioadl_desc* ioadl; } ;
struct ipr_cmnd {int dma_use_sg; TYPE_3__ ioarcb; TYPE_2__* ioa_cfg; TYPE_1__ i; } ;
typedef int dma_addr_t ;
struct TYPE_5__ {scalar_t__ sis64; } ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct ipr_cmnd *VAR_1, dma_addr_t VAR_2,
      u32 VAR_3, int VAR_4)
{
 struct ipr_ioadl_desc *VAR_5 = VAR_1->i.ioadl;
 struct ipr_ioadl64_desc *VAR_6 = VAR_1->i.ioadl64;

 VAR_1->dma_use_sg = 1;

 if (VAR_1->ioa_cfg->sis64) {
  VAR_6->flags = FUNC_0(VAR_4);
  VAR_6->data_len = FUNC_0(VAR_3);
  VAR_6->address = FUNC_1(VAR_2);

  VAR_1->ioarcb.ioadl_len =
          FUNC_0(sizeof(struct ipr_ioadl64_desc));
  VAR_1->ioarcb.data_transfer_length = FUNC_0(VAR_3);
 } else {
  VAR_5->flags_and_data_len = FUNC_0(VAR_4 | VAR_3);
  VAR_5->address = FUNC_0(VAR_2);

  if (VAR_4 == VAR_0) {
   VAR_1->ioarcb.read_ioadl_len =
    FUNC_0(sizeof(struct ipr_ioadl_desc));
   VAR_1->ioarcb.read_data_transfer_length = FUNC_0(VAR_3);
  } else {
   VAR_1->ioarcb.ioadl_len =
           FUNC_0(sizeof(struct ipr_ioadl_desc));
   VAR_1->ioarcb.data_transfer_length = FUNC_0(VAR_3);
  }
 }
}
