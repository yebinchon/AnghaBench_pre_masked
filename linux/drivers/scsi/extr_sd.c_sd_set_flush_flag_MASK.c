
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_disk {TYPE_1__* disk; scalar_t__ DPOFUA; scalar_t__ WCE; } ;
struct TYPE_2__ {int queue; } ;


 int FUNC_0 (int ,int,int) ;

__attribute__((used)) static void FUNC_1(struct scsi_disk *VAR_0)
{
 bool VAR_1 = 0, VAR_2 = 0;

 if (VAR_0->WCE) {
  VAR_1 = 1;
  if (VAR_0->DPOFUA)
   VAR_2 = 1;
 }

 FUNC_0(VAR_0->disk->queue, VAR_1, VAR_2);
}
