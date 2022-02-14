
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_3,
           struct device_attribute *VAR_4,
           const char *VAR_5, size_t VAR_6)
{
 int VAR_7 = -VAR_1;

 if (!FUNC_1(VAR_0))
  return VAR_7;

 VAR_7 = FUNC_0(FUNC_3(FUNC_2(VAR_3)),
     VAR_5[0] == '!', VAR_2);
 if (VAR_7 >= 0)
  VAR_7 = VAR_6;

 return VAR_7;
}
