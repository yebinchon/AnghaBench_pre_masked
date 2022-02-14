
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct sh_vou_device {int fop_lock; TYPE_1__ v4l2_dev; int status; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct file*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sh_vou_device*,int ,int ,int) ;
 int FUNC_5 (struct file*) ;
 struct sh_vou_device* FUNC_6 (struct file*) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_2)
{
 struct sh_vou_device *VAR_3 = FUNC_6(VAR_2);
 bool VAR_4;

 FUNC_1(&VAR_3->fop_lock);
 VAR_4 = FUNC_5(VAR_2);
 FUNC_0(VAR_2, ((void*)0));
 if (VAR_4) {

  VAR_3->status = VAR_0;
  FUNC_4(VAR_3, VAR_1, 0, 0x101);
  FUNC_3(VAR_3->v4l2_dev.dev);
 }
 FUNC_2(&VAR_3->fop_lock);
 return 0;
}
