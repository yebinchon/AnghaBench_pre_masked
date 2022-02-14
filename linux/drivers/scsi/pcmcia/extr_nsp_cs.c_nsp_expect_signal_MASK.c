
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_cmnd {TYPE_2__* device; } ;
struct TYPE_4__ {TYPE_1__* host; } ;
struct TYPE_3__ {unsigned int io_port; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 unsigned char FUNC_0 (unsigned int,int ) ;
 unsigned char FUNC_1 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_2(struct scsi_cmnd *VAR_4,
        unsigned char VAR_5,
        unsigned char VAR_6)
{
 unsigned int VAR_7 = VAR_4->device->host->io_port;
 int VAR_8;
 unsigned char VAR_9, VAR_10;



 VAR_8 = 100;
 do {
  VAR_9 = FUNC_0(VAR_7, VAR_3);
  if (VAR_9 == 0xff) {

   return -1;
  }
  VAR_10 = FUNC_1(VAR_7, VAR_1);
  if (VAR_10 & VAR_2) {

   return 0;
  }
  if ((VAR_9 & VAR_6) != 0 && (VAR_9 & VAR_0) == VAR_5) {

   return 1;
  }
 } while(VAR_8-- != 0);


 return -1;
}
