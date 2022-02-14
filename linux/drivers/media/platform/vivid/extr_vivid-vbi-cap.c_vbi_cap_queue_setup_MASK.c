
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vivid_dev {int* std_cap; size_t input; } ;
struct vb2_queue {scalar_t__ type; unsigned int num_buffers; } ;
struct v4l2_sliced_vbi_data {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct vivid_dev* FUNC_0 (struct vb2_queue*) ;
 int FUNC_1 (struct vivid_dev*) ;

__attribute__((used)) static int FUNC_2(struct vb2_queue *VAR_3,
         unsigned *VAR_4, unsigned *VAR_5,
         unsigned VAR_6[], struct device *VAR_7[])
{
 struct vivid_dev *VAR_8 = FUNC_0(VAR_3);
 bool VAR_9 = VAR_8->std_cap[VAR_8->input] & VAR_2;
 unsigned VAR_10 = VAR_3->type == VAR_1 ?
  36 * sizeof(struct v4l2_sliced_vbi_data) :
  1440 * 2 * (VAR_9 ? 12 : 18);

 if (!FUNC_1(VAR_8))
  return -VAR_0;

 VAR_6[0] = VAR_10;

 if (VAR_3->num_buffers + *VAR_4 < 2)
  *VAR_4 = 2 - VAR_3->num_buffers;

 *VAR_5 = 1;
 return 0;
}
