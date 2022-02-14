
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int state_mutex; } ;
typedef enum scsi_device_state { ____Placeholder_scsi_device_state } scsi_device_state ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct scsi_device*,int) ;

__attribute__((used)) static int FUNC_3(struct scsi_device *VAR_0,
     enum scsi_device_state VAR_1)
{
 int VAR_2;

 FUNC_0(&VAR_0->state_mutex);
 VAR_2 = FUNC_2(VAR_0, VAR_1);
 FUNC_1(&VAR_0->state_mutex);

 return VAR_2;
}
