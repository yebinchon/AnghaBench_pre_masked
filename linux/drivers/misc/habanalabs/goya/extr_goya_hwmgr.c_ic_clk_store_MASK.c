
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hl_device {scalar_t__ pm_mng_profile; struct goya_device* asic_specific; } ;
struct goya_device {long ic_clk; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct hl_device* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (struct hl_device*) ;
 int FUNC_2 (struct hl_device*,int ,long) ;
 int FUNC_3 (char const*,int ,long*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_5, struct device_attribute *VAR_6,
    const char *VAR_7, size_t VAR_8)
{
 struct hl_device *VAR_9 = FUNC_0(VAR_5);
 struct goya_device *VAR_10 = VAR_9->asic_specific;
 int VAR_11;
 long VAR_12;

 if (FUNC_1(VAR_9)) {
  VAR_8 = -VAR_1;
  goto fail;
 }

 if (VAR_9->pm_mng_profile == VAR_4) {
  VAR_8 = -VAR_2;
  goto fail;
 }

 VAR_11 = FUNC_3(VAR_7, 0, &VAR_12);

 if (VAR_11) {
  VAR_8 = -VAR_0;
  goto fail;
 }

 FUNC_2(VAR_9, VAR_3, VAR_12);
 VAR_10->ic_clk = VAR_12;

fail:
 return VAR_8;
}
