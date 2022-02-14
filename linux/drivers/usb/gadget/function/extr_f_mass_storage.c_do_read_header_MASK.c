
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct fsg_lun {scalar_t__ num_sectors; int sense_data; } ;
struct fsg_common {int* cmnd; struct fsg_lun* curlun; } ;
struct fsg_buffhd {scalar_t__ buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int*) ;
 int FUNC_1 (int*,int ,int) ;
 int FUNC_2 (int*,int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct fsg_common *VAR_3, struct fsg_buffhd *VAR_4)
{
 struct fsg_lun *VAR_5 = VAR_3->curlun;
 int VAR_6 = VAR_3->cmnd[1] & 0x02;
 u32 VAR_7 = FUNC_0(&VAR_3->cmnd[2]);
 u8 *VAR_8 = (u8 *)VAR_4->buf;

 if (VAR_3->cmnd[1] & ~0x02) {
  VAR_5->sense_data = VAR_1;
  return -VAR_0;
 }
 if (VAR_7 >= VAR_5->num_sectors) {
  VAR_5->sense_data = VAR_2;
  return -VAR_0;
 }

 FUNC_1(VAR_8, 0, 8);
 VAR_8[0] = 0x01;
 FUNC_2(&VAR_8[4], VAR_6, VAR_7);
 return 8;
}
