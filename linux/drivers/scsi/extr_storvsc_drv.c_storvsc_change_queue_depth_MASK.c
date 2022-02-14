
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {int dummy; } ;
struct TYPE_2__ {int can_queue; } ;


 int FUNC_0 (struct scsi_device*,int) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static int FUNC_1(struct scsi_device *VAR_1, int VAR_2)
{
 if (VAR_2 > VAR_0.can_queue)
  VAR_2 = VAR_0.can_queue;

 return FUNC_0(VAR_1, VAR_2);
}
