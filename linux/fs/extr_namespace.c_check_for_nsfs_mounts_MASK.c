
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mnt_root; } ;
struct mount {TYPE_1__ mnt; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ) ;
 struct mount* FUNC_2 (struct mount*,struct mount*) ;
 int FUNC_3 () ;

__attribute__((used)) static bool FUNC_4(struct mount *VAR_0)
{
 struct mount *VAR_1;
 bool VAR_2 = 0;

 FUNC_0();
 for (VAR_1 = VAR_0; VAR_1; VAR_1 = FUNC_2(VAR_1, VAR_0))
  if (FUNC_1(VAR_1->mnt.mnt_root))
   goto out;

 VAR_2 = 1;
out:
 FUNC_3();
 return VAR_2;
}
