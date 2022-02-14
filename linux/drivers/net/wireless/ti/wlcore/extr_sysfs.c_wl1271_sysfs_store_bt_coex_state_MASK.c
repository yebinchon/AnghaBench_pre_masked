
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1271 {unsigned long sg_enabled; scalar_t__ state; int mutex; int dev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 scalar_t__ VAR_0 ;
 struct wl1271* FUNC_0 (struct device*) ;
 int FUNC_1 (char const*,int,unsigned long*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (struct wl1271*,unsigned long) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static ssize_t FUNC_11(struct device *VAR_1,
      struct device_attribute *VAR_2,
      const char *VAR_3, size_t VAR_4)
{
 struct wl1271 *VAR_5 = FUNC_0(VAR_1);
 unsigned long VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_3, 10, &VAR_6);
 if (VAR_7 < 0) {
  FUNC_10("incorrect value written to bt_coex_mode");
  return VAR_4;
 }

 FUNC_2(&VAR_5->mutex);

 VAR_6 = !!VAR_6;

 if (VAR_6 == VAR_5->sg_enabled)
  goto out;

 VAR_5->sg_enabled = VAR_6;

 if (FUNC_8(VAR_5->state != VAR_0))
  goto out;

 VAR_7 = FUNC_4(VAR_5->dev);
 if (VAR_7 < 0) {
  FUNC_7(VAR_5->dev);
  goto out;
 }

 FUNC_9(VAR_5, VAR_5->sg_enabled);
 FUNC_5(VAR_5->dev);
 FUNC_6(VAR_5->dev);

 out:
 FUNC_3(&VAR_5->mutex);
 return VAR_4;
}
