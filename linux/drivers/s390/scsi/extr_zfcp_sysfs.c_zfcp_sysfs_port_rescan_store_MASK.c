
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_adapter {int scan_work; int work_queue; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ccw_device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *,int ) ;
 struct ccw_device* FUNC_2 (struct device*) ;
 struct zfcp_adapter* FUNC_3 (struct ccw_device*) ;
 int FUNC_4 (struct zfcp_adapter*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
         struct device_attribute *VAR_2,
         const char *VAR_3, size_t VAR_4)
{
 struct ccw_device *VAR_5 = FUNC_2(VAR_1);
 struct zfcp_adapter *VAR_6 = FUNC_3(VAR_5);

 if (!VAR_6)
  return -VAR_0;






 FUNC_1(VAR_6->work_queue, &VAR_6->scan_work, 0);
 FUNC_0(&VAR_6->scan_work);
 FUNC_4(VAR_6);

 return (ssize_t) VAR_4;
}
