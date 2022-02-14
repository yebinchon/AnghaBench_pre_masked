
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* iso; } ;
struct TYPE_6__ {TYPE_2__ ctrls; } ;
struct fimc_is {TYPE_3__ isp; } ;
struct TYPE_4__ {unsigned int val; } ;


 unsigned int FUNC_0 (unsigned int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct fimc_is*,int ,unsigned int) ;
 unsigned int* VAR_4 ;

__attribute__((used)) static int FUNC_2(struct fimc_is *VAR_5, int VAR_6)
{
 unsigned int VAR_7, VAR_8;

 if (VAR_6 == VAR_3) {
  FUNC_1(VAR_5, VAR_1, 0);
  return 0;
 }
 VAR_7 = VAR_5->isp.ctrls.iso->val;
 if (VAR_7 >= FUNC_0(VAR_4))
  return -VAR_0;

 VAR_8 = VAR_4[VAR_7];
 FUNC_1(VAR_5, VAR_2, VAR_8);
 return 0;
}
