
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_plock_info {scalar_t__* version; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,scalar_t__,scalar_t__,int ,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct dlm_plock_info *VAR_4)
{
 if ((VAR_0 != VAR_4->version[0]) ||
     (VAR_1 < VAR_4->version[1])) {
  FUNC_0("plock device version mismatch: "
     "kernel (%u.%u.%u), user (%u.%u.%u)",
     VAR_0,
     VAR_1,
     VAR_2,
     VAR_4->version[0],
     VAR_4->version[1],
     VAR_4->version[2]);
  return -VAR_3;
 }
 return 0;
}
