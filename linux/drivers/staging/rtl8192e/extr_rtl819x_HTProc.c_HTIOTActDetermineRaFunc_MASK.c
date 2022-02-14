
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtllib_device {struct rt_hi_throughput* pHTInfo; } ;
struct rt_hi_throughput {scalar_t__ IOTPeer; int IOTAction; int IOTRaFunc; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_0(struct rtllib_device *VAR_5, bool VAR_6)
{
 struct rt_hi_throughput *VAR_7 = VAR_5->pHTInfo;

 VAR_7->IOTRaFunc &= VAR_2;

 if (VAR_7->IOTPeer == VAR_1 && !VAR_6)
  VAR_7->IOTRaFunc |= VAR_3;

 if (VAR_7->IOTAction & VAR_0)
  VAR_7->IOTRaFunc |= VAR_4;

}
