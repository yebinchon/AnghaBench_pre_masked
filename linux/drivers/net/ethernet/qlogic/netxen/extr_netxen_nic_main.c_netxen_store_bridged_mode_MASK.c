
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netxen_adapter {int capabilities; scalar_t__ is_up; } ;
struct net_device {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char const*,int,unsigned long*) ;
 struct netxen_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct netxen_adapter*,int) ;
 struct net_device* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_3,
  struct device_attribute *VAR_4, const char *VAR_5, size_t VAR_6)
{
 struct net_device *VAR_7 = FUNC_3(VAR_3);
 struct netxen_adapter *VAR_8 = FUNC_1(VAR_7);
 unsigned long VAR_9;
 int VAR_10 = -VAR_0;

 if (!(VAR_8->capabilities & VAR_2))
  goto err_out;

 if (VAR_8->is_up != VAR_1)
  goto err_out;

 if (FUNC_0(VAR_5, 2, &VAR_9))
  goto err_out;

 if (!FUNC_2(VAR_8, !!VAR_9))
  VAR_10 = VAR_6;

err_out:
 return VAR_10;
}
