
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_v4l2_buffer {int flags; } ;
struct vb2_buffer {int vb2_queue; } ;
struct solo_enc_dev {int fmt; int jpeg_len; int jpeg_header; int vop_len; int vop; } ;
struct sg_table {int nents; int sgl; } ;


 int VAR_0 ;


 int FUNC_0 (int ,int ,int ,int ) ;
 struct vb2_v4l2_buffer* FUNC_1 (struct vb2_buffer*) ;
 struct sg_table* FUNC_2 (struct vb2_buffer*,int ) ;
 struct solo_enc_dev* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct vb2_buffer *VAR_1)
{
 struct vb2_v4l2_buffer *VAR_2 = FUNC_1(VAR_1);
 struct solo_enc_dev *VAR_3 = FUNC_3(VAR_1->vb2_queue);
 struct sg_table *VAR_4 = FUNC_2(VAR_1, 0);

 switch (VAR_3->fmt) {
 case 128:
 case 129:
  if (VAR_2->flags & VAR_0)
   FUNC_0(VAR_4->sgl, VAR_4->nents,
     VAR_3->vop, VAR_3->vop_len);
  break;
 default:
  FUNC_0(VAR_4->sgl, VAR_4->nents,
    VAR_3->jpeg_header, VAR_3->jpeg_len);
  break;
 }
}
