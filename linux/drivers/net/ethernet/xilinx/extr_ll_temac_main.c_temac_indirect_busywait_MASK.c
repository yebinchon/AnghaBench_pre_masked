
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct temac_local {int dummy; } ;
typedef int ktime_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct temac_local*) ;
 int FUNC_2 (struct temac_local*,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;

int FUNC_6(struct temac_local *VAR_2)
{
 ktime_t VAR_3 = FUNC_3(FUNC_4(), VAR_1);

 FUNC_5(FUNC_2(VAR_2, VAR_3));
 if (FUNC_0(!FUNC_1(VAR_2)))
  return -VAR_0;
 else
  return 0;
}
