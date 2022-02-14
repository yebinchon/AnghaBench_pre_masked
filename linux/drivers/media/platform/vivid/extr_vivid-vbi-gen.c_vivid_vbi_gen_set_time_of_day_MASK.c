
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct tm {int tm_min; int tm_hour; int tm_mday; int tm_mon; int tm_wday; int tm_year; } ;
struct TYPE_2__ {int tz_minuteswest; } ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 (int ,int ,struct tm*) ;

__attribute__((used)) static void FUNC_3(u8 *VAR_1)
{
 struct tm VAR_2;
 u8 VAR_3, VAR_4;

 FUNC_2(FUNC_1(), 0, &VAR_2);
 VAR_1[0] = FUNC_0(0x07);
 VAR_1[1] = FUNC_0(0x01);
 VAR_1[2] = FUNC_0(0x40 | VAR_2.tm_min);
 VAR_1[3] = FUNC_0(0x40 | VAR_2.tm_hour);
 VAR_1[4] = FUNC_0(0x40 | VAR_2.tm_mday);
 if (VAR_2.tm_mday == 1 && VAR_2.tm_mon == 2 &&
     VAR_0.tz_minuteswest > VAR_2.tm_min + VAR_2.tm_hour * 60)
  VAR_1[4] = FUNC_0(0x60 | VAR_2.tm_mday);
 VAR_1[5] = FUNC_0(0x40 | (1 + VAR_2.tm_mon));
 VAR_1[6] = FUNC_0(0x40 | (1 + VAR_2.tm_wday));
 VAR_1[7] = FUNC_0(0x40 | ((VAR_2.tm_year - 90) & 0x3f));
 VAR_1[8] = FUNC_0(0x0f);
 for (VAR_3 = VAR_4 = 0; VAR_4 <= 8; VAR_4++)
  VAR_3 += VAR_1[VAR_4] & 0x7f;
 VAR_1[9] = FUNC_0(0x100 - VAR_3);
 VAR_3 = 0;
 VAR_1[10] = FUNC_0(0x07);
 VAR_1[11] = FUNC_0(0x04);
 if (VAR_0.tz_minuteswest >= 0)
  VAR_1[12] = FUNC_0(0x40 | ((VAR_0.tz_minuteswest / 60) & 0x1f));
 else
  VAR_1[12] = FUNC_0(0x40 | ((24 + VAR_0.tz_minuteswest / 60) & 0x1f));
 VAR_1[13] = FUNC_0(0);
 VAR_1[14] = FUNC_0(0x0f);
 for (VAR_3 = 0, VAR_4 = 10; VAR_4 <= 14; VAR_4++)
  VAR_3 += VAR_1[VAR_4] & 0x7f;
 VAR_1[15] = FUNC_0(0x100 - VAR_3);
}
