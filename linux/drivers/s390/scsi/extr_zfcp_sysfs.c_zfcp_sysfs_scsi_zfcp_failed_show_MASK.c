
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int status; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (struct scsi_device*) ;
 int FUNC_2 (char*,char*,unsigned int) ;
 struct scsi_device* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
        struct device_attribute *VAR_2,
        char *VAR_3)
{
 struct scsi_device *VAR_4 = FUNC_3(VAR_1);
 unsigned int VAR_5 = FUNC_0(&FUNC_1(VAR_4)->status);
 unsigned int VAR_6 = VAR_5 & VAR_0 ? 1 : 0;

 return FUNC_2(VAR_3, "%d\n", VAR_6);
}
