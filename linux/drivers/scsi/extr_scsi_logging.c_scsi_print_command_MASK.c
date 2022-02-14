
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_cmnd {int cmd_len; TYPE_2__* device; int * cmnd; TYPE_1__* request; } ;
struct TYPE_4__ {int sdev_gendev; } ;
struct TYPE_3__ {int tag; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int *,char*,char*) ;
 int FUNC_2 (int *,size_t,int,int,char*,size_t,int) ;
 size_t FUNC_3 (int,int) ;
 int FUNC_4 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_5 (char*,size_t,char*,...) ;
 scalar_t__ FUNC_6 (char*,size_t,int *) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (size_t*) ;
 size_t FUNC_9 (char*,size_t,int ,int ) ;

void FUNC_10(struct scsi_cmnd *VAR_1)
{
 int VAR_2;
 char *VAR_3;
 size_t VAR_4, VAR_5;

 if (!VAR_1->cmnd)
  return;

 VAR_3 = FUNC_8(&VAR_5);
 if (!VAR_3)
  return;

 VAR_4 = FUNC_9(VAR_3, VAR_5,
     FUNC_4(VAR_1), VAR_1->request->tag);
 if (VAR_4 >= VAR_5)
  goto out_printk;
 VAR_4 += FUNC_5(VAR_3 + VAR_4, VAR_5 - VAR_4, "CDB: ");
 if (FUNC_0(VAR_4 >= VAR_5))
  goto out_printk;

 VAR_4 += FUNC_6(VAR_3 + VAR_4, VAR_5 - VAR_4,
           VAR_1->cmnd);
 if (VAR_4 >= VAR_5)
  goto out_printk;


 if (VAR_1->cmd_len > 16) {

  VAR_4 += FUNC_5(VAR_3 + VAR_4, VAR_5 - VAR_4, "\n");
  FUNC_1(VAR_0, &VAR_1->device->sdev_gendev, "%s", VAR_3);
  FUNC_7(VAR_3);
  for (VAR_2 = 0; VAR_2 < VAR_1->cmd_len; VAR_2 += 16) {
   size_t VAR_6 = FUNC_3(VAR_1->cmd_len - VAR_2, 16);

   VAR_3 = FUNC_8(&VAR_5);
   if (!VAR_3)
    break;
   VAR_4 = FUNC_9(VAR_3, VAR_5,
       FUNC_4(VAR_1),
       VAR_1->request->tag);
   if (!FUNC_0(VAR_4 > VAR_5 - 58)) {
    VAR_4 += FUNC_5(VAR_3 + VAR_4, VAR_5 - VAR_4,
       "CDB[%02x]: ", VAR_2);
    FUNC_2(&VAR_1->cmnd[VAR_2], VAR_6,
         16, 1, VAR_3 + VAR_4,
         VAR_5 - VAR_4, 0);
   }
   FUNC_1(VAR_0, &VAR_1->device->sdev_gendev, "%s",
       VAR_3);
   FUNC_7(VAR_3);
  }
  return;
 }
 if (!FUNC_0(VAR_4 > VAR_5 - 49)) {
  VAR_4 += FUNC_5(VAR_3 + VAR_4, VAR_5 - VAR_4, " ");
  FUNC_2(VAR_1->cmnd, VAR_1->cmd_len, 16, 1,
       VAR_3 + VAR_4, VAR_5 - VAR_4,
       0);
 }
out_printk:
 FUNC_1(VAR_0, &VAR_1->device->sdev_gendev, "%s", VAR_3);
 FUNC_7(VAR_3);
}
