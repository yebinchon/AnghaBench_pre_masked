
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct hostap_interface {TYPE_2__* local; } ;
typedef int buf ;
struct TYPE_4__ {TYPE_1__* func; } ;
struct TYPE_3__ {int (* set_rid ) (struct net_device*,int,char**,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*,int) ;
 int FUNC_1 (char*,int ,int) ;
 struct hostap_interface* FUNC_2 (struct net_device*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (struct net_device*,int,char**,int) ;

int FUNC_5(struct net_device *VAR_1, int VAR_2, const char *VAR_3)
{
 struct hostap_interface *VAR_4;
 char VAR_5[VAR_0 + 2];
 int VAR_6;

 VAR_4 = FUNC_2(VAR_1);
 VAR_6 = FUNC_3(VAR_3);
 if (VAR_6 > VAR_0)
  return -1;
 FUNC_1(VAR_5, 0, sizeof(VAR_5));
 VAR_5[0] = VAR_6;
 FUNC_0(VAR_5 + 2, VAR_3, VAR_6);

 return VAR_4->local->func->set_rid(VAR_1, VAR_2, &VAR_5, VAR_0 + 2);
}
