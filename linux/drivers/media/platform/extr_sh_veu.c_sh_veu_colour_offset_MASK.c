
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int left; unsigned int top; unsigned int height; int width; } ;
struct sh_veu_vfmt {int offset_y; int offset_c; TYPE_4__ frame; TYPE_3__* fmt; } ;
struct TYPE_6__ {int bytesperline; TYPE_1__* fmt; } ;
struct sh_veu_dev {TYPE_2__ vfmt_out; } ;
typedef int dma_addr_t ;
struct TYPE_7__ {int fourcc; } ;
struct TYPE_5__ {int depth; } ;


 unsigned int FUNC_0 (int ,int) ;
 int FUNC_1 () ;
__attribute__((used)) static void FUNC_2(struct sh_veu_dev *VAR_0, struct sh_veu_vfmt *VAR_1)
{

 unsigned int VAR_2 = VAR_1->frame.left & ~0x03;
 unsigned int VAR_3 = VAR_1->frame.top;
 dma_addr_t VAR_4 = (dma_addr_t)VAR_3 * VAR_0->vfmt_out.bytesperline +
   (((dma_addr_t)VAR_2 * VAR_0->vfmt_out.fmt->depth) >> 3);
 unsigned int VAR_5;

 VAR_1->offset_y = VAR_4;

 switch (VAR_1->fmt->fourcc) {
 case 134:
 case 133:
 case 132:
  VAR_5 = FUNC_0(VAR_1->frame.width, 16);
  VAR_1->offset_c = VAR_4 + VAR_5 * VAR_1->frame.height;
  break;
 case 130:
 case 129:
 case 128:
 case 135:
 case 131:
  VAR_1->offset_c = 0;
  break;
 default:
  FUNC_1();
 }
}
