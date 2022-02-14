
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_sliced_vbi_format {int io_size; scalar_t__ service_set; scalar_t__* reserved; } ;
struct v4l2_sliced_vbi_data {int dummy; } ;
struct TYPE_2__ {struct v4l2_sliced_vbi_format sliced; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct ivtv_open_id {scalar_t__ type; struct ivtv* itv; } ;
struct ivtv {int is_50hz; } ;
struct file {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct v4l2_sliced_vbi_format*,int ) ;
 struct ivtv_open_id* FUNC_1 (void*) ;
 int FUNC_2 (struct v4l2_sliced_vbi_format*,int ) ;
 int FUNC_3 (struct file*,void*,struct v4l2_format*) ;
 scalar_t__ FUNC_4 (struct v4l2_sliced_vbi_format*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_1, void *VAR_2, struct v4l2_format *VAR_3)
{
 struct v4l2_sliced_vbi_format *VAR_4 = &VAR_3->fmt.sliced;
 struct ivtv_open_id *VAR_5 = FUNC_1(VAR_2);
 struct ivtv *VAR_6 = VAR_5->itv;

 if (VAR_5->type == VAR_0)
  return FUNC_3(VAR_1, VAR_2, VAR_3);


 VAR_4->io_size = sizeof(struct v4l2_sliced_vbi_data) * 36;
 VAR_4->reserved[0] = 0;
 VAR_4->reserved[1] = 0;

 if (VAR_4->service_set)
  FUNC_2(VAR_4, VAR_6->is_50hz);
 FUNC_0(VAR_4, VAR_6->is_50hz);
 VAR_4->service_set = FUNC_4(VAR_4);
 return 0;
}
