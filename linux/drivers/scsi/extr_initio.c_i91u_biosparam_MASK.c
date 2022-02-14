
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct target_control {int heads; int sectors; int drv_flags; } ;
struct scsi_device {size_t id; TYPE_1__* host; } ;
struct initio_host {struct target_control* targets; } ;
struct block_device {int dummy; } ;
typedef scalar_t__ sector_t ;
struct TYPE_2__ {scalar_t__ hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static int FUNC_1(struct scsi_device *VAR_3, struct block_device *VAR_4,
  sector_t VAR_5, int *VAR_6)
{
 struct initio_host *VAR_7;
 struct target_control *VAR_8;

 VAR_7 = (struct initio_host *) VAR_3->host->hostdata;
 VAR_8 = &VAR_7->targets[VAR_3->id];

 if (VAR_8->heads) {
  VAR_6[0] = VAR_8->heads;
  VAR_6[1] = VAR_8->sectors;
  VAR_6[2] = (unsigned long)VAR_5 / VAR_8->heads / VAR_8->sectors;
 } else {
  if (VAR_8->drv_flags & VAR_0) {
   VAR_6[0] = 255;
   VAR_6[1] = 63;
   VAR_6[2] = (unsigned long)VAR_5 / 255 / 63;
  } else {
   VAR_6[0] = 64;
   VAR_6[1] = 32;
   VAR_6[2] = (unsigned long)VAR_5 >> 11;
  }
 }
 return 0;
}
