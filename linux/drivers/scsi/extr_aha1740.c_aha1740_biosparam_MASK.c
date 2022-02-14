
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {int host; } ;
struct block_device {int dummy; } ;
typedef int sector_t ;
struct TYPE_2__ {int translation; } ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct scsi_device *VAR_0,
        struct block_device *VAR_1,
        sector_t VAR_2, int* VAR_3)
{
 int VAR_4 = VAR_2;
 int VAR_5 = FUNC_1(VAR_0->host)->translation;

 FUNC_0(FUNC_2("aha1740_biosparam\n"));
 if (VAR_5 && (VAR_3[2] > 1024)) {
  VAR_3[0] = 255;
  VAR_3[1] = 63;
  VAR_3[2] = VAR_4 / (255 * 63);
 } else {
  VAR_3[0] = 64;
  VAR_3[1] = 32;
  VAR_3[2] = VAR_4 >> 11;
 }
 return 0;
}
