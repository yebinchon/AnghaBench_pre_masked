
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aac_dev {int scan_mutex; int scsi_host_ptr; scalar_t__ sa_firmware; } ;


 int FUNC_0 (struct aac_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

int FUNC_4(struct aac_dev *VAR_0)
{
 int VAR_1 = 0;

 FUNC_1(&VAR_0->scan_mutex);
 if (VAR_0->sa_firmware)
  VAR_1 = FUNC_0(VAR_0);
 else
  FUNC_3(VAR_0->scsi_host_ptr);
 FUNC_2(&VAR_0->scan_mutex);

 return VAR_1;
}
