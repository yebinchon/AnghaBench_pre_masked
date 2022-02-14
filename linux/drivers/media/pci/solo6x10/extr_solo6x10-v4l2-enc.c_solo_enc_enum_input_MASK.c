
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_input {int status; int std; int type; int name; scalar_t__ index; } ;
struct solo_enc_dev {int ch; TYPE_1__* vfd; struct solo_dev* solo_dev; } ;
struct solo_dev {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int tvnorms; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,char*,int) ;
 int FUNC_1 (struct solo_dev*,int) ;
 struct solo_enc_dev* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_3, void *VAR_4,
          struct v4l2_input *VAR_5)
{
 struct solo_enc_dev *VAR_6 = FUNC_2(VAR_3);
 struct solo_dev *VAR_7 = VAR_6->solo_dev;

 if (VAR_5->index)
  return -VAR_0;

 FUNC_0(VAR_5->name, sizeof(VAR_5->name), "Encoder %d",
   VAR_6->ch + 1);
 VAR_5->type = VAR_1;
 VAR_5->std = VAR_6->vfd->tvnorms;

 if (!FUNC_1(VAR_7, VAR_6->ch))
  VAR_5->status = VAR_2;

 return 0;
}
