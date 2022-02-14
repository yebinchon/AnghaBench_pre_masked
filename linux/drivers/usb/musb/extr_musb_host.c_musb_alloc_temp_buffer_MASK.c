
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {scalar_t__ transfer_buffer_length; int transfer_flags; scalar_t__ transfer_buffer; scalar_t__ sg; scalar_t__ num_sgs; } ;
struct musb_temp_buffer {scalar_t__ data; scalar_t__ old_xfer_buffer; void* kmalloc_ptr; } ;
typedef int gfp_t ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct musb_temp_buffer* FUNC_0 (void*,int) ;
 int VAR_4 ;
 void* FUNC_1 (size_t,int ) ;
 int FUNC_2 (scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_3 (struct urb*) ;

__attribute__((used)) static int FUNC_4(struct urb *VAR_5, gfp_t VAR_6)
{
 enum dma_data_direction VAR_7;
 struct musb_temp_buffer *VAR_8;
 void *VAR_9;
 size_t VAR_10;

 if (VAR_5->num_sgs || VAR_5->sg ||
     VAR_5->transfer_buffer_length == 0 ||
     !((uintptr_t)VAR_5->transfer_buffer & (VAR_3 - 1)))
  return 0;

 VAR_7 = FUNC_3(VAR_5) ? VAR_0 : VAR_1;


 VAR_10 = VAR_5->transfer_buffer_length +
  sizeof(struct musb_temp_buffer) + VAR_3 - 1;

 VAR_9 = FUNC_1(VAR_10, VAR_6);
 if (!VAR_9)
  return -VAR_2;


 VAR_8 = FUNC_0(VAR_9, VAR_3);


 VAR_8->kmalloc_ptr = VAR_9;
 VAR_8->old_xfer_buffer = VAR_5->transfer_buffer;
 if (VAR_7 == VAR_1)
  FUNC_2(VAR_8->data, VAR_5->transfer_buffer,
         VAR_5->transfer_buffer_length);
 VAR_5->transfer_buffer = VAR_8->data;

 VAR_5->transfer_flags |= VAR_4;

 return 0;
}
