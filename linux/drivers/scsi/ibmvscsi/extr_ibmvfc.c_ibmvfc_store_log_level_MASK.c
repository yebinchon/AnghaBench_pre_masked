
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibmvfc_host {int log_level; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {int host_lock; } ;
typedef int ssize_t ;


 struct Scsi_Host* FUNC_0 (struct device*) ;
 struct ibmvfc_host* FUNC_1 (struct Scsi_Host*) ;
 int FUNC_2 (char const*,int *,int) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_0,
          struct device_attribute *VAR_1,
          const char *VAR_2, size_t VAR_3)
{
 struct Scsi_Host *VAR_4 = FUNC_0(VAR_0);
 struct ibmvfc_host *VAR_5 = FUNC_1(VAR_4);
 unsigned long VAR_6 = 0;

 FUNC_3(VAR_4->host_lock, VAR_6);
 VAR_5->log_level = FUNC_2(VAR_2, ((void*)0), 10);
 FUNC_4(VAR_4->host_lock, VAR_6);
 return FUNC_5(VAR_2);
}
