
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mutex; } ;
struct uwb_rc {int beaconing; TYPE_1__ uwb_dev; } ;
struct uwb_dev {struct uwb_rc* rc; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,char*,int) ;
 struct uwb_dev* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
      struct device_attribute *VAR_1, char *VAR_2)
{
 struct uwb_dev *VAR_3 = FUNC_3(VAR_0);
 struct uwb_rc *VAR_4 = VAR_3->rc;
 ssize_t VAR_5;

 FUNC_0(&VAR_4->uwb_dev.mutex);
 VAR_5 = FUNC_2(VAR_2, "%d\n", VAR_4->beaconing);
 FUNC_1(&VAR_4->uwb_dev.mutex);
 return VAR_5;
}
