
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bond_params {int mode; } ;
struct bonding {TYPE_1__* dev; struct bond_params params; } ;
struct bond_option {int flags; int unsuppmodes; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct bonding*) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(struct bonding *VAR_6,
          const struct bond_option *VAR_7)
{
 struct bond_params *VAR_8 = &VAR_6->params;

 if (FUNC_1(VAR_8->mode, &VAR_7->unsuppmodes))
  return -VAR_2;
 if ((VAR_7->flags & VAR_1) && FUNC_0(VAR_6))
  return -VAR_4;
 if ((VAR_7->flags & VAR_0) && (VAR_6->dev->flags & VAR_5))
  return -VAR_3;

 return 0;
}
