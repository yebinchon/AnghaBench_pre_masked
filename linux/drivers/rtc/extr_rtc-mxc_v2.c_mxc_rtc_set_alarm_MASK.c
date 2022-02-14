
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ time64_t ;
struct rtc_wkalrm {int enabled; int time; } ;
struct mxc_rtc_data {scalar_t__ ioaddr; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct mxc_rtc_data* FUNC_0 (struct device*) ;
 int FUNC_1 (struct mxc_rtc_data*,int ) ;
 int FUNC_2 (struct mxc_rtc_data*) ;
 int FUNC_3 (struct device*,scalar_t__) ;
 int FUNC_4 (struct mxc_rtc_data*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_3, struct rtc_wkalrm *VAR_4)
{
 const time64_t VAR_5 = FUNC_5(&VAR_4->time);
 struct mxc_rtc_data *VAR_6 = FUNC_0(VAR_3);
 int VAR_7 = FUNC_2(VAR_6);

 if (VAR_7)
  return VAR_7;

 FUNC_6((u32)VAR_5, VAR_6->ioaddr + VAR_0);


 FUNC_6(VAR_2, VAR_6->ioaddr + VAR_1);
 FUNC_3(VAR_3, VAR_6->ioaddr);

 FUNC_1(VAR_6, VAR_4->enabled);
 FUNC_3(VAR_3, VAR_6->ioaddr);
 FUNC_4(VAR_6);
 return VAR_7;
}
