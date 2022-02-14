
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {unsigned char* cmnd; TYPE_1__* device; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 unsigned char VAR_9 ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static int FUNC_0(struct scsi_cmnd *VAR_11)
{
 unsigned char VAR_12 = VAR_11->cmnd[0];

 if (VAR_12 == VAR_6 || VAR_12 == VAR_7 ||
     VAR_12 == VAR_5)
  return VAR_2;
 else if (VAR_12 == VAR_4 || VAR_12 == VAR_3 ||
   VAR_12 == 0xa8 || VAR_12 == VAR_8 ||
   VAR_12 == VAR_9) {



  if (VAR_11->device->type == VAR_10 && !(VAR_11->cmnd[1] & 1))
   return VAR_2;
  else
   return VAR_1;
 } else
  return VAR_0;
}
