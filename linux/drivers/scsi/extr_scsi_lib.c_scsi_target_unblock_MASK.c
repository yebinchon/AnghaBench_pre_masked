
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef enum scsi_device_state { ____Placeholder_scsi_device_state } scsi_device_state ;


 int FUNC_0 (struct device*,int*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct device*) ;
 int FUNC_2 (int ,int*,int ) ;
 int VAR_1 ;
 int FUNC_3 (struct device*) ;

void
FUNC_4(struct device *VAR_2, enum scsi_device_state VAR_3)
{
 if (FUNC_1(VAR_2))
  FUNC_2(FUNC_3(VAR_2), &VAR_3,
     VAR_0);
 else
  FUNC_0(VAR_2, &VAR_3, VAR_1);
}
