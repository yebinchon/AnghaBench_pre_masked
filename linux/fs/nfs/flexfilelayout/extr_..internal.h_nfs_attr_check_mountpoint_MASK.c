
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct nfs_fattr {int valid; int fsid; } ;
struct TYPE_2__ {int fsid; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static inline void FUNC_2(struct super_block *VAR_1, struct nfs_fattr *VAR_2)
{
 if (!FUNC_1(&FUNC_0(VAR_1)->fsid, &VAR_2->fsid))
  VAR_2->valid |= VAR_0;
}
