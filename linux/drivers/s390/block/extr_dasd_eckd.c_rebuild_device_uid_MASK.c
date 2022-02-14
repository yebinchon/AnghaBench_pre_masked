
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * cpaddr; } ;
struct path_verification_work_data {TYPE_1__ rcd_buffer; TYPE_1__ cqr; int ccw; } ;
struct dasd_eckd_private {int conf_data; } ;
struct dasd_device {int cdev; struct dasd_eckd_private* private; } ;
typedef int __u8 ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct dasd_device*) ;
 scalar_t__ FUNC_2 (struct dasd_eckd_private*) ;
 int FUNC_3 (struct dasd_device*,TYPE_1__*,TYPE_1__,int) ;
 int FUNC_4 (struct dasd_device*) ;
 int FUNC_5 (int ,TYPE_1__,int ) ;
 int FUNC_6 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct dasd_device *VAR_4,
         struct path_verification_work_data *VAR_5)
{
 struct dasd_eckd_private *VAR_6 = VAR_4->private;
 __u8 VAR_7, VAR_8 = FUNC_4(VAR_4);
 int VAR_9 = -VAR_2;

 for (VAR_7 = 0x80; VAR_7; VAR_7 >>= 1) {
  if (!(VAR_7 & VAR_8))
   continue;
  FUNC_6(&VAR_5->rcd_buffer, 0, sizeof(VAR_5->rcd_buffer));
  FUNC_6(&VAR_5->cqr, 0, sizeof(VAR_5->cqr));
  VAR_5->cqr.cpaddr = &VAR_5->ccw;
  VAR_9 = FUNC_3(VAR_4, &VAR_5->cqr,
           VAR_5->rcd_buffer,
           VAR_7);

  if (VAR_9) {
   if (VAR_9 == -VAR_3)
    continue;
   FUNC_0(VAR_1, VAR_4->cdev,
     "Read configuration data "
     "returned error %d", VAR_9);
   break;
  }
  FUNC_5(VAR_6->conf_data, VAR_5->rcd_buffer,
         VAR_0);
  if (FUNC_2(VAR_6)) {
   VAR_9 = -VAR_2;
  } else
   break;
 }

 if (!VAR_9)
  VAR_9 = FUNC_1(VAR_4);

 return VAR_9;
}
