
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uas_dev_info {int flags; } ;
struct scsi_device {int request_queue; struct uas_dev_info* hostdata; TYPE_1__* host; } ;
struct TYPE_2__ {scalar_t__ hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(struct scsi_device *VAR_2)
{
 struct uas_dev_info *VAR_3 =
  (struct uas_dev_info *)VAR_2->host->hostdata;

 VAR_2->hostdata = VAR_3;






 FUNC_1(VAR_2->request_queue, (512 - 1));

 if (VAR_3->flags & VAR_1)
  FUNC_0(VAR_2->request_queue, 64);
 else if (VAR_3->flags & VAR_0)
  FUNC_0(VAR_2->request_queue, 240);

 return 0;
}
