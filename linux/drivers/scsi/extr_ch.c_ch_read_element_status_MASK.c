
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct TYPE_7__ {scalar_t__ voltags; TYPE_1__* device; } ;
typedef TYPE_2__ scsi_changer ;
typedef int cmd ;
struct TYPE_6__ {int lun; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_2__*,int*,int,int*,int,int ) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (int*) ;
 int* FUNC_5 (int,int) ;
 int FUNC_6 (char*,int*,int) ;
 int FUNC_7 (int*,int ,int) ;

__attribute__((used)) static int
FUNC_8(scsi_changer *VAR_7, u_int VAR_8, char *VAR_9)
{
 u_char VAR_10[12];
 u_char *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_5(512, VAR_4 | VAR_3);
 if(!VAR_11)
  return -VAR_2;

 retry:
 FUNC_7(VAR_10,0,sizeof(VAR_10));
 VAR_10[0] = VAR_6;
 VAR_10[1] = ((VAR_7->device->lun & 0x7) << 5) |
  (VAR_7->voltags ? 0x10 : 0) |
  FUNC_3(VAR_7,VAR_8);
 VAR_10[2] = (VAR_8 >> 8) & 0xff;
 VAR_10[3] = VAR_8 & 0xff;
 VAR_10[5] = 1;
 VAR_10[9] = 255;
 if (0 == (VAR_12 = FUNC_2(VAR_7, VAR_10, 12,
          VAR_11, 256, VAR_0))) {
  if (((VAR_11[16] << 8) | VAR_11[17]) != VAR_8) {
   FUNC_0("asked for element 0x%02x, got 0x%02x\n",
    VAR_8,(VAR_11[16] << 8) | VAR_11[17]);
   FUNC_4(VAR_11);
   return -VAR_1;
  }
  FUNC_6(VAR_9,VAR_11+16,16);
 } else {
  if (VAR_7->voltags) {
   VAR_7->voltags = 0;
   FUNC_1(VAR_5, "device has no volume tag support\n");
   goto retry;
  }
  FUNC_0("READ ELEMENT STATUS for element 0x%x failed\n",VAR_8);
 }
 FUNC_4(VAR_11);
 return VAR_12;
}
