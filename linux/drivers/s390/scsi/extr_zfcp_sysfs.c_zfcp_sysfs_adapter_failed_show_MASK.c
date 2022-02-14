
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_adapter {int status; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ccw_device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,char*) ;
 struct ccw_device* FUNC_2 (struct device*) ;
 struct zfcp_adapter* FUNC_3 (struct ccw_device*) ;
 int FUNC_4 (struct zfcp_adapter*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_2,
           struct device_attribute *VAR_3,
           char *VAR_4)
{
 struct ccw_device *VAR_5 = FUNC_2(VAR_2);
 struct zfcp_adapter *VAR_6 = FUNC_3(VAR_5);
 int VAR_7;

 if (!VAR_6)
  return -VAR_0;

 if (FUNC_0(&VAR_6->status) & VAR_1)
  VAR_7 = FUNC_1(VAR_4, "1\n");
 else
  VAR_7 = FUNC_1(VAR_4, "0\n");

 FUNC_4(VAR_6);
 return VAR_7;
}
