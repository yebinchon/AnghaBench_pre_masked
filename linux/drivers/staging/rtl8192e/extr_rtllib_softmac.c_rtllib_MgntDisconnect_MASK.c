
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtllib_device {scalar_t__ ps; scalar_t__ state; scalar_t__ iw_mode; int dev; int (* sta_wake_up ) (int ) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct rtllib_device*,int ) ;
 int FUNC_1 (struct rtllib_device*) ;
 int FUNC_2 (int ) ;

bool FUNC_3(struct rtllib_device *VAR_4, u8 VAR_5)
{
 if (VAR_4->ps != VAR_3)
  VAR_4->sta_wake_up(VAR_4->dev);

 if (VAR_4->state == VAR_2) {
  if (VAR_4->iw_mode == VAR_0)
   FUNC_1(VAR_4);
  if (VAR_4->iw_mode == VAR_1)
   FUNC_0(VAR_4, VAR_5);

 }

 return 1;
}
