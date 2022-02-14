
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_hba {int caps; int quirks; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline bool FUNC_0(struct ufs_hba *VAR_2)
{


 if ((VAR_2->caps & VAR_0) &&
     !(VAR_2->quirks & VAR_1))
  return 1;
 else
  return 0;



}
