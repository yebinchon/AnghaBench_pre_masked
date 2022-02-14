
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct b43legacy_wldev {TYPE_1__* wl; scalar_t__ short_preamble; } ;
typedef int ssize_t ;
struct TYPE_2__ {int mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct b43legacy_wldev* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int ,char*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_3,
         struct device_attribute *VAR_4,
         char *VAR_5)
{
 struct b43legacy_wldev *VAR_6 = FUNC_1(VAR_3);
 ssize_t VAR_7;

 if (!FUNC_0(VAR_0))
  return -VAR_1;

 FUNC_2(&VAR_6->wl->mutex);

 if (VAR_6->short_preamble)
  VAR_7 = FUNC_4(VAR_5, VAR_2, "1 (Short Preamble"
     " enabled)\n");
 else
  VAR_7 = FUNC_4(VAR_5, VAR_2, "0 (Short Preamble"
     " disabled)\n");

 FUNC_3(&VAR_6->wl->mutex);

 return VAR_7;
}
