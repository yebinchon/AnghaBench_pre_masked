
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mnt_flags; } ;
struct mount {TYPE_1__ mnt; int mnt_expire; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int *) ;
 struct mount* FUNC_1 (struct mount*,struct mount*) ;

__attribute__((used)) static void FUNC_2(struct mount *VAR_10)
{
 struct mount *VAR_11;

 for (VAR_11 = VAR_10; VAR_11; VAR_11 = FUNC_1(VAR_11, VAR_10)) {
  int VAR_12 = VAR_11->mnt.mnt_flags;

  VAR_12 |= VAR_1;

  if (VAR_12 & VAR_9)
   VAR_12 |= VAR_5;

  if (VAR_12 & VAR_6)
   VAR_12 |= VAR_2;

  if (VAR_12 & VAR_8)
   VAR_12 |= VAR_4;

  if (VAR_12 & VAR_7)
   VAR_12 |= VAR_3;

  if (FUNC_0(&VAR_11->mnt_expire))
   VAR_12 |= VAR_0;
  VAR_11->mnt.mnt_flags = VAR_12;
 }
}
