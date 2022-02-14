
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ state; } ;
struct res_mpt {TYPE_1__ com; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_0(struct res_mpt *VAR_4)
{
 if (VAR_4->com.state == VAR_2)
  return -VAR_0;
 else if (VAR_4->com.state != VAR_3)
  return -VAR_1;

 return 0;
}
