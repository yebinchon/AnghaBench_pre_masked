
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cx18_stream {int dma; int buf_size; TYPE_1__* cx; } ;
struct cx18_buffer {int dma_handle; } ;
struct TYPE_2__ {int pci_dev; } ;


 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static inline void FUNC_1(struct cx18_stream *VAR_0,
 struct cx18_buffer *VAR_1)
{
 FUNC_0(VAR_0->cx->pci_dev, VAR_1->dma_handle,
    VAR_0->buf_size, VAR_0->dma);
}
