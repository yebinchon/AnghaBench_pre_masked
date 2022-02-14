
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vimc_pix_map {int pixelformat; } ;
struct v4l2_fmtdesc {int pixelformat; int index; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 struct vimc_pix_map* FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_1, void *VAR_2,
         struct v4l2_fmtdesc *VAR_3)
{
 const struct vimc_pix_map *VAR_4 = FUNC_0(VAR_3->index);

 if (!VAR_4)
  return -VAR_0;

 VAR_3->pixelformat = VAR_4->pixelformat;

 return 0;
}
