
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int num_planes; } ;
struct vb2_v4l2_buffer {int field; TYPE_2__ vb2_buf; } ;
struct TYPE_3__ {int height; } ;
struct fdp1_q_data {int stride_y; int stride_c; int vsize; TYPE_1__ format; } ;
struct fdp1_field_buffer {int last_field; int* addrs; int field; struct vb2_v4l2_buffer* vb; } ;
struct fdp1_buffer {struct fdp1_field_buffer* fields; } ;


 void* VAR_0 ;
 scalar_t__ FUNC_0 (int) ;





 void* VAR_1 ;
 struct fdp1_buffer* FUNC_1 (struct vb2_v4l2_buffer*) ;
 int FUNC_2 (TYPE_2__*,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct fdp1_q_data *VAR_2,
       struct vb2_v4l2_buffer *VAR_3,
       unsigned int VAR_4)
{
 struct fdp1_buffer *VAR_5 = FUNC_1(VAR_3);
 struct fdp1_field_buffer *VAR_6 = &VAR_5->fields[VAR_4];
 unsigned int VAR_7;
 unsigned int VAR_8;

 VAR_7 = FUNC_0(VAR_3->field) ? 2 : 1;

 VAR_6->vb = VAR_3;
 VAR_6->last_field = (VAR_4 + 1) == VAR_7;

 for (VAR_8 = 0; VAR_8 < VAR_3->vb2_buf.num_planes; ++VAR_8)
  VAR_6->addrs[VAR_8] = FUNC_2(&VAR_3->vb2_buf, VAR_8);

 switch (VAR_3->field) {
 case 132:





  VAR_6->field = (VAR_2->format.height < 576) == VAR_4
       ? VAR_1 : VAR_0;
  break;
 case 130:
 case 128:
  VAR_6->field = VAR_4 ? VAR_0 : VAR_1;
  break;
 case 131:
 case 129:
  VAR_6->field = VAR_4 ? VAR_1 : VAR_0;
  break;
 default:
  VAR_6->field = VAR_3->field;
  break;
 }


 if (!VAR_4)
  return;


 switch (VAR_3->field) {
 case 132:
 case 130:
 case 131:
  for (VAR_8 = 0; VAR_8 < VAR_3->vb2_buf.num_planes; VAR_8++)
   VAR_6->addrs[VAR_8] +=
    (VAR_8 == 0 ? VAR_2->stride_y : VAR_2->stride_c);
  break;
 case 128:
 case 129:
  for (VAR_8 = 0; VAR_8 < VAR_3->vb2_buf.num_planes; VAR_8++)
   VAR_6->addrs[VAR_8] += VAR_2->vsize *
    (VAR_8 == 0 ? VAR_2->stride_y : VAR_2->stride_c);
  break;
 }
}
