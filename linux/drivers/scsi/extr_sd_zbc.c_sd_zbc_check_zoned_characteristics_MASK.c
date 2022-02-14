
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_disk {int urswrz; scalar_t__ first_scan; void* zones_max_open; void* zones_optimal_nonseq; void* zones_optimal_open; TYPE_1__* device; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_0 (unsigned char*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int,unsigned char*,int) ;
 int FUNC_2 (int ,struct scsi_disk*,char*) ;

__attribute__((used)) static int FUNC_3(struct scsi_disk *VAR_3,
           unsigned char *VAR_4)
{

 if (FUNC_1(VAR_3->device, 0xb6, VAR_4, 64)) {
  FUNC_2(VAR_1, VAR_3,
     "Read zoned characteristics VPD page failed\n");
  return -VAR_0;
 }

 if (VAR_3->device->type != VAR_2) {

  VAR_3->urswrz = 1;
  VAR_3->zones_optimal_open = FUNC_0(&VAR_4[8]);
  VAR_3->zones_optimal_nonseq = FUNC_0(&VAR_4[12]);
  VAR_3->zones_max_open = 0;
 } else {

  VAR_3->urswrz = VAR_4[4] & 1;
  VAR_3->zones_optimal_open = 0;
  VAR_3->zones_optimal_nonseq = 0;
  VAR_3->zones_max_open = FUNC_0(&VAR_4[16]);
 }






 if (!VAR_3->urswrz) {
  if (VAR_3->first_scan)
   FUNC_2(VAR_1, VAR_3,
     "constrained reads devices are not supported\n");
  return -VAR_0;
 }

 return 0;
}
