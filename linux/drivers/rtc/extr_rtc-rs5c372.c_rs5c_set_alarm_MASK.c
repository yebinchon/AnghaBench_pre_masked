
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tm_mday; int tm_mon; int tm_year; int tm_hour; int tm_min; } ;
struct rtc_wkalrm {scalar_t__ enabled; TYPE_1__ time; } ;
struct rs5c372 {int* regs; } ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (size_t) ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 unsigned char FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,char*) ;
 struct rs5c372* FUNC_4 (struct i2c_client*) ;
 scalar_t__ FUNC_5 (struct i2c_client*,int,unsigned char) ;
 int FUNC_6 (struct rs5c372*) ;
 unsigned char FUNC_7 (struct rs5c372*,int ) ;
 struct i2c_client* FUNC_8 (struct device*) ;

__attribute__((used)) static int FUNC_9(struct device *VAR_5, struct rtc_wkalrm *VAR_6)
{
 struct i2c_client *VAR_7 = FUNC_8(VAR_5);
 struct rs5c372 *VAR_8 = FUNC_4(VAR_7);
 int VAR_9, VAR_10, VAR_11;
 unsigned char VAR_12[3];


 if (VAR_6->time.tm_mday != -1
   || VAR_6->time.tm_mon != -1
   || VAR_6->time.tm_year != -1)
  return -VAR_0;




 VAR_9 = FUNC_6(VAR_8);
 if (VAR_9 < 0)
  return VAR_9;
 if (VAR_8->regs[VAR_4] & VAR_2) {
  VAR_10 = FUNC_0(VAR_4);
  VAR_12[0] = VAR_8->regs[VAR_4] & ~VAR_2;
  if (FUNC_5(VAR_7, VAR_10, VAR_12[0]) < 0) {
   FUNC_2(VAR_5, "can't disable alarm\n");
   return -VAR_1;
  }
  VAR_8->regs[VAR_4] = VAR_12[0];
 }


 VAR_12[0] = FUNC_1(VAR_6->time.tm_min);
 VAR_12[1] = FUNC_7(VAR_8, VAR_6->time.tm_hour);
 VAR_12[2] = 0x7f;

 for (VAR_11 = 0; VAR_11 < sizeof(VAR_12); VAR_11++) {
  VAR_10 = FUNC_0(VAR_3 + VAR_11);
  if (FUNC_5(VAR_7, VAR_10, VAR_12[VAR_11]) < 0) {
   FUNC_2(VAR_5, "can't set alarm time\n");
   return -VAR_1;
  }
 }


 if (VAR_6->enabled) {
  VAR_10 = FUNC_0(VAR_4);
  VAR_12[0] = VAR_8->regs[VAR_4] | VAR_2;
  if (FUNC_5(VAR_7, VAR_10, VAR_12[0]) < 0)
   FUNC_3(VAR_5, "can't enable alarm\n");
  VAR_8->regs[VAR_4] = VAR_12[0];
 }

 return 0;
}
