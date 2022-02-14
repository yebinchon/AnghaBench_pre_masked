
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct timestamp_t {int sec; int min; int hour; int day; int mon; int year; } ;
struct dos_dentry_t {int modify_date; int modify_time; int create_date; int create_time; } ;
struct dentry_t {int dummy; } ;


 int FUNC_0 (int ) ;



void FUNC_1(struct dentry_t *VAR_0, struct timestamp_t *VAR_1,
   u8 VAR_2)
{
 u16 VAR_3 = 0x00, VAR_4 = 0x21;
 struct dos_dentry_t *VAR_5 = (struct dos_dentry_t *)VAR_0;

 switch (VAR_2) {
 case 129:
  VAR_3 = FUNC_0(VAR_5->create_time);
  VAR_4 = FUNC_0(VAR_5->create_date);
  break;
 case 128:
  VAR_3 = FUNC_0(VAR_5->modify_time);
  VAR_4 = FUNC_0(VAR_5->modify_date);
  break;
 }

 VAR_1->sec = (VAR_3 & 0x001F) << 1;
 VAR_1->min = (VAR_3 >> 5) & 0x003F;
 VAR_1->hour = (VAR_3 >> 11);
 VAR_1->day = (VAR_4 & 0x001F);
 VAR_1->mon = (VAR_4 >> 5) & 0x000F;
 VAR_1->year = (VAR_4 >> 9);
}
