
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct dcb_app {scalar_t__ priority; scalar_t__ protocol; scalar_t__ selector; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,scalar_t__,scalar_t__,int ) ;
 int FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (struct net_device*,struct dcb_app*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2, struct dcb_app *VAR_3)
{
 int VAR_4;

 if (!FUNC_1(VAR_2, VAR_0))
  return -VAR_1;
 if (!(VAR_3->selector && VAR_3->protocol))
  return -VAR_1;


 VAR_4 = FUNC_0(VAR_2, VAR_3->selector - 1, VAR_3->protocol, 0);

 if (VAR_4 < 0)
  VAR_4 = FUNC_2(VAR_2, VAR_3);

 VAR_3->priority = FUNC_3(VAR_4) - 1;
 return 0;
}
