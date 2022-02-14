
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_fmtdesc {size_t index; int pixelformat; } ;
struct hva_dev {size_t nb_of_streamformats; int * streamformats; } ;
struct hva_ctx {int dummy; } ;
struct file {int private_data; } ;


 int VAR_0 ;
 struct hva_dev* FUNC_0 (struct hva_ctx*) ;
 struct hva_ctx* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_1, void *VAR_2,
          struct v4l2_fmtdesc *VAR_3)
{
 struct hva_ctx *VAR_4 = FUNC_1(VAR_1->private_data);
 struct hva_dev *VAR_5 = FUNC_0(VAR_4);

 if (FUNC_2(VAR_3->index >= VAR_5->nb_of_streamformats))
  return -VAR_0;

 VAR_3->pixelformat = VAR_5->streamformats[VAR_3->index];

 return 0;
}
