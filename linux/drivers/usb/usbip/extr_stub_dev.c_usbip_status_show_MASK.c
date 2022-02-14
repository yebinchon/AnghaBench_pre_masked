
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int status; int lock; } ;
struct stub_device {TYPE_1__ ud; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*) ;
 struct stub_device* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,int ,char*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_2,
     struct device_attribute *VAR_3, char *VAR_4)
{
 struct stub_device *VAR_5 = FUNC_1(VAR_2);
 int VAR_6;

 if (!VAR_5) {
  FUNC_0(VAR_2, "sdev is null\n");
  return -VAR_0;
 }

 FUNC_3(&VAR_5->ud.lock);
 VAR_6 = VAR_5->ud.status;
 FUNC_4(&VAR_5->ud.lock);

 return FUNC_2(VAR_4, VAR_1, "%d\n", VAR_6);
}
