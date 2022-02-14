
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {scalar_t__ transfer_buffer_length; int transfer_flags; scalar_t__ transfer_buffer; scalar_t__ sg; scalar_t__ num_sgs; } ;
struct dma_aligned_buffer {scalar_t__ data; scalar_t__ old_xfer_buffer; struct dma_aligned_buffer* kmalloc_ptr; } ;
typedef int gfp_t ;


 int VAR_0 ;
 struct dma_aligned_buffer* FUNC_0 (struct dma_aligned_buffer*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 struct dma_aligned_buffer* FUNC_1 (size_t,int ) ;
 int FUNC_2 (scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_3 (struct urb*) ;

__attribute__((used)) static int FUNC_4(struct urb *VAR_3, gfp_t VAR_4)
{
 struct dma_aligned_buffer *VAR_5, *VAR_6;
 size_t VAR_7;

 if (VAR_3->num_sgs || VAR_3->sg ||
     VAR_3->transfer_buffer_length == 0 ||
     !((uintptr_t)VAR_3->transfer_buffer & (VAR_1 - 1)))
  return 0;


 VAR_7 = VAR_3->transfer_buffer_length +
  sizeof(struct dma_aligned_buffer) + VAR_1 - 1;

 VAR_6 = FUNC_1(VAR_7, VAR_4);
 if (!VAR_6)
  return -VAR_0;


 VAR_5 = FUNC_0(VAR_6 + 1, VAR_1) - 1;
 VAR_5->kmalloc_ptr = VAR_6;
 VAR_5->old_xfer_buffer = VAR_3->transfer_buffer;
 if (FUNC_3(VAR_3))
  FUNC_2(VAR_5->data, VAR_3->transfer_buffer,
         VAR_3->transfer_buffer_length);
 VAR_3->transfer_buffer = VAR_5->data;

 VAR_3->transfer_flags |= VAR_2;

 return 0;
}
