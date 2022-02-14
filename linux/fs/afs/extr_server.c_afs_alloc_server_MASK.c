
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uuid_t ;
struct afs_server {int probe_lock; int probe_wq; int cb_break_lock; int cb_volumes; int fs_lock; scalar_t__ update_at; int uuid; int addr_version; int addresses; int debug_id; int usage; } ;
struct afs_net {int dummy; } ;
struct afs_addr_list {int version; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct afs_addr_list*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (struct afs_net*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 () ;
 struct afs_server* FUNC_9 (int,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct afs_server*,int,int ) ;

__attribute__((used)) static struct afs_server *FUNC_13(struct afs_net *VAR_4,
        const uuid_t *VAR_5,
        struct afs_addr_list *VAR_6)
{
 struct afs_server *VAR_7;

 FUNC_2("");

 VAR_7 = FUNC_9(sizeof(struct afs_server), VAR_0);
 if (!VAR_7)
  goto enomem;

 FUNC_6(&VAR_7->usage, 1);
 VAR_7->debug_id = FUNC_5(&VAR_1);
 FUNC_1(VAR_7->addresses, VAR_6);
 VAR_7->addr_version = VAR_6->version;
 VAR_7->uuid = *VAR_5;
 VAR_7->update_at = FUNC_8() + VAR_3;
 FUNC_10(&VAR_7->fs_lock);
 FUNC_0(&VAR_7->cb_volumes);
 FUNC_10(&VAR_7->cb_break_lock);
 FUNC_7(&VAR_7->probe_wq);
 FUNC_11(&VAR_7->probe_lock);

 FUNC_4(VAR_4);
 FUNC_12(VAR_7, 1, VAR_2);
 FUNC_3(" = %p", VAR_7);
 return VAR_7;

enomem:
 FUNC_3(" = NULL [nomem]");
 return ((void*)0);
}
