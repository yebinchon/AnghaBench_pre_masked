
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct zfcp_port {int dev; int list; } ;
struct zfcp_adapter {int port_list_lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ccw_device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (char const*,int ,unsigned long long*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct ccw_device* FUNC_4 (struct device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct zfcp_adapter* FUNC_7 (struct ccw_device*) ;
 int FUNC_8 (struct zfcp_adapter*) ;
 int FUNC_9 (struct zfcp_port*,int ,char*) ;
 struct zfcp_port* FUNC_10 (struct zfcp_adapter*,int ) ;
 scalar_t__ FUNC_11 (struct zfcp_port*) ;

__attribute__((used)) static ssize_t FUNC_12(struct device *VAR_3,
         struct device_attribute *VAR_4,
         const char *VAR_5, size_t VAR_6)
{
 struct ccw_device *VAR_7 = FUNC_4(VAR_3);
 struct zfcp_adapter *VAR_8 = FUNC_7(VAR_7);
 struct zfcp_port *VAR_9;
 u64 VAR_10;
 int VAR_11 = -VAR_1;

 if (!VAR_8)
  return -VAR_2;

 if (FUNC_1(VAR_5, 0, (unsigned long long *) &VAR_10))
  goto out;

 VAR_9 = FUNC_10(VAR_8, VAR_10);
 if (!VAR_9)
  goto out;
 else
  VAR_11 = 0;

 if (FUNC_11(VAR_9)) {
  VAR_11 = -VAR_0;
  FUNC_3(&VAR_9->dev);
  goto out;
 }

 FUNC_5(&VAR_8->port_list_lock);
 FUNC_2(&VAR_9->list);
 FUNC_6(&VAR_8->port_list_lock);

 FUNC_3(&VAR_9->dev);

 FUNC_9(VAR_9, 0, "syprs_1");
 FUNC_0(&VAR_9->dev);
 out:
 FUNC_8(VAR_8);
 return VAR_11 ? VAR_11 : (ssize_t) VAR_6;
}
