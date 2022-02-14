
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vb2_buffer {TYPE_1__* planes; } ;
struct TYPE_7__ {scalar_t__ cpu; } ;
struct TYPE_8__ {TYPE_3__ bounce_buffer; } ;
struct hantro_ctx {TYPE_2__* vpu_dst_fmt; TYPE_4__ jpeg_enc; } ;
struct TYPE_6__ {size_t header_size; } ;
struct TYPE_5__ {size_t bytesused; } ;


 int VAR_0 ;
 int FUNC_0 (size_t,scalar_t__,unsigned int) ;
 size_t FUNC_1 (struct vb2_buffer*,int ) ;
 size_t FUNC_2 (struct vb2_buffer*,int ) ;

__attribute__((used)) static int
FUNC_3(struct hantro_ctx *VAR_1, struct vb2_buffer *VAR_2,
        unsigned int VAR_3)
{
 size_t VAR_4;

 VAR_4 = FUNC_1(VAR_2, 0) - VAR_1->vpu_dst_fmt->header_size;
 if (VAR_3 > VAR_4)
  return -VAR_0;





 if (VAR_1->jpeg_enc.bounce_buffer.cpu) {
  FUNC_0(FUNC_2(VAR_2, 0) +
         VAR_1->vpu_dst_fmt->header_size,
         VAR_1->jpeg_enc.bounce_buffer.cpu, VAR_3);
 }
 VAR_2->planes[0].bytesused =
  VAR_1->vpu_dst_fmt->header_size + VAR_3;
 return 0;
}
