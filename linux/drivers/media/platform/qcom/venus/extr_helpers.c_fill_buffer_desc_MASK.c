
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venus_buffer {int dma_addr; int size; } ;
struct hfi_buffer_desc {int num_buffers; int response_required; int device_addr; int buffer_size; int buffer_type; } ;


 int VAR_0 ;
 int FUNC_0 (struct hfi_buffer_desc*,int ,int) ;

__attribute__((used)) static void FUNC_1(const struct venus_buffer *VAR_1,
        struct hfi_buffer_desc *VAR_2, bool VAR_3)
{
 FUNC_0(VAR_2, 0, sizeof(*VAR_2));
 VAR_2->buffer_type = VAR_0;
 VAR_2->buffer_size = VAR_1->size;
 VAR_2->num_buffers = 1;
 VAR_2->device_addr = VAR_1->dma_addr;
 VAR_2->response_required = VAR_3;
}
