
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int ,int ,int *) ;

__attribute__((used)) static int FUNC_2(void)
{
 VAR_3 = FUNC_1(0, VAR_0, &VAR_2);
 if (VAR_3 < 0)
  return VAR_3;
 if (FUNC_0(&VAR_1) < 0)
  return -1;
 return 0;
}
