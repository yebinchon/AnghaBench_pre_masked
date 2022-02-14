
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct timestamp_t {int hour; int min; int sec; int year; int mon; int day; } ;
struct dos_dentry_t {int modify_date; int modify_time; int create_date; int create_time; } ;
struct dentry_t {int dummy; } ;


 int FUNC_0 (int ,int) ;



void FUNC_1(struct dentry_t *VAR_0, struct timestamp_t *VAR_1,
   u8 VAR_2)
{
 u16 VAR_3, VAR_4;
 struct dos_dentry_t *VAR_5 = (struct dos_dentry_t *)VAR_0;

 VAR_3 = (VAR_1->hour << 11) | (VAR_1->min << 5) | (VAR_1->sec >> 1);
 VAR_4 = (VAR_1->year << 9) | (VAR_1->mon << 5) | VAR_1->day;

 switch (VAR_2) {
 case 129:
  FUNC_0(VAR_5->create_time, VAR_3);
  FUNC_0(VAR_5->create_date, VAR_4);
  break;
 case 128:
  FUNC_0(VAR_5->modify_time, VAR_3);
  FUNC_0(VAR_5->modify_date, VAR_4);
  break;
 }
}
