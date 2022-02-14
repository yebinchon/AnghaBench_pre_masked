
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {int dummy; } ;
typedef int ssize_t ;
struct TYPE_5__ {int nvdata_version_default; } ;
struct TYPE_4__ {TYPE_2__* ioc; } ;
typedef TYPE_1__ MPT_SCSI_HOST ;
typedef TYPE_2__ MPT_ADAPTER ;


 int VAR_0 ;
 struct Scsi_Host* FUNC_0 (struct device*) ;
 TYPE_1__* FUNC_1 (struct Scsi_Host*) ;
 int FUNC_2 (char*,int ,char*,int) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_1,
         struct device_attribute *VAR_2, char *VAR_3)
{
 struct Scsi_Host *VAR_4 = FUNC_0(VAR_1);
 MPT_SCSI_HOST *VAR_5 = FUNC_1(VAR_4);
 MPT_ADAPTER *VAR_6 = VAR_5->ioc;

 return FUNC_2(VAR_3, VAR_0, "%02xh\n",VAR_6->nvdata_version_default);
}
