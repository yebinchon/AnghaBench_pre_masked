
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {TYPE_1__* mfd_cell; } ;
struct mfd_cell {int dummy; } ;
typedef int atomic_t ;
struct TYPE_2__ {int * usage_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct mfd_cell const*,int,int ) ;

__attribute__((used)) static int FUNC_1(struct platform_device *VAR_2,
     const struct mfd_cell *VAR_3,
     atomic_t *VAR_4)
{
 if (!VAR_3)
  return 0;

 VAR_2->mfd_cell = FUNC_0(VAR_3, sizeof(*VAR_3), VAR_1);
 if (!VAR_2->mfd_cell)
  return -VAR_0;

 VAR_2->mfd_cell->usage_count = VAR_4;
 return 0;
}
