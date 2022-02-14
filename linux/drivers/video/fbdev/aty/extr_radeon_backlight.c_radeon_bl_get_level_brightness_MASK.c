
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct radeon_bl_privdata {scalar_t__ negative; TYPE_2__* rinfo; } ;
struct TYPE_4__ {TYPE_1__* info; } ;
struct TYPE_3__ {int* bl_curve; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct radeon_bl_privdata *VAR_2,
  int VAR_3)
{
 int VAR_4;



 VAR_4 = VAR_2->rinfo->info->bl_curve[VAR_3] *
   VAR_0 / VAR_1;

 if (VAR_4 < 0)
  VAR_4 = 0;
 else if (VAR_4 > VAR_1)
  VAR_4 = VAR_1;

 if (VAR_2->negative)
  VAR_4 = VAR_1 - VAR_4;

 return VAR_4;
}
