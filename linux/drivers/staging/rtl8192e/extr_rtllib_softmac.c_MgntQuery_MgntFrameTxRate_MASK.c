
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtllib_device {int basic_rate; scalar_t__ mode; struct rt_hi_throughput* pHTInfo; } ;
struct rt_hi_throughput {int IOTAction; int bCurSuppCCK; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static u8 FUNC_0(struct rtllib_device *VAR_4)
{
 struct rt_hi_throughput *VAR_5 = VAR_4->pHTInfo;
 u8 VAR_6;

 if (VAR_5->IOTAction & VAR_0)
  VAR_6 = 0x0c;
 else
  VAR_6 = VAR_4->basic_rate & 0x7f;

 if (VAR_6 == 0) {
  if (VAR_4->mode == VAR_1 ||
     VAR_4->mode == VAR_3 ||
     (VAR_4->mode == VAR_2 && !VAR_5->bCurSuppCCK))
   VAR_6 = 0x0c;
  else
   VAR_6 = 0x02;
 }

 return VAR_6;
}
