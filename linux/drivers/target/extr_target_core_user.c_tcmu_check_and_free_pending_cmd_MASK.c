
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcmu_cmd {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct tcmu_cmd*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(struct tcmu_cmd *VAR_3)
{
 if (FUNC_1(VAR_1, &VAR_3->flags)) {
  FUNC_0(VAR_2, VAR_3);
  return 0;
 }
 return -VAR_0;
}
