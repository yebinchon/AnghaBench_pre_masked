
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_input {scalar_t__ index; int std; int type; int status; int name; } ;
struct solo_dev {scalar_t__ nr_chans; TYPE_1__* vfd; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int tvnorms; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,char*,scalar_t__) ;
 int FUNC_1 (struct solo_dev*,struct v4l2_input*) ;
 int FUNC_2 (struct solo_dev*,int) ;
 struct solo_dev* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_2, void *VAR_3,
      struct v4l2_input *VAR_4)
{
 struct solo_dev *VAR_5 = FUNC_3(VAR_2);

 if (VAR_4->index >= VAR_5->nr_chans) {
  int VAR_6 = FUNC_1(VAR_5, VAR_4);

  if (VAR_6 < 0)
   return VAR_6;
 } else {
  FUNC_0(VAR_4->name, sizeof(VAR_4->name), "Camera %d",
    VAR_4->index + 1);


  if (!FUNC_2(VAR_5, VAR_4->index))
   VAR_4->status = VAR_1;
 }

 VAR_4->type = VAR_0;
 VAR_4->std = VAR_5->vfd->tvnorms;
 return 0;
}
