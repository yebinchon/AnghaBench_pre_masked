
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_buffer {int dummy; } ;
struct v4l2_pix_format_mplane {int num_planes; TYPE_1__* plane_fmt; } ;
struct hantro_fmt {int dummy; } ;
struct TYPE_2__ {unsigned int sizeimage; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct vb2_buffer*,int) ;
 int FUNC_1 (int,char*,int,unsigned int,unsigned int) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static int
FUNC_3(struct vb2_buffer *VAR_1, const struct hantro_fmt *VAR_2,
         struct v4l2_pix_format_mplane *VAR_3)
{
 unsigned int VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3->num_planes; ++VAR_5) {
  VAR_4 = VAR_3->plane_fmt[VAR_5].sizeimage;
  FUNC_1(4, "plane %d size: %ld, sizeimage: %u\n",
     VAR_5, FUNC_0(VAR_1, VAR_5), VAR_4);
  if (FUNC_0(VAR_1, VAR_5) < VAR_4) {
   FUNC_2("plane %d is too small for output\n", VAR_5);
   return -VAR_0;
  }
 }
 return 0;
}
