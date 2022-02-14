
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us_data {scalar_t__ protocol; scalar_t__ max_lun; } ;
struct scsi_device {int inquiry_len; int sdev_bflags; int request_queue; int host; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int) ;
 struct us_data* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2 (struct scsi_device *VAR_2)
{
 struct us_data *VAR_3 = FUNC_1(VAR_2->host);






 VAR_2->inquiry_len = 36;





 FUNC_0(VAR_2->request_queue, (512 - 1));


 if (VAR_3->protocol == VAR_1 && VAR_3->max_lun > 0)
  VAR_2->sdev_bflags |= VAR_0;

 return 0;
}
