
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct hostap_interface {TYPE_1__* local; } ;
struct TYPE_3__ {scalar_t__ num_dev_open; int dev_enabled; int pri_only; scalar_t__ no_pri; scalar_t__ hw_downloading; } ;
typedef TYPE_1__ local_info_t ;


 int VAR_0 ;
 struct hostap_interface* FUNC_0 (struct net_device*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (struct net_device*,int) ;
 scalar_t__ FUNC_3 (struct net_device*,int) ;
 scalar_t__ FUNC_4 (struct net_device*,int) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_1, int VAR_2)
{
 struct hostap_interface *VAR_3;
 local_info_t *VAR_4;

 VAR_3 = FUNC_0(VAR_1);
 VAR_4 = VAR_3->local;

 if (VAR_4->hw_downloading)
  return 1;

 if (FUNC_3(VAR_1, VAR_2)) {
  return VAR_4->no_pri ? 0 : 1;
 }

 if (FUNC_4(VAR_1, VAR_2))
  return 1;



 if (!VAR_4->pri_only &&
     (VAR_2 == 0 || (VAR_2 == 2 && VAR_4->num_dev_open > 0))) {
  if (!VAR_4->dev_enabled)
   FUNC_1(VAR_4, VAR_0);
  VAR_4->dev_enabled = 1;
  return FUNC_2(VAR_1, VAR_2);
 }

 return 0;
}
