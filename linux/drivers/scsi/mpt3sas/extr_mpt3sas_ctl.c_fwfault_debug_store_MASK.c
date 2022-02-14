
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {int dummy; } ;
struct MPT3SAS_ADAPTER {int fwfault_debug; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct Scsi_Host* FUNC_0 (struct device*) ;
 int FUNC_1 (struct MPT3SAS_ADAPTER*,char*,int) ;
 struct MPT3SAS_ADAPTER* FUNC_2 (struct Scsi_Host*) ;
 int FUNC_3 (char const*,char*,int*) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static ssize_t
FUNC_5(struct device *VAR_1, struct device_attribute *VAR_2,
 const char *VAR_3, size_t VAR_4)
{
 struct Scsi_Host *VAR_5 = FUNC_0(VAR_1);
 struct MPT3SAS_ADAPTER *VAR_6 = FUNC_2(VAR_5);
 int VAR_7 = 0;

 if (FUNC_3(VAR_3, "%d", &VAR_7) != 1)
  return -VAR_0;

 VAR_6->fwfault_debug = VAR_7;
 FUNC_1(VAR_6, "fwfault_debug=%d\n",
   VAR_6->fwfault_debug);
 return FUNC_4(VAR_3);
}
