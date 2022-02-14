
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int * base_buffer; } ;
struct TYPE_5__ {int * virt_addr; int phys_addr; } ;
struct ena_com_io_sq {size_t desc_entry_size; size_t q_depth; TYPE_3__ bounce_buf_ctrl; TYPE_2__ desc_addr; } ;
struct TYPE_4__ {int * virt_addr; int phys_addr; } ;
struct ena_com_io_cq {size_t cdesc_entry_size_in_bytes; size_t q_depth; TYPE_1__ cdesc_addr; } ;
struct ena_com_dev {int dmadev; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,size_t,int *,int ) ;

__attribute__((used)) static void FUNC_2(struct ena_com_dev *VAR_0,
      struct ena_com_io_sq *VAR_1,
      struct ena_com_io_cq *VAR_2)
{
 size_t VAR_3;

 if (VAR_2->cdesc_addr.virt_addr) {
  VAR_3 = VAR_2->cdesc_entry_size_in_bytes * VAR_2->q_depth;

  FUNC_1(VAR_0->dmadev, VAR_3,
      VAR_2->cdesc_addr.virt_addr,
      VAR_2->cdesc_addr.phys_addr);

  VAR_2->cdesc_addr.virt_addr = ((void*)0);
 }

 if (VAR_1->desc_addr.virt_addr) {
  VAR_3 = VAR_1->desc_entry_size * VAR_1->q_depth;

  FUNC_1(VAR_0->dmadev, VAR_3,
      VAR_1->desc_addr.virt_addr,
      VAR_1->desc_addr.phys_addr);

  VAR_1->desc_addr.virt_addr = ((void*)0);
 }

 if (VAR_1->bounce_buf_ctrl.base_buffer) {
  FUNC_0(VAR_0->dmadev, VAR_1->bounce_buf_ctrl.base_buffer);
  VAR_1->bounce_buf_ctrl.base_buffer = ((void*)0);
 }
}
