
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mount {int dummy; } ;
struct mnt_namespace {unsigned int mounts; unsigned int pending_mounts; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 struct mount* FUNC_1 (struct mount*,struct mount*) ;
 int VAR_1 ;

int FUNC_2(struct mnt_namespace *VAR_2, struct mount *VAR_3)
{
 unsigned int VAR_4 = FUNC_0(VAR_1);
 unsigned int VAR_5 = 0, VAR_6, VAR_7, VAR_8;
 struct mount *VAR_9;

 for (VAR_9 = VAR_3; VAR_9; VAR_9 = FUNC_1(VAR_9, VAR_3))
  VAR_5++;

 VAR_6 = VAR_2->mounts;
 VAR_7 = VAR_2->pending_mounts;
 VAR_8 = VAR_6 + VAR_7;
 if ((VAR_6 > VAR_8) ||
     (VAR_7 > VAR_8) ||
     (VAR_4 < VAR_8) ||
     (VAR_5 > (VAR_4 - VAR_8)))
  return -VAR_0;

 VAR_2->pending_mounts = VAR_7 + VAR_5;
 return 0;
}
