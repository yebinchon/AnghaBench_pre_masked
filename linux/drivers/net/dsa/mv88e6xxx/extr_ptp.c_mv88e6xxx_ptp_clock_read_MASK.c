
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct mv88e6xxx_chip {TYPE_3__* info; } ;
struct cyclecounter {int dummy; } ;
struct TYPE_6__ {TYPE_2__* ops; } ;
struct TYPE_5__ {TYPE_1__* ptp_ops; } ;
struct TYPE_4__ {int (* clock_read ) (struct cyclecounter const*) ;} ;


 struct mv88e6xxx_chip* FUNC_0 (struct cyclecounter const*) ;
 int FUNC_1 (struct cyclecounter const*) ;

__attribute__((used)) static u64 FUNC_2(const struct cyclecounter *VAR_0)
{
 struct mv88e6xxx_chip *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1->info->ops->ptp_ops->clock_read)
  return VAR_1->info->ops->ptp_ops->clock_read(VAR_0);

 return 0;
}
