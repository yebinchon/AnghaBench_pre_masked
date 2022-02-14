
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mnt_flags; } ;
struct mount {TYPE_1__ mnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (struct mount*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct mount *VAR_3)
{
 int VAR_4 = 0;

 FUNC_0();
 VAR_3->mnt.mnt_flags |= VAR_2;




 FUNC_2();
 if (FUNC_1(VAR_3) > 0)
  VAR_4 = -VAR_0;
 else
  VAR_3->mnt.mnt_flags |= VAR_1;




 FUNC_3();
 VAR_3->mnt.mnt_flags &= ~VAR_2;
 FUNC_4();
 return VAR_4;
}
