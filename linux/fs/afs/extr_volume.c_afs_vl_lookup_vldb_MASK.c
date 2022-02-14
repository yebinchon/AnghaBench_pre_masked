
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key {int dummy; } ;
struct afs_vldb_entry {int dummy; } ;
struct afs_vl_cursor {int dummy; } ;
struct afs_cell {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct afs_vldb_entry* FUNC_0 (int) ;
 int FUNC_1 (struct afs_vl_cursor*,struct afs_cell*,struct key*) ;
 int FUNC_2 (struct afs_vl_cursor*) ;
 scalar_t__ FUNC_3 (struct afs_vl_cursor*) ;
 struct afs_vldb_entry* FUNC_4 (struct afs_vl_cursor*,char const*,size_t) ;

__attribute__((used)) static struct afs_vldb_entry *FUNC_5(struct afs_cell *VAR_2,
       struct key *VAR_3,
       const char *VAR_4,
       size_t VAR_5)
{
 struct afs_vldb_entry *VAR_6 = FUNC_0(-VAR_0);
 struct afs_vl_cursor VAR_7;
 int VAR_8;

 if (!FUNC_1(&VAR_7, VAR_2, VAR_3))
  return FUNC_0(-VAR_1);

 while (FUNC_3(&VAR_7)) {
  VAR_6 = FUNC_4(&VAR_7, VAR_4, VAR_5);
 }

 VAR_8 = FUNC_2(&VAR_7);
 return VAR_8 < 0 ? FUNC_0(VAR_8) : VAR_6;
}
