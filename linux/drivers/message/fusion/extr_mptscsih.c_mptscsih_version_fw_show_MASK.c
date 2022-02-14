
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {int dummy; } ;
typedef int ssize_t ;
struct TYPE_6__ {int Word; } ;
struct TYPE_7__ {TYPE_1__ FWVersion; } ;
struct TYPE_9__ {TYPE_2__ facts; } ;
struct TYPE_8__ {TYPE_4__* ioc; } ;
typedef TYPE_3__ MPT_SCSI_HOST ;
typedef TYPE_4__ MPT_ADAPTER ;


 int VAR_0 ;
 struct Scsi_Host* FUNC_0 (struct device*) ;
 TYPE_3__* FUNC_1 (struct Scsi_Host*) ;
 int FUNC_2 (char*,int ,char*,int,int,int,int) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_1, struct device_attribute *VAR_2,
    char *VAR_3)
{
 struct Scsi_Host *VAR_4 = FUNC_0(VAR_1);
 MPT_SCSI_HOST *VAR_5 = FUNC_1(VAR_4);
 MPT_ADAPTER *VAR_6 = VAR_5->ioc;

 return FUNC_2(VAR_3, VAR_0, "%02d.%02d.%02d.%02d\n",
     (VAR_6->facts.FWVersion.Word & 0xFF000000) >> 24,
     (VAR_6->facts.FWVersion.Word & 0x00FF0000) >> 16,
     (VAR_6->facts.FWVersion.Word & 0x0000FF00) >> 8,
     VAR_6->facts.FWVersion.Word & 0x000000FF);
}
