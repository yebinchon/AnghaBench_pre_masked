
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_fmtdesc {size_t index; int pixelformat; } ;
struct file {int private_data; } ;
struct delta_dev {size_t nb_of_pixelformats; int * pixelformats; } ;
struct delta_ctx {struct delta_dev* dev; } ;


 int VAR_0 ;
 struct delta_ctx* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_1, void *VAR_2,
    struct v4l2_fmtdesc *VAR_3)
{
 struct delta_ctx *VAR_4 = FUNC_0(VAR_1->private_data);
 struct delta_dev *VAR_5 = VAR_4->dev;

 if (FUNC_1(VAR_3->index >= VAR_5->nb_of_pixelformats))
  return -VAR_0;

 VAR_3->pixelformat = VAR_5->pixelformats[VAR_3->index];

 return 0;
}
