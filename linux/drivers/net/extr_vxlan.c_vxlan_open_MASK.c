
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ age_interval; } ;
struct TYPE_3__ {int remote_ip; } ;
struct vxlan_dev {int age_timer; TYPE_2__ cfg; TYPE_1__ default_dst; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,scalar_t__) ;
 struct vxlan_dev* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct vxlan_dev*) ;
 int FUNC_4 (struct vxlan_dev*) ;
 int FUNC_5 (struct vxlan_dev*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_3)
{
 struct vxlan_dev *VAR_4 = FUNC_1(VAR_3);
 int VAR_5;

 VAR_5 = FUNC_4(VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 if (FUNC_2(&VAR_4->default_dst.remote_ip)) {
  VAR_5 = FUNC_3(VAR_4);
  if (VAR_5 == -VAR_0)
   VAR_5 = 0;
  if (VAR_5) {
   FUNC_5(VAR_4);
   return VAR_5;
  }
 }

 if (VAR_4->cfg.age_interval)
  FUNC_0(&VAR_4->age_timer, VAR_2 + VAR_1);

 return VAR_5;
}
