
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mv88e6xxx_chip {TYPE_2__* info; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* stats_snapshot ) (struct mv88e6xxx_chip*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct mv88e6xxx_chip*,int) ;

__attribute__((used)) static int FUNC_1(struct mv88e6xxx_chip *VAR_1, int VAR_2)
{
 if (!VAR_1->info->ops->stats_snapshot)
  return -VAR_0;

 return VAR_1->info->ops->stats_snapshot(VAR_1, VAR_2);
}
