
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct afs_volume {int dummy; } ;
struct afs_vldb_entry {unsigned long flags; int error; } ;
struct afs_fs_context {unsigned long type; scalar_t__ force; int volnamesz; int volname; int key; int cell; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct afs_volume* FUNC_0 (struct afs_vldb_entry*) ;
 struct afs_volume* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct afs_vldb_entry*) ;
 struct afs_volume* FUNC_3 (struct afs_fs_context*,struct afs_vldb_entry*,unsigned long) ;
 struct afs_vldb_entry* FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (struct afs_vldb_entry*) ;
 scalar_t__ FUNC_6 (int ,unsigned long*) ;

struct afs_volume *FUNC_7(struct afs_fs_context *VAR_6)
{
 struct afs_vldb_entry *VAR_7;
 struct afs_volume *VAR_8;
 unsigned long VAR_9 = 1UL << VAR_6->type;

 VAR_7 = FUNC_4(VAR_6->cell, VAR_6->key,
      VAR_6->volname, VAR_6->volnamesz);
 if (FUNC_2(VAR_7))
  return FUNC_0(VAR_7);

 if (FUNC_6(VAR_4, &VAR_7->flags)) {
  VAR_8 = FUNC_1(VAR_7->error);
  goto error;
 }


 VAR_8 = FUNC_1(-VAR_5);
 if (VAR_6->force) {
  if (!(VAR_7->flags & VAR_9))
   goto error;
 } else if (FUNC_6(VAR_2, &VAR_7->flags)) {
  VAR_6->type = VAR_0;
 } else if (FUNC_6(VAR_3, &VAR_7->flags)) {
  VAR_6->type = VAR_1;
 } else {
  goto error;
 }

 VAR_9 = 1UL << VAR_6->type;
 VAR_8 = FUNC_3(VAR_6, VAR_7, VAR_9);

error:
 FUNC_5(VAR_7);
 return VAR_8;
}
