
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* srp_version; } ;
struct ibmvscsi_host_data {TYPE_1__ madapter_info; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct Scsi_Host* FUNC_0 (struct device*) ;
 struct ibmvscsi_host_data* FUNC_1 (struct Scsi_Host*) ;
 int FUNC_2 (char*,int ,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
         struct device_attribute *VAR_2, char *VAR_3)
{
 struct Scsi_Host *VAR_4 = FUNC_0(VAR_1);
 struct ibmvscsi_host_data *VAR_5 = FUNC_1(VAR_4);
 int VAR_6;

 VAR_6 = FUNC_2(VAR_3, VAR_0, "%s\n",
         VAR_5->madapter_info.srp_version);
 return VAR_6;
}
