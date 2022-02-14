
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {unsigned long s_iflags; } ;
struct mnt_namespace {int * user_ns; } ;
struct TYPE_4__ {TYPE_1__* nsproxy; } ;
struct TYPE_3__ {struct mnt_namespace* mnt_ns; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (int,char*,unsigned long const) ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct mnt_namespace*,struct super_block const*,int*) ;

__attribute__((used)) static bool FUNC_2(const struct super_block *VAR_5, int *VAR_6)
{
 const unsigned long VAR_7 = VAR_1 | VAR_0;
 struct mnt_namespace *VAR_8 = VAR_3->nsproxy->mnt_ns;
 unsigned long VAR_9;

 if (VAR_8->user_ns == &VAR_4)
  return 0;


 VAR_9 = VAR_5->s_iflags;
 if (!(VAR_9 & VAR_2))
  return 0;

 if ((VAR_9 & VAR_7) != VAR_7) {
  FUNC_0(1, "Expected s_iflags to contain 0x%lx\n",
     VAR_7);
  return 1;
 }

 return !FUNC_1(VAR_8, VAR_5, VAR_6);
}
