
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {scalar_t__ s_magic; scalar_t__ s_root; } ;
struct path {TYPE_1__* mnt; } ;
struct TYPE_2__ {scalar_t__ mnt_root; struct super_block* mnt_sb; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct path*) ;

__attribute__((used)) static int FUNC_1(struct path *VAR_2)
{
 struct super_block *VAR_3;
 int VAR_4;


 VAR_4 = FUNC_0(VAR_2);
 if (VAR_4)
  return VAR_4;


 VAR_3 = VAR_2->mnt->mnt_sb;
 if ((VAR_3->s_magic != VAR_0) ||
     (VAR_2->mnt->mnt_root != VAR_3->s_root))
  return -VAR_1;

 return 0;
}
