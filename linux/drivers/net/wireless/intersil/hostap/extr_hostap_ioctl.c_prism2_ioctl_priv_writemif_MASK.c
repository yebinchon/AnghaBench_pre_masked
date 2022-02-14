
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef char u16 ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct hostap_interface {TYPE_2__* local; } ;
struct TYPE_4__ {TYPE_1__* func; } ;
typedef TYPE_2__ local_info_t ;
struct TYPE_3__ {scalar_t__ (* cmd ) (struct net_device*,int ,char,char*,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct hostap_interface* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct net_device*,int ,char,char*,int *) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2,
          struct iw_request_info *VAR_3,
          void *VAR_4, char *VAR_5)
{
 struct hostap_interface *VAR_6;
 local_info_t *VAR_7;
 u16 VAR_8, VAR_9;

 VAR_6 = FUNC_0(VAR_2);
 VAR_7 = VAR_6->local;

 VAR_8 = *VAR_5;
 VAR_9 = *(VAR_5 + 1);
 if (VAR_7->func->cmd(VAR_2, VAR_1, VAR_8, &VAR_9, ((void*)0)))
  return -VAR_0;

 return 0;
}
