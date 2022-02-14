
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vb2_buffer {TYPE_1__* planes; } ;
struct TYPE_6__ {TYPE_2__* plane_fmt; } ;
struct hantro_ctx {TYPE_3__ dst_fmt; } ;
struct TYPE_5__ {int sizeimage; } ;
struct TYPE_4__ {int bytesused; } ;



__attribute__((used)) static int
FUNC_0(struct hantro_ctx *VAR_0, struct vb2_buffer *VAR_1,
        unsigned int VAR_2)
{

 VAR_1->planes[0].bytesused = VAR_0->dst_fmt.plane_fmt[0].sizeimage;
 return 0;
}
