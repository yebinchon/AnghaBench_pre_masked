
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {scalar_t__ type; int request_queue; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static int FUNC_1(struct scsi_device *VAR_1)
{
 if (VAR_1->type == VAR_0)
  FUNC_0(VAR_1->request_queue, 8192);

 return 0;
}
