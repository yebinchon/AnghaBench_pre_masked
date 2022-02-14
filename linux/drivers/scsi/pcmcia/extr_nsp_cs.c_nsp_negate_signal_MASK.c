
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_cmnd {TYPE_2__* device; } ;
struct TYPE_4__ {TYPE_1__* host; } ;
struct TYPE_3__ {unsigned int io_port; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (int ,char*,char*) ;

__attribute__((used)) static int FUNC_2(struct scsi_cmnd *VAR_2, unsigned char VAR_3,
        char *VAR_4)
{
 unsigned int VAR_5 = VAR_2->device->host->io_port;
 unsigned char VAR_6;
 int VAR_7;



 VAR_7 = 100;

 do {
  VAR_6 = FUNC_0(VAR_5, VAR_1);
  if (VAR_6 == 0xff) {
   break;
  }
 } while ((--VAR_7 != 0) && (VAR_6 & VAR_3) != 0);

 if (VAR_7 == 0) {
  FUNC_1(VAR_0, " %s signal off timeout", VAR_4);
 }

 return 0;
}
