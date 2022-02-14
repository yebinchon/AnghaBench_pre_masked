
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct b43legacy_wldev {int short_preamble; TYPE_1__* wl; } ;
typedef int ssize_t ;
struct TYPE_2__ {int mutex; int irq_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct b43legacy_wldev* FUNC_1 (struct device*) ;
 int FUNC_2 (char const*,size_t) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_2,
          struct device_attribute *VAR_3,
          const char *VAR_4, size_t VAR_5)
{
 struct b43legacy_wldev *VAR_6 = FUNC_1(VAR_2);
 unsigned long VAR_7;
 int VAR_8;

 if (!FUNC_0(VAR_0))
  return -VAR_1;

 VAR_8 = FUNC_2(VAR_4, VAR_5);
 if (VAR_8 < 0)
  return VAR_8;
 FUNC_3(&VAR_6->wl->mutex);
 FUNC_5(&VAR_6->wl->irq_lock, VAR_7);

 VAR_6->short_preamble = !!VAR_8;

 FUNC_6(&VAR_6->wl->irq_lock, VAR_7);
 FUNC_4(&VAR_6->wl->mutex);

 return VAR_5;
}
