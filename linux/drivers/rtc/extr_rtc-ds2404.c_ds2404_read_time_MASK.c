
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtc_time {int dummy; } ;
struct device {int dummy; } ;
typedef scalar_t__ __le32 ;


 int FUNC_0 (struct device*,int,int,int *) ;
 unsigned long FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned long,struct rtc_time*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, struct rtc_time *VAR_1)
{
 unsigned long VAR_2 = 0;
 __le32 VAR_3 = 0;

 FUNC_0(VAR_0, 0x203, 4, (u8 *)&VAR_3);
 VAR_2 = FUNC_1(VAR_3);

 FUNC_2(VAR_2, VAR_1);
 return 0;
}
