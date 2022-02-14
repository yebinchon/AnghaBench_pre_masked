
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wrqu ;
struct TYPE_2__ {int sa_family; } ;
union iwreq_data {TYPE_1__ ap_addr; } ;
struct net_device {int dummy; } ;
struct local_info {int dev; } ;
struct hostap_interface {struct local_info* local; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (union iwreq_data*,int ,int) ;
 struct hostap_interface* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int ) ;
 int FUNC_3 (int ,int ,union iwreq_data*,int *) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_2)
{
 struct hostap_interface *VAR_3;
 struct local_info *VAR_4;
 union iwreq_data VAR_5;

 VAR_3 = FUNC_1(VAR_2);
 VAR_4 = VAR_3->local;



 FUNC_0(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.ap_addr.sa_family = VAR_0;
 FUNC_3(VAR_4->dev, VAR_1, &VAR_5, ((void*)0));


 FUNC_2(VAR_2, 0);
}
