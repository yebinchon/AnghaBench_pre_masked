
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct dcb_app {scalar_t__ selector; scalar_t__ priority; int protocol; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*,scalar_t__,int ,scalar_t__) ;
 int FUNC_1 (struct net_device*,struct dcb_app*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_3, u8 VAR_4, u16 VAR_5,
   u8 VAR_6)
{
 int VAR_7;
 struct dcb_app VAR_8 = {
  .selector = VAR_4,
  .protocol = VAR_5,
  .priority = VAR_6,
 };

 if (VAR_4 != VAR_0 &&
     VAR_4 != VAR_1)
  return -VAR_2;


 VAR_7 = FUNC_0(VAR_3, VAR_4 == VAR_0 ?
         VAR_4 : 3, VAR_5, VAR_6);
 if (VAR_7)
  return VAR_7;

 return FUNC_1(VAR_3, &VAR_8);
}
