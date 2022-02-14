
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_short ;
struct scsi_device {int id; scalar_t__ wdtr; scalar_t__ sdtr; int host; } ;
struct qlogicpti {TYPE_1__* dev_param; } ;
struct TYPE_2__ {int device_flags; int synchronous_offset; int synchronous_period; } ;


 int VAR_0 ;
 int FUNC_0 (struct qlogicpti*,int*,int ) ;
 struct qlogicpti* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct scsi_device *VAR_1)
{
 struct qlogicpti *VAR_2 = FUNC_1(VAR_1->host);
 int VAR_3 = VAR_1->id;
 u_short VAR_4[6];



 if (VAR_1->sdtr) {
  VAR_2->dev_param[VAR_3].device_flags |= 0x10;
 } else {
  VAR_2->dev_param[VAR_3].synchronous_offset = 0;
  VAR_2->dev_param[VAR_3].synchronous_period = 0;
 }

 if (VAR_1->wdtr)
  VAR_2->dev_param[VAR_3].device_flags |= 0x20;

 VAR_4[0] = VAR_0;
 VAR_4[1] = (VAR_3 << 8);
 VAR_4[2] = (VAR_2->dev_param[VAR_3].device_flags << 8);
 if (VAR_2->dev_param[VAR_3].device_flags & 0x10) {
  VAR_4[3] = (VAR_2->dev_param[VAR_3].synchronous_offset << 8) |
   VAR_2->dev_param[VAR_3].synchronous_period;
 } else {
  VAR_4[3] = 0;
 }
 FUNC_0(VAR_2, VAR_4, 0);
 return 0;
}
