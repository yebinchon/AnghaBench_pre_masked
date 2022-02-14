
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


union v4l2_ctrl_ptr {void* p; } ;
typedef int u32 ;
struct TYPE_4__ {int picture_structure; int picture_coding_type; } ;
struct TYPE_3__ {int chroma_format; } ;
struct v4l2_ctrl_mpeg2_slice_params {TYPE_2__ picture; TYPE_1__ sequence; } ;
struct v4l2_ctrl {int elem_size; int type; } ;



 int VAR_0 ;
 int FUNC_0 (void*,int ,int) ;

__attribute__((used)) static void FUNC_1(const struct v4l2_ctrl *VAR_1, u32 VAR_2,
         union v4l2_ctrl_ptr VAR_3)
{
 struct v4l2_ctrl_mpeg2_slice_params *VAR_4;
 void *VAR_5 = VAR_3.p + VAR_2 * VAR_1->elem_size;

 FUNC_0(VAR_5, 0, VAR_1->elem_size);






 switch ((u32)VAR_1->type) {
 case 128:
  VAR_4 = VAR_5;

  VAR_4->sequence.chroma_format = 1;

  VAR_4->picture.picture_structure = 1;
  VAR_4->picture.picture_coding_type =
     VAR_0;
  break;
 }
}
