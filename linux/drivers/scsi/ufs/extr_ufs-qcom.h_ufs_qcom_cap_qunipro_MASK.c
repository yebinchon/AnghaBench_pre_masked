
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_qcom_host {int caps; } ;


 int VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(struct ufs_qcom_host *VAR_1)
{
 if (VAR_1->caps & VAR_0)
  return 1;
 else
  return 0;
}
