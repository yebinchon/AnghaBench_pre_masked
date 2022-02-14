
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_disk {int ws16; int ws10; struct scsi_device* device; } ;
struct scsi_device {int no_write_same; int no_report_opcodes; TYPE_1__* host; } ;
struct TYPE_2__ {scalar_t__ no_write_same; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct scsi_device*,int,unsigned char*,int) ;
 int FUNC_1 (struct scsi_device*,unsigned char*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct scsi_disk *VAR_4, unsigned char *VAR_5)
{
 struct scsi_device *VAR_6 = VAR_4->device;

 if (VAR_6->host->no_write_same) {
  VAR_6->no_write_same = 1;

  return;
 }

 if (FUNC_1(VAR_6, VAR_5, VAR_1, VAR_0) < 0) {

  int VAR_7 = 64;

  VAR_6->no_report_opcodes = 1;





  if (!FUNC_0(VAR_6, 0x89, VAR_5, VAR_7))
   VAR_6->no_write_same = 1;
 }

 if (FUNC_1(VAR_6, VAR_5, VAR_1, VAR_3) == 1)
  VAR_4->ws16 = 1;

 if (FUNC_1(VAR_6, VAR_5, VAR_1, VAR_2) == 1)
  VAR_4->ws10 = 1;
}
