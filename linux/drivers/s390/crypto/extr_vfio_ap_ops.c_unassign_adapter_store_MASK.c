
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mdev_device {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_3__ {unsigned long apm_max; int apm; } ;
struct ap_matrix_mdev {TYPE_1__ matrix; scalar_t__ kvm; } ;
typedef int ssize_t ;
struct TYPE_4__ {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long,int ) ;
 int FUNC_1 (char const*,int ,unsigned long*) ;
 TYPE_2__* VAR_2 ;
 struct mdev_device* FUNC_2 (struct device*) ;
 struct ap_matrix_mdev* FUNC_3 (struct mdev_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_3,
          struct device_attribute *VAR_4,
          const char *VAR_5, size_t VAR_6)
{
 int VAR_7;
 unsigned long VAR_8;
 struct mdev_device *VAR_9 = FUNC_2(VAR_3);
 struct ap_matrix_mdev *VAR_10 = FUNC_3(VAR_9);


 if (VAR_10->kvm)
  return -VAR_0;

 VAR_7 = FUNC_1(VAR_5, 0, &VAR_8);
 if (VAR_7)
  return VAR_7;

 if (VAR_8 > VAR_10->matrix.apm_max)
  return -VAR_1;

 FUNC_4(&VAR_2->lock);
 FUNC_0((unsigned long)VAR_8, VAR_10->matrix.apm);
 FUNC_5(&VAR_2->lock);

 return VAR_6;
}
