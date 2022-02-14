
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int mnt_flags; } ;
struct mount {TYPE_1__ mnt; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;

__attribute__((used)) static bool FUNC_0(struct mount *VAR_10, unsigned int VAR_11)
{
 unsigned int VAR_12 = VAR_10->mnt.mnt_flags;

 if ((VAR_12 & VAR_5) &&
     !(VAR_11 & VAR_9))
  return 0;

 if ((VAR_12 & VAR_2) &&
     !(VAR_11 & VAR_6))
  return 0;

 if ((VAR_12 & VAR_4) &&
     !(VAR_11 & VAR_8))
  return 0;

 if ((VAR_12 & VAR_3) &&
     !(VAR_11 & VAR_7))
  return 0;

 if ((VAR_12 & VAR_1) &&
     ((VAR_12 & VAR_0) != (VAR_11 & VAR_0)))
  return 0;

 return 1;
}
