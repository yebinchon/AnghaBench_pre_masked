
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct fsg_lun {int num_sectors; int sense_data; } ;
struct fsg_common {int* cmnd; struct fsg_lun* curlun; } ;
struct fsg_buffhd {scalar_t__ buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int ,int) ;
 int FUNC_1 (int*,int,int ) ;

__attribute__((used)) static int FUNC_2(struct fsg_common *VAR_2, struct fsg_buffhd *VAR_3)
{
 struct fsg_lun *VAR_4 = VAR_2->curlun;
 int VAR_5 = VAR_2->cmnd[1] & 0x02;
 int VAR_6 = VAR_2->cmnd[6];
 u8 *VAR_7 = (u8 *)VAR_3->buf;

 if ((VAR_2->cmnd[1] & ~0x02) != 0 ||
   VAR_6 > 1) {
  VAR_4->sense_data = VAR_1;
  return -VAR_0;
 }

 FUNC_0(VAR_7, 0, 20);
 VAR_7[1] = (20-2);
 VAR_7[2] = 1;
 VAR_7[3] = 1;
 VAR_7[5] = 0x16;
 VAR_7[6] = 0x01;
 FUNC_1(&VAR_7[8], VAR_5, 0);

 VAR_7[13] = 0x16;
 VAR_7[14] = 0xAA;
 FUNC_1(&VAR_7[16], VAR_5, VAR_4->num_sectors);
 return 20;
}
