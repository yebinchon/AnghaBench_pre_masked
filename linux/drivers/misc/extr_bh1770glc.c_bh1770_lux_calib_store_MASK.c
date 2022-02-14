
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct bh1770_chip {scalar_t__ lux_calib; int mutex; int lux_threshold_lo; int lux_threshold_hi; scalar_t__ lux_corr; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct bh1770_chip*) ;
 int FUNC_1 (struct bh1770_chip*,int ,int ) ;
 struct bh1770_chip* FUNC_2 (struct device*) ;
 int FUNC_3 (char const*,int ,unsigned long*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_1,
      struct device_attribute *VAR_2,
      const char *VAR_3, size_t VAR_4)
{
 struct bh1770_chip *VAR_5 = FUNC_2(VAR_1);
 unsigned long VAR_6;
 u32 VAR_7;
 u32 VAR_8;
 int VAR_9;

 VAR_9 = FUNC_3(VAR_3, 0, &VAR_6);
 if (VAR_9)
  return VAR_9;

 FUNC_4(&VAR_5->mutex);
 VAR_7 = VAR_5->lux_calib;
 VAR_5->lux_calib = VAR_6;
 VAR_8 = FUNC_0(VAR_5);
 if (VAR_8 == 0) {
  VAR_5->lux_calib = VAR_7;
  FUNC_5(&VAR_5->mutex);
  return -VAR_0;
 }
 VAR_5->lux_corr = VAR_8;

 FUNC_1(VAR_5, VAR_5->lux_threshold_hi,
    VAR_5->lux_threshold_lo);

 FUNC_5(&VAR_5->mutex);

 return VAR_4;
}
