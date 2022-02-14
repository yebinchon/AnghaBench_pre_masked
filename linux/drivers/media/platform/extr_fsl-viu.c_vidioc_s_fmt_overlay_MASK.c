
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct viu_fh {int win; scalar_t__ dev; } ;
struct viu_dev {int slock; } ;
struct TYPE_2__ {int win; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct file {int dummy; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct viu_dev*,int *) ;
 int FUNC_3 (struct viu_dev*,struct viu_fh*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_0, void *VAR_1,
     struct v4l2_format *VAR_2)
{
 struct viu_fh *VAR_3 = VAR_1;
 struct viu_dev *VAR_4 = (struct viu_dev *)VAR_3->dev;
 unsigned long VAR_5;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_4, &VAR_2->fmt.win);
 if (VAR_6)
  return VAR_6;

 VAR_3->win = VAR_2->fmt.win;

 FUNC_0(&VAR_4->slock, VAR_5);
 FUNC_3(VAR_4, VAR_3);
 FUNC_1(&VAR_4->slock, VAR_5);
 return 0;
}
