
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct viu_fh {scalar_t__ dev; } ;
struct viu_dev {int ovenable; int slock; int vr; } ;
struct file {int dummy; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct viu_dev*) ;
 int FUNC_4 (struct viu_dev*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_0, void *VAR_1, unsigned int VAR_2)
{
 struct viu_fh *VAR_3 = VAR_1;
 struct viu_dev *VAR_4 = (struct viu_dev *)VAR_3->dev;
 unsigned long VAR_5;

 if (VAR_2) {
  FUNC_0(&VAR_4->slock, VAR_5);
  FUNC_2(VAR_4->vr);
  VAR_4->ovenable = 1;


  FUNC_3(VAR_4);
  FUNC_1(&VAR_4->slock, VAR_5);
 } else {
  FUNC_4(VAR_4);
  VAR_4->ovenable = 0;
 }

 return 0;
}
