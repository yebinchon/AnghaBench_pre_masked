
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int link_up; } ;
struct TYPE_3__ {int link_report_flags; } ;
struct bnx2x {int flags; scalar_t__ state; TYPE_2__ link_vars; TYPE_1__ vf_link_vars; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct bnx2x*) ;
 int VAR_2 ;
 struct bnx2x* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static u32 FUNC_3(struct net_device *VAR_3)
{
 struct bnx2x *VAR_4 = FUNC_1(VAR_3);

 if (VAR_4->flags & VAR_2 || (VAR_4->state != VAR_1))
  return 0;

 if (FUNC_0(VAR_4))
  return !FUNC_2(VAR_0,
     &VAR_4->vf_link_vars.link_report_flags);

 return VAR_4->link_vars.link_up;
}
