
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint16_t ;
struct timestamp {int typeAndTimezone; int minute; int hour; int day; int month; int year; } ;
struct super_block {int dummy; } ;
struct primaryVolDesc {int volSetIdent; int volIdent; struct timestamp recordingDateAndTime; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int sector_t ;
struct TYPE_2__ {scalar_t__* s_volume_ident; int s_record_time; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (scalar_t__*) ;
 scalar_t__* FUNC_3 (int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (scalar_t__*,char*) ;
 int FUNC_7 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_8 (char*,scalar_t__*,...) ;
 int FUNC_9 (int *,struct timestamp) ;
 int FUNC_10 (struct super_block*,scalar_t__*,int,int ,int) ;
 struct buffer_head* FUNC_11 (struct super_block*,int ,int ,scalar_t__*) ;

__attribute__((used)) static int FUNC_12(struct super_block *VAR_5, sector_t VAR_6)
{
 struct primaryVolDesc *VAR_7;
 uint8_t *VAR_8;
 struct buffer_head *VAR_9;
 uint16_t VAR_10;
 int VAR_11 = -VAR_2;
 struct timestamp *VAR_12;

 VAR_8 = FUNC_3(128, VAR_3);
 if (!VAR_8)
  return -VAR_2;

 VAR_9 = FUNC_11(VAR_5, VAR_6, VAR_6, &VAR_10);
 if (!VAR_9) {
  VAR_11 = -VAR_0;
  goto out2;
 }

 if (VAR_10 != VAR_4) {
  VAR_11 = -VAR_1;
  goto out_bh;
 }

 VAR_7 = (struct primaryVolDesc *)VAR_9->b_data;

 FUNC_9(&FUNC_0(VAR_5)->s_record_time,
         VAR_7->recordingDateAndTime);
 VAR_12 = &VAR_7->recordingDateAndTime;
 FUNC_8("recording time %04u/%02u/%02u %02u:%02u (%x)\n",
    FUNC_4(VAR_12->year), VAR_12->month, VAR_12->day, VAR_12->hour,
    VAR_12->minute, FUNC_4(VAR_12->typeAndTimezone));

 VAR_11 = FUNC_10(VAR_5, VAR_8, 31, VAR_7->volIdent, 32);
 if (VAR_11 < 0) {
  FUNC_6(FUNC_0(VAR_5)->s_volume_ident, "InvalidName");
  FUNC_5("incorrect volume identification, setting to "
   "'InvalidName'\n");
 } else {
  FUNC_7(FUNC_0(VAR_5)->s_volume_ident, VAR_8, VAR_11);
 }
 FUNC_8("volIdent[] = '%s'\n", FUNC_0(VAR_5)->s_volume_ident);

 VAR_11 = FUNC_10(VAR_5, VAR_8, 127, VAR_7->volSetIdent, 128);
 if (VAR_11 < 0) {
  VAR_11 = 0;
  goto out_bh;
 }
 VAR_8[VAR_11] = 0;
 FUNC_8("volSetIdent[] = '%s'\n", VAR_8);

 VAR_11 = 0;
out_bh:
 FUNC_1(VAR_9);
out2:
 FUNC_2(VAR_8);
 return VAR_11;
}
