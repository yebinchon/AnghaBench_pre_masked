
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct key {int dummy; } ;
struct TYPE_9__ {int anon_access; } ;
struct TYPE_6__ {int vnode; int vid; } ;
struct afs_vnode {int permit_cache; TYPE_4__ status; TYPE_3__* volume; TYPE_1__ fid; } ;
struct afs_permits {int nr_permits; int invalidated; TYPE_5__* permits; } ;
typedef int afs_access_t ;
struct TYPE_10__ {int access; struct key* key; } ;
struct TYPE_8__ {TYPE_2__* cell; } ;
struct TYPE_7__ {struct key* anonymous_key; } ;


 int FUNC_0 (char*,int ,int ,int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct key*) ;
 struct afs_permits* FUNC_3 (int ) ;

__attribute__((used)) static bool FUNC_4(struct afs_vnode *VAR_0, struct key *VAR_1,
     afs_access_t *VAR_2)
{
 const struct afs_permits *VAR_3;
 int VAR_4;

 FUNC_0("{%llx:%llu},%x",
        VAR_0->fid.vid, VAR_0->fid.vnode, FUNC_2(VAR_1));


 if (VAR_1 == VAR_0->volume->cell->anonymous_key) {
  *VAR_2 = VAR_0->status.anon_access;
  FUNC_1(" = t [anon %x]", *VAR_2);
  return 1;
 }

 VAR_3 = FUNC_3(VAR_0->permit_cache);
 if (VAR_3) {
  for (VAR_4 = 0; VAR_4 < VAR_3->nr_permits; VAR_4++) {
   if (VAR_3->permits[VAR_4].key < VAR_1)
    continue;
   if (VAR_3->permits[VAR_4].key > VAR_1)
    break;

   *VAR_2 = VAR_3->permits[VAR_4].access;
   FUNC_1(" = %u [perm %x]", !VAR_3->invalidated, *VAR_2);
   return !VAR_3->invalidated;
  }
 }

 FUNC_1(" = f");
 return 0;
}
