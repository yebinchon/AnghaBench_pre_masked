
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_input {int index; int std; int type; int name; } ;
struct TYPE_2__ {int tvnorms; } ;
struct usbtv {TYPE_1__ vdev; } ;
struct file {int dummy; } ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 struct usbtv* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3,
     struct v4l2_input *VAR_4)
{
 struct usbtv *VAR_5 = FUNC_1(VAR_2);

 switch (VAR_4->index) {
 case 129:
  FUNC_0(VAR_4->name, "Composite", sizeof(VAR_4->name));
  break;
 case 128:
  FUNC_0(VAR_4->name, "S-Video", sizeof(VAR_4->name));
  break;
 default:
  return -VAR_0;
 }

 VAR_4->type = VAR_1;
 VAR_4->std = VAR_5->vdev.tvnorms;
 return 0;
}
