
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct cifs_fid {int create_guid; int purge_cache; int epoch; int mid; int volatile_fid; int persistent_fid; } ;
struct cifsInodeInfo {int can_cache_brlcks; } ;
struct TYPE_7__ {int create_guid; int mid; int volatile_fid; int persistent_fid; } ;
struct cifsFileInfo {TYPE_3__ fid; int tlink; int dentry; } ;
struct TCP_Server_Info {TYPE_2__* ops; } ;
typedef int __u32 ;
struct TYPE_8__ {TYPE_1__* ses; } ;
struct TYPE_6__ {int (* set_oplock_level ) (struct cifsInodeInfo*,int ,int ,int *) ;} ;
struct TYPE_5__ {struct TCP_Server_Info* server; } ;


 int FUNC_0 (struct cifsInodeInfo*) ;
 struct cifsInodeInfo* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (struct cifsInodeInfo*,int ,int ,int *) ;
 TYPE_4__* FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(struct cifsFileInfo *VAR_0, struct cifs_fid *VAR_1, __u32 VAR_2)
{
 struct cifsInodeInfo *VAR_3 = FUNC_1(FUNC_2(VAR_0->dentry));
 struct TCP_Server_Info *VAR_4 = FUNC_5(VAR_0->tlink)->ses->server;

 VAR_0->fid.persistent_fid = VAR_1->persistent_fid;
 VAR_0->fid.volatile_fid = VAR_1->volatile_fid;



 VAR_4->ops->set_oplock_level(VAR_3, VAR_2, VAR_1->epoch,
          &VAR_1->purge_cache);
 VAR_3->can_cache_brlcks = FUNC_0(VAR_3);
 FUNC_3(VAR_0->fid.create_guid, VAR_1->create_guid, 16);
}
