
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint8_t ;
struct wusbhc {void* dnts_interval; void* dnts_num_slots; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char const*,char*,void**,void**) ;
 struct wusbhc* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
       struct device_attribute *VAR_2,
       const char *VAR_3, size_t VAR_4)
{
 struct wusbhc *VAR_5 = FUNC_1(VAR_1);
 uint8_t VAR_6, VAR_7;
 ssize_t VAR_8;

 VAR_8 = FUNC_0(VAR_3, "%hhu %hhu", &VAR_6, &VAR_7);

 if (VAR_8 != 2)
  return -VAR_0;

 VAR_5->dnts_num_slots = VAR_6;
 VAR_5->dnts_interval = VAR_7;

 return VAR_4;
}
