
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {int d_namlen; } ;
struct TYPE_5__ {TYPE_1__ d_44; int d_namlen; } ;
struct ufs_dir_entry {TYPE_2__ d_u; } ;
struct super_block {int dummy; } ;
struct TYPE_6__ {int s_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct super_block*,int ) ;

__attribute__((used)) static inline void
FUNC_2(struct super_block *VAR_2, struct ufs_dir_entry *VAR_3, u16 VAR_4)
{
 if ((FUNC_0(VAR_2)->s_flags & VAR_0) == VAR_1)
  VAR_3->d_u.d_namlen = FUNC_1(VAR_2, VAR_4);
 else
  VAR_3->d_u.d_44.d_namlen = VAR_4;
}
