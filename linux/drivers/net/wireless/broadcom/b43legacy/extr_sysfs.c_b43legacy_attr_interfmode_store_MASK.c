
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct b43legacy_wldev {TYPE_1__* wl; } ;
typedef int ssize_t ;
struct TYPE_2__ {int mutex; int irq_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct b43legacy_wldev*,int) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (int ) ;
 struct b43legacy_wldev* FUNC_3 (struct device*) ;
 int FUNC_4 (char const*,size_t) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_7,
            struct device_attribute *VAR_8,
            const char *VAR_9, size_t VAR_10)
{
 struct b43legacy_wldev *VAR_11 = FUNC_3(VAR_7);
 unsigned long VAR_12;
 int VAR_13;
 int VAR_14;

 if (!FUNC_2(VAR_4))
  return -VAR_6;

 VAR_14 = FUNC_4(VAR_9, VAR_10);
 switch (VAR_14) {
 case 0:
  VAR_14 = VAR_2;
  break;
 case 1:
  VAR_14 = VAR_3;
  break;
 case 2:
  VAR_14 = VAR_1;
  break;
 case 3:
  VAR_14 = VAR_0;
  break;
 default:
  return -VAR_5;
 }

 FUNC_5(&VAR_11->wl->mutex);
 FUNC_7(&VAR_11->wl->irq_lock, VAR_12);

 VAR_13 = FUNC_0(VAR_11, VAR_14);
 if (VAR_13)
  FUNC_1(VAR_11->wl, "Interference Mitigation not "
         "supported by device\n");
 FUNC_8(&VAR_11->wl->irq_lock, VAR_12);
 FUNC_6(&VAR_11->wl->mutex);

 return VAR_13 ? VAR_13 : VAR_10;
}
