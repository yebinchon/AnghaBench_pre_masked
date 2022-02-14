
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct scsi_disk {unsigned char zoned; scalar_t__ first_scan; TYPE_3__* device; TYPE_1__* disk; } ;
struct TYPE_5__ {scalar_t__ zoned; } ;
struct request_queue {TYPE_2__ limits; } ;
struct TYPE_6__ {scalar_t__ type; } ;
struct TYPE_4__ {struct request_queue* queue; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ,struct request_queue*) ;
 int FUNC_1 (int ,struct request_queue*) ;
 scalar_t__ FUNC_2 (struct request_queue*) ;
 int FUNC_3 (unsigned char*) ;
 int FUNC_4 (unsigned char*) ;
 unsigned char* FUNC_5 (int const,int ) ;
 scalar_t__ FUNC_6 (TYPE_3__*,int,unsigned char*,int const) ;
 int FUNC_7 (int ,struct scsi_disk*,char*,char*) ;

__attribute__((used)) static void FUNC_8(struct scsi_disk *VAR_8)
{
 struct request_queue *VAR_9 = VAR_8->disk->queue;
 unsigned char *VAR_10;
 u16 VAR_11;
 const int VAR_12 = 64;

 VAR_10 = FUNC_5(VAR_12, VAR_3);

 if (!VAR_10 ||

     FUNC_6(VAR_8->device, 0xb1, VAR_10, VAR_12))
  goto out;

 VAR_11 = FUNC_3(&VAR_10[4]);

 if (VAR_11 == 1) {
  FUNC_1(VAR_6, VAR_9);
  FUNC_0(VAR_5, VAR_9);
 }

 if (VAR_8->device->type == VAR_7) {

  VAR_9->limits.zoned = VAR_1;
 } else {
  VAR_8->zoned = (VAR_10[8] >> 4) & 3;
  if (VAR_8->zoned == 1)

   VAR_9->limits.zoned = VAR_0;
  else




   VAR_9->limits.zoned = VAR_2;
 }
 if (FUNC_2(VAR_9) && VAR_8->first_scan)
  FUNC_7(VAR_4, VAR_8, "Host-%s zoned block device\n",
        VAR_9->limits.zoned == VAR_1 ? "managed" : "aware");

 out:
 FUNC_4(VAR_10);
}
