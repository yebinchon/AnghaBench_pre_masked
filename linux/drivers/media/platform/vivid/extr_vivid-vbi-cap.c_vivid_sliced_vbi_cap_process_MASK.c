
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct v4l2_sliced_vbi_data* data; } ;
struct vivid_dev {int vbi_cap_seq_count; scalar_t__ field_cap; size_t input; TYPE_2__ vbi_gen; int * std_signal_mode; } ;
struct TYPE_3__ {int sequence; int vb2_buf; } ;
struct vivid_buffer {TYPE_1__ vb; } ;
struct v4l2_sliced_vbi_data {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct v4l2_sliced_vbi_data*,int ,int ) ;
 int FUNC_2 (int *,int ) ;
 struct v4l2_sliced_vbi_data* FUNC_3 (int *,int ) ;
 int FUNC_4 (struct vivid_dev*,int) ;

void FUNC_5(struct vivid_dev *VAR_1,
   struct vivid_buffer *VAR_2)
{
 struct v4l2_sliced_vbi_data *VAR_3 =
   FUNC_3(&VAR_2->vb.vb2_buf, 0);

 VAR_2->vb.sequence = VAR_1->vbi_cap_seq_count;
 if (VAR_1->field_cap == VAR_0)
  VAR_2->vb.sequence /= 2;

 FUNC_4(VAR_1, VAR_2->vb.sequence);

 FUNC_1(VAR_3, 0, FUNC_2(&VAR_2->vb.vb2_buf, 0));
 if (!FUNC_0(VAR_1->std_signal_mode[VAR_1->input])) {
  unsigned VAR_4;

  for (VAR_4 = 0; VAR_4 < 25; VAR_4++)
   VAR_3[VAR_4] = VAR_1->vbi_gen.data[VAR_4];
 }
}
