
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_sliced_vbi_format {int io_size; int service_set; void*** service_lines; scalar_t__* reserved; } ;
struct v4l2_sliced_vbi_data {int dummy; } ;
struct TYPE_3__ {struct v4l2_sliced_vbi_format sliced; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct ivtv {int v4l2_cap; scalar_t__ is_60hz; } ;
struct file {int dummy; } ;
struct TYPE_4__ {struct ivtv* itv; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 TYPE_2__* FUNC_0 (void*) ;
 int FUNC_1 (struct v4l2_sliced_vbi_format*) ;
 int FUNC_2 (void***,int ,int) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_5, void *VAR_6, struct v4l2_format *VAR_7)
{
 struct ivtv *VAR_8 = FUNC_0(VAR_6)->itv;
 struct v4l2_sliced_vbi_format *VAR_9 = &VAR_7->fmt.sliced;

 VAR_9->reserved[0] = 0;
 VAR_9->reserved[1] = 0;
 if (!(VAR_8->v4l2_cap & VAR_1))
  return -VAR_0;
 VAR_9->io_size = sizeof(struct v4l2_sliced_vbi_data) * 36;
 FUNC_2(VAR_9->service_lines, 0, sizeof(VAR_9->service_lines));
 if (VAR_8->is_60hz) {
  VAR_9->service_lines[0][21] = VAR_2;
  VAR_9->service_lines[1][21] = VAR_2;
 } else {
  VAR_9->service_lines[0][23] = VAR_4;
  VAR_9->service_lines[0][16] = VAR_3;
 }
 VAR_9->service_set = FUNC_1(VAR_9);
 return 0;
}
