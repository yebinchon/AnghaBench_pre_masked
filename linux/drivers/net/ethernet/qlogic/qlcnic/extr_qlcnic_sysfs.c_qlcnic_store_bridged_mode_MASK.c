
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_adapter {int state; TYPE_1__* ahw; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int capabilities; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct qlcnic_adapter* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (char const*,int,unsigned long*) ;
 int FUNC_2 (struct qlcnic_adapter*,int) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_3,
      struct device_attribute *VAR_4,
      const char *VAR_5, size_t VAR_6)
{
 struct qlcnic_adapter *VAR_7 = FUNC_0(VAR_3);
 unsigned long VAR_8;
 int VAR_9 = -VAR_0;

 if (!(VAR_7->ahw->capabilities & VAR_1))
  goto err_out;

 if (!FUNC_3(VAR_2, &VAR_7->state))
  goto err_out;

 if (FUNC_1(VAR_5, 2, &VAR_8))
  goto err_out;

 if (!FUNC_2(VAR_7, !!VAR_8))
  VAR_9 = VAR_6;

err_out:
 return VAR_9;
}
