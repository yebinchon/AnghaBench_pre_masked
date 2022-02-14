
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mdev_device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int lock; } ;


 int VAR_0 ;


 TYPE_1__* VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (struct mdev_device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct mdev_device *VAR_2,
        unsigned int VAR_3, unsigned long VAR_4)
{
 int VAR_5;

 FUNC_0(&VAR_1->lock);
 switch (VAR_3) {
 case 129:
  VAR_5 = FUNC_2(VAR_4);
  break;
 case 128:
  VAR_5 = FUNC_3(VAR_2);
  break;
 default:
  VAR_5 = -VAR_0;
  break;
 }
 FUNC_1(&VAR_1->lock);

 return VAR_5;
}
