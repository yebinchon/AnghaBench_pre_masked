
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct fsg_lun {scalar_t__* inquiry_string; scalar_t__ removable; scalar_t__ cdrom; } ;
struct fsg_common {int bad_lun_okay; scalar_t__* inquiry_string; struct fsg_lun* curlun; } ;
struct fsg_buffhd {scalar_t__ buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*,scalar_t__*,int) ;
 int FUNC_1 (int*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct fsg_common *VAR_3, struct fsg_buffhd *VAR_4)
{
 struct fsg_lun *VAR_5 = VAR_3->curlun;
 u8 *VAR_6 = (u8 *) VAR_4->buf;

 if (!VAR_5) {
  VAR_3->bad_lun_okay = 1;
  FUNC_1(VAR_6, 0, 36);
  VAR_6[0] = VAR_1;
  VAR_6[4] = 31;
  return 36;
 }

 VAR_6[0] = VAR_5->cdrom ? VAR_2 : VAR_0;
 VAR_6[1] = VAR_5->removable ? 0x80 : 0;
 VAR_6[2] = 2;
 VAR_6[3] = 2;
 VAR_6[4] = 31;
 VAR_6[5] = 0;
 VAR_6[6] = 0;
 VAR_6[7] = 0;
 if (VAR_5->inquiry_string[0])
  FUNC_0(VAR_6 + 8, VAR_5->inquiry_string,
         sizeof(VAR_5->inquiry_string));
 else
  FUNC_0(VAR_6 + 8, VAR_3->inquiry_string,
         sizeof(VAR_3->inquiry_string));
 return 36;
}
