
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct dcb_app {scalar_t__ selector; int priority; scalar_t__ protocol; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct net_device*,scalar_t__,scalar_t__,int) ;
 int FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (struct net_device*,struct dcb_app*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_4, struct dcb_app *VAR_5)
{
 int VAR_6;

 if (!FUNC_1(VAR_4, VAR_0))
  return -VAR_1;
 if (!(VAR_5->selector && VAR_5->protocol))
  return -VAR_1;

 if (!(VAR_5->selector > VAR_3 &&
       VAR_5->selector < VAR_2))
  return -VAR_1;


 VAR_6 = FUNC_0(VAR_4, VAR_5->selector - 1, VAR_5->protocol,
        (1 << VAR_5->priority));
 if (VAR_6)
  return VAR_6;

 return FUNC_2(VAR_4, VAR_5);
}
