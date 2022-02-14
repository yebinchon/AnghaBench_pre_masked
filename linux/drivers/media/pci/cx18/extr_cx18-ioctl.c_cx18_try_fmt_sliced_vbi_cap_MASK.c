
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_sliced_vbi_format {int io_size; scalar_t__ service_set; scalar_t__* reserved; } ;
struct v4l2_sliced_vbi_data {int dummy; } ;
struct TYPE_3__ {struct v4l2_sliced_vbi_format sliced; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct file {int dummy; } ;
struct cx18 {int is_50hz; } ;
struct TYPE_4__ {struct cx18* cx; } ;


 scalar_t__ FUNC_0 (struct v4l2_sliced_vbi_format*,int ) ;
 int FUNC_1 (struct v4l2_sliced_vbi_format*,int ) ;
 scalar_t__ FUNC_2 (struct v4l2_sliced_vbi_format*) ;
 TYPE_2__* FUNC_3 (void*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_0, void *VAR_1,
     struct v4l2_format *VAR_2)
{
 struct cx18 *VAR_3 = FUNC_3(VAR_1)->cx;
 struct v4l2_sliced_vbi_format *VAR_4 = &VAR_2->fmt.sliced;

 VAR_4->io_size = sizeof(struct v4l2_sliced_vbi_data) * 36;
 VAR_4->reserved[0] = 0;
 VAR_4->reserved[1] = 0;


 if (VAR_4->service_set)
  FUNC_1(VAR_4, VAR_3->is_50hz);

 if (FUNC_0(VAR_4, VAR_3->is_50hz))
  VAR_4->service_set = FUNC_2(VAR_4);
 return 0;
}
