
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int host; } ;
struct block_device {int dummy; } ;
struct aha1542_hostdata {scalar_t__ bios_translation; } ;
typedef int sector_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int) ;
 struct aha1542_hostdata* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct scsi_device *VAR_1,
  struct block_device *VAR_2, sector_t VAR_3, int VAR_4[])
{
 struct aha1542_hostdata *VAR_5 = FUNC_1(VAR_1->host);

 if (VAR_3 >= 0x200000 &&
   VAR_5->bios_translation == VAR_0) {

  VAR_4[0] = 255;
  VAR_4[1] = 63;
 } else {
  VAR_4[0] = 64;
  VAR_4[1] = 32;
 }
 VAR_4[2] = FUNC_0(VAR_3, VAR_4[0] * VAR_4[1]);

 return 0;
}
