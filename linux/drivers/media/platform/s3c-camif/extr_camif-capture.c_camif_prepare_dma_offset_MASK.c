
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ line; scalar_t__ initial; } ;
struct TYPE_4__ {int top; scalar_t__ width; scalar_t__ left; } ;
struct camif_frame {int f_width; TYPE_1__ dma_offset; TYPE_2__ rect; } ;
struct camif_vp {struct camif_frame out_frame; } ;


 int FUNC_0 (char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct camif_vp *VAR_0)
{
 struct camif_frame *VAR_1 = &VAR_0->out_frame;

 VAR_1->dma_offset.initial = VAR_1->rect.top * VAR_1->f_width + VAR_1->rect.left;
 VAR_1->dma_offset.line = VAR_1->f_width - (VAR_1->rect.left + VAR_1->rect.width);

 FUNC_0("dma_offset: initial: %d, line: %d\n",
   VAR_1->dma_offset.initial, VAR_1->dma_offset.line);
}
