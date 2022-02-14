
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_sliced_vbi_format {int io_size; scalar_t__ service_set; int service_lines; scalar_t__* reserved; } ;
struct v4l2_sliced_vbi_data {int dummy; } ;
struct TYPE_3__ {struct v4l2_sliced_vbi_format sliced; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct file {int dummy; } ;
struct cx18 {int sd_av; } ;
struct TYPE_4__ {struct cx18* cx; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct v4l2_sliced_vbi_format*) ;
 TYPE_2__* FUNC_1 (void*) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int) ;
 scalar_t__ FUNC_3 (int ,int ,int ,struct v4l2_sliced_vbi_format*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct file *VAR_3, void *VAR_4,
     struct v4l2_format *VAR_5)
{
 struct cx18 *VAR_6 = FUNC_1(VAR_4)->cx;
 struct v4l2_sliced_vbi_format *VAR_7 = &VAR_5->fmt.sliced;


 VAR_7->reserved[0] = 0;
 VAR_7->reserved[1] = 0;
 VAR_7->io_size = sizeof(struct v4l2_sliced_vbi_data) * 36;
 FUNC_2(VAR_7->service_lines, 0, sizeof(VAR_7->service_lines));
 VAR_7->service_set = 0;






 if (FUNC_3(VAR_6->sd_av, VAR_2, VAR_1, &VAR_5->fmt.sliced))
  return -VAR_0;

 VAR_7->service_set = FUNC_0(VAR_7);
 return 0;
}
