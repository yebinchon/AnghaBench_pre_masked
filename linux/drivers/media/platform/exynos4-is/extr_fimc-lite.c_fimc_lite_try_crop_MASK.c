
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_rect {scalar_t__ height; scalar_t__ width; void* top; void* left; } ;
struct flite_frame {scalar_t__ f_height; scalar_t__ f_width; } ;
struct fimc_lite {int subdev; TYPE_1__* dd; struct flite_frame inp_frame; } ;
struct TYPE_2__ {int win_hor_offs_align; } ;


 void* FUNC_0 (int ,void*,int ,scalar_t__) ;
 int VAR_0 ;
 void* FUNC_1 (void*,int ) ;
 int VAR_1 ;
 int FUNC_2 (int,int ,int *,char*,void*,void*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__*,int ,scalar_t__,int ,scalar_t__*,int ,scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct fimc_lite *VAR_2, struct v4l2_rect *VAR_3)
{
 struct flite_frame *VAR_4 = &VAR_2->inp_frame;

 FUNC_3(&VAR_3->width, 0, VAR_4->f_width, 0,
         &VAR_3->height, 0, VAR_4->f_height, 0, 0);


 VAR_3->left = FUNC_0(VAR_1, VAR_3->left, 0, VAR_4->f_width - VAR_3->width);
 VAR_3->left = FUNC_1(VAR_3->left, VAR_2->dd->win_hor_offs_align);
 VAR_3->top = FUNC_0(VAR_1, VAR_3->top, 0, VAR_4->f_height - VAR_3->height);

 FUNC_2(1, VAR_0, &VAR_2->subdev, "(%d,%d)/%dx%d, sink fmt: %dx%d\n",
   VAR_3->left, VAR_3->top, VAR_3->width, VAR_3->height,
   VAR_4->f_width, VAR_4->f_height);
}
