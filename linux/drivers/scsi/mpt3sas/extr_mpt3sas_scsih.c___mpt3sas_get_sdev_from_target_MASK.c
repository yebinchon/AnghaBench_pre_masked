
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _sas_device {int dummy; } ;
struct MPT3SAS_TARGET {struct _sas_device* sas_dev; } ;
struct MPT3SAS_ADAPTER {int sas_device_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct _sas_device*) ;

__attribute__((used)) static struct _sas_device *
FUNC_2(struct MPT3SAS_ADAPTER *VAR_0,
  struct MPT3SAS_TARGET *VAR_1)
{
 struct _sas_device *VAR_2;

 FUNC_0(&VAR_0->sas_device_lock);

 VAR_2 = VAR_1->sas_dev;
 if (VAR_2)
  FUNC_1(VAR_2);

 return VAR_2;
}
