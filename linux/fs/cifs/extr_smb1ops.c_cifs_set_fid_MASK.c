
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cifs_fid {int netfid; } ;
struct cifsInodeInfo {int can_cache_brlcks; } ;
struct TYPE_2__ {int netfid; } ;
struct cifsFileInfo {TYPE_1__ fid; int dentry; } ;
typedef int __u32 ;


 int FUNC_0 (struct cifsInodeInfo*) ;
 struct cifsInodeInfo* FUNC_1 (int ) ;
 int FUNC_2 (struct cifsInodeInfo*,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct cifsFileInfo *VAR_0, struct cifs_fid *VAR_1, __u32 VAR_2)
{
 struct cifsInodeInfo *VAR_3 = FUNC_1(FUNC_3(VAR_0->dentry));
 VAR_0->fid.netfid = VAR_1->netfid;
 FUNC_2(VAR_3, VAR_2);
 VAR_3->can_cache_brlcks = FUNC_0(VAR_3);
}
