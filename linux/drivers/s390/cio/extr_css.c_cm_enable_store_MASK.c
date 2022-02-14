
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct channel_subsystem {int mutex; int cm_enabled; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct channel_subsystem*,int) ;
 int FUNC_1 (char const*,int,unsigned long*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct channel_subsystem* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1, struct device_attribute *VAR_2,
          const char *VAR_3, size_t VAR_4)
{
 struct channel_subsystem *VAR_5 = FUNC_4(VAR_1);
 unsigned long VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_3, 16, &VAR_6);
 if (VAR_7)
  return VAR_7;
 FUNC_2(&VAR_5->mutex);
 switch (VAR_6) {
 case 0:
  VAR_7 = VAR_5->cm_enabled ? FUNC_0(VAR_5, 0) : 0;
  break;
 case 1:
  VAR_7 = VAR_5->cm_enabled ? 0 : FUNC_0(VAR_5, 1);
  break;
 default:
  VAR_7 = -VAR_0;
 }
 FUNC_3(&VAR_5->mutex);
 return VAR_7 < 0 ? VAR_7 : VAR_4;
}
