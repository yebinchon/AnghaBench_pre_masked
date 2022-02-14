
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_param {int value; } ;
struct hostap_interface {TYPE_2__* local; } ;
struct TYPE_4__ {TYPE_1__* func; } ;
typedef TYPE_2__ local_info_t ;
struct TYPE_3__ {scalar_t__ (* reset_port ) (struct net_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct net_device*,int ,int) ;
 struct hostap_interface* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2,
    struct iw_request_info *VAR_3,
    struct iw_param *VAR_4, char *VAR_5)
{
 struct hostap_interface *VAR_6;
 local_info_t *VAR_7;

 VAR_6 = FUNC_1(VAR_2);
 VAR_7 = VAR_6->local;


 if (VAR_4->value < 1 || VAR_4->value > 3)
  return -VAR_0;

 if (FUNC_0(VAR_2, VAR_1, VAR_4->value) ||
     VAR_7->func->reset_port(VAR_2))
  return -VAR_0;

 return 0;
}
