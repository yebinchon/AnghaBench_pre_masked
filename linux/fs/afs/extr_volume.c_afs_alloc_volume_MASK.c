
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct afs_volume {size_t type; int cell; struct afs_server_list* servers; int name; int cb_v_break_lock; int servers_lock; int proc_link; int usage; scalar_t__ name_len; int type_force; scalar_t__ update_at; int vid; } ;
struct afs_vldb_entry {int nr_servers; unsigned long* fs_mask; scalar_t__ name_len; int name; int * vid; } ;
struct afs_server_list {int usage; } ;
struct afs_fs_context {size_t type; int net; int key; int cell; int force; } ;


 int VAR_0 ;
 struct afs_volume* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct afs_server_list*) ;
 int FUNC_3 (struct afs_server_list*) ;
 struct afs_server_list* FUNC_4 (int ,int ,struct afs_vldb_entry*,unsigned long) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (struct afs_volume*) ;
 scalar_t__ FUNC_9 () ;
 struct afs_volume* FUNC_10 (int,int ) ;
 int FUNC_11 (int ,int ,scalar_t__) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static struct afs_volume *FUNC_14(struct afs_fs_context *VAR_3,
        struct afs_vldb_entry *VAR_4,
        unsigned long VAR_5)
{
 struct afs_server_list *VAR_6;
 struct afs_volume *VAR_7;
 int VAR_8 = -VAR_0, VAR_9 = 0, VAR_10;

 for (VAR_10 = 0; VAR_10 < VAR_4->nr_servers; VAR_10++)
  if (VAR_4->fs_mask[VAR_10] & VAR_5)
   VAR_9++;

 VAR_7 = FUNC_10(sizeof(struct afs_volume), VAR_1);
 if (!VAR_7)
  goto error_0;

 VAR_7->vid = VAR_4->vid[VAR_3->type];
 VAR_7->update_at = FUNC_9() + VAR_2;
 VAR_7->cell = FUNC_5(VAR_3->cell);
 VAR_7->type = VAR_3->type;
 VAR_7->type_force = VAR_3->force;
 VAR_7->name_len = VAR_4->name_len;

 FUNC_7(&VAR_7->usage, 1);
 FUNC_1(&VAR_7->proc_link);
 FUNC_13(&VAR_7->servers_lock);
 FUNC_13(&VAR_7->cb_v_break_lock);
 FUNC_11(VAR_7->name, VAR_4->name, VAR_4->name_len + 1);

 VAR_6 = FUNC_4(VAR_3->cell, VAR_3->key, VAR_4, VAR_5);
 if (FUNC_2(VAR_6)) {
  VAR_8 = FUNC_3(VAR_6);
  goto error_1;
 }

 FUNC_12(&VAR_6->usage, 1);
 VAR_7->servers = VAR_6;
 return VAR_7;

error_1:
 FUNC_6(VAR_3->net, VAR_7->cell);
 FUNC_8(VAR_7);
error_0:
 return FUNC_0(VAR_8);
}
