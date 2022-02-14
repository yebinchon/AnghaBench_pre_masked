
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct fsg_lun {scalar_t__ unit_attention_data; scalar_t__ sense_data; scalar_t__ sense_data_info; int info_valid; } ;
struct fsg_common {int bad_lun_okay; struct fsg_lun* curlun; } ;
struct fsg_buffhd {scalar_t__ buf; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int*,int ,int) ;
 int FUNC_4 (scalar_t__,int*) ;

__attribute__((used)) static int FUNC_5(struct fsg_common *VAR_2, struct fsg_buffhd *VAR_3)
{
 struct fsg_lun *VAR_4 = VAR_2->curlun;
 u8 *VAR_5 = (u8 *) VAR_3->buf;
 u32 VAR_6, VAR_7;
 int VAR_8;
 if (!VAR_4) {
  VAR_2->bad_lun_okay = 1;
  VAR_6 = VAR_0;
  VAR_7 = 0;
  VAR_8 = 0;
 } else {
  VAR_6 = VAR_4->sense_data;
  VAR_7 = VAR_4->sense_data_info;
  VAR_8 = VAR_4->info_valid << 7;
  VAR_4->sense_data = VAR_1;
  VAR_4->sense_data_info = 0;
  VAR_4->info_valid = 0;
 }

 FUNC_3(VAR_5, 0, 18);
 VAR_5[0] = VAR_8 | 0x70;
 VAR_5[2] = FUNC_2(VAR_6);
 FUNC_4(VAR_7, &VAR_5[3]);
 VAR_5[7] = 18 - 8;
 VAR_5[12] = FUNC_0(VAR_6);
 VAR_5[13] = FUNC_1(VAR_6);
 return 18;
}
