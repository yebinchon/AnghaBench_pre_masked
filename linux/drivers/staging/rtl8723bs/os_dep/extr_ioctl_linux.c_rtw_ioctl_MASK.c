
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int data; } ;
struct iwreq {TYPE_1__ u; } ;
struct ifreq {int dummy; } ;


 int VAR_0 ;



 int FUNC_0 (struct net_device*,int *) ;
 int FUNC_1 (struct net_device*,TYPE_1__*) ;
 int FUNC_2 (struct net_device*,int *) ;

int FUNC_3(struct net_device *VAR_1, struct ifreq *VAR_2, int VAR_3)
{
 struct iwreq *VAR_4 = (struct iwreq *)VAR_2;
 int VAR_5 = 0;

 switch (VAR_3) {
 case 129:
  VAR_5 = FUNC_2(VAR_1, &VAR_4->u.data);
  break;
 case 130:
  VAR_5 = FUNC_0(VAR_1, &VAR_4->u.data);
  break;
 case 128:
  VAR_5 = FUNC_1(VAR_1, &VAR_4->u);
  break;
 default:
  VAR_5 = -VAR_0;
  break;
 }

 return VAR_5;
}
