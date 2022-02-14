
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_device {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_4__ {TYPE_1__* port; } ;
struct TYPE_3__ {int adapter; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char const*,int ,unsigned long*) ;
 TYPE_2__* FUNC_1 (struct scsi_device*) ;
 struct scsi_device* FUNC_2 (struct device*) ;
 int FUNC_3 (struct scsi_device*,int ,char*) ;
 int FUNC_4 (struct scsi_device*,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_3,
         struct device_attribute *VAR_4,
         const char *VAR_5, size_t VAR_6)
{
 struct scsi_device *VAR_7 = FUNC_2(VAR_3);
 unsigned long VAR_8;

 if (FUNC_0(VAR_5, 0, &VAR_8) || VAR_8 != 0)
  return -VAR_0;

 FUNC_4(VAR_7, VAR_2);
 FUNC_3(VAR_7, VAR_1,
       "syufai3");
 FUNC_5(FUNC_1(VAR_7)->port->adapter);

 return VAR_6;
}
