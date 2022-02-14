
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vxlan_config {unsigned long flags; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct nlattr*) ;
 int FUNC_1 (int,struct netlink_ext_ack*) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int FUNC_2(struct vxlan_config *VAR_3, struct nlattr *VAR_4[],
     int VAR_5, unsigned long VAR_6, bool VAR_7,
     bool VAR_8,
     struct netlink_ext_ack *VAR_9)
{
 unsigned long VAR_10;

 if (!VAR_4[VAR_5])
  return 0;

 if (VAR_7 && !VAR_8) {
  FUNC_1(VAR_5, VAR_9);
  return -VAR_0;
 }

 if (VAR_2[VAR_5].type == VAR_1)
  VAR_10 = VAR_3->flags | VAR_6;
 else if (FUNC_0(VAR_4[VAR_5]))
  VAR_10 = VAR_3->flags | VAR_6;
 else
  VAR_10 = VAR_3->flags & ~VAR_6;

 VAR_3->flags = VAR_10;

 return 0;
}
