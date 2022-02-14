
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_buffer {int dummy; } ;
struct sg_table {int nents; int sgl; } ;
struct pxa_camera_dev {int channels; } ;
struct TYPE_2__ {struct vb2_buffer vb2_buf; } ;
struct pxa_buffer {unsigned long* plane_sizes; int nb_planes; int queue; int * sg_len; int * sg; TYPE_1__ vbuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct pxa_camera_dev*) ;
 int FUNC_3 (struct pxa_buffer*) ;
 int FUNC_4 (struct pxa_camera_dev*,struct pxa_buffer*,int,int ,int ) ;
 int FUNC_5 (int ,int ,int ,int,unsigned long*,int *,int *,int ) ;
 struct sg_table* FUNC_6 (struct vb2_buffer*,int ) ;
 unsigned long FUNC_7 (struct vb2_buffer*,int ) ;

__attribute__((used)) static int FUNC_8(struct pxa_camera_dev *VAR_2,
      struct pxa_buffer *VAR_3)
{
 struct vb2_buffer *VAR_4 = &VAR_3->vbuf.vb2_buf;
 struct sg_table *VAR_5 = FUNC_6(VAR_4, 0);
 int VAR_6 = VAR_2->channels;
 int VAR_7, VAR_8 = 0;
 unsigned long VAR_9 = FUNC_7(VAR_4, 0);

 switch (VAR_6) {
 case 1:
  VAR_3->plane_sizes[0] = VAR_9;
  break;
 case 3:
  VAR_3->plane_sizes[0] = VAR_9 / 2;
  VAR_3->plane_sizes[1] = VAR_9 / 4;
  VAR_3->plane_sizes[2] = VAR_9 / 4;
  break;
 default:
  return -VAR_0;
 }
 VAR_3->nb_planes = VAR_6;

 VAR_8 = FUNC_5(VAR_5->sgl, VAR_5->nents, 0, VAR_6,
         VAR_3->plane_sizes, VAR_3->sg, VAR_3->sg_len, VAR_1);
 if (VAR_8 < 0) {
  FUNC_1(FUNC_2(VAR_2),
   "sg_split failed: %d\n", VAR_8);
  return VAR_8;
 }
 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  VAR_8 = FUNC_4(VAR_2, VAR_3, VAR_7,
        VAR_3->sg[VAR_7], VAR_3->sg_len[VAR_7]);
  if (VAR_8) {
   FUNC_3(VAR_3);
   return VAR_8;
  }
 }
 FUNC_0(&VAR_3->queue);

 return VAR_8;
}
