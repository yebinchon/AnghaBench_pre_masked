
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union evm_time {int* bytes; int value; } ;
struct rtc_time {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,struct rtc_time*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_4, struct rtc_time *VAR_5)
{
 union evm_time VAR_6;
 int VAR_7;
 int VAR_8 = 0;

 do {





  VAR_7 = FUNC_1(VAR_0);
  if (VAR_7 < 0)
   return VAR_7;
  if (VAR_8 && VAR_6.bytes[0] == VAR_7)
   break;
  VAR_6.bytes[0] = VAR_7;

  VAR_7 = FUNC_1(VAR_1);
  if (VAR_7 < 0)
   return VAR_7;
  if (VAR_8 && VAR_6.bytes[1] == VAR_7)
   break;
  VAR_6.bytes[1] = VAR_7;

  VAR_7 = FUNC_1(VAR_2);
  if (VAR_7 < 0)
   return VAR_7;
  if (VAR_8 && VAR_6.bytes[2] == VAR_7)
   break;
  VAR_6.bytes[2] = VAR_7;

  VAR_7 = FUNC_1(VAR_3);
  if (VAR_7 < 0)
   return VAR_7;
  if (VAR_8 && VAR_6.bytes[3] == VAR_7)
   break;
  VAR_6.bytes[3] = VAR_7;

 } while (++VAR_8 < 5);

 FUNC_0(VAR_4, "read timestamp %08x\n", VAR_6.value);

 FUNC_3(FUNC_2(VAR_6.value), VAR_5);
 return 0;
}
