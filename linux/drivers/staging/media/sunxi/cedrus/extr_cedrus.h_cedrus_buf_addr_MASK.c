
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_buffer {int dummy; } ;
struct v4l2_pix_format {unsigned int height; scalar_t__ bytesperline; } ;
typedef unsigned int dma_addr_t ;


 unsigned int FUNC_0 (struct vb2_buffer*,int ) ;

__attribute__((used)) static inline dma_addr_t FUNC_1(struct vb2_buffer *VAR_0,
      struct v4l2_pix_format *VAR_1,
      unsigned int VAR_2)
{
 dma_addr_t VAR_3 = FUNC_0(VAR_0, 0);

 return VAR_3 + (VAR_1 ? (dma_addr_t)VAR_1->bytesperline *
        VAR_1->height * VAR_2 : 0);
}
