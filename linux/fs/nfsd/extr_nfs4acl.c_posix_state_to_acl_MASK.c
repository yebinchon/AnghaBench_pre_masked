
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_15__ {int allow; } ;
struct TYPE_14__ {int allow; } ;
struct TYPE_16__ {int allow; } ;
struct TYPE_9__ {int allow; } ;
struct posix_acl_state {TYPE_7__ other; TYPE_6__ mask; TYPE_5__* groups; TYPE_4__* users; TYPE_8__ group; TYPE_1__ owner; scalar_t__ empty; } ;
struct posix_acl_entry {int e_perm; int e_tag; int e_gid; int e_uid; } ;
struct posix_acl {struct posix_acl_entry* a_entries; } ;
struct TYPE_13__ {int n; TYPE_3__* aces; } ;
struct TYPE_12__ {int n; TYPE_2__* aces; } ;
struct TYPE_11__ {TYPE_8__ perms; int gid; } ;
struct TYPE_10__ {TYPE_8__ perms; int uid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct posix_acl* FUNC_0 (int ) ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_1 (struct posix_acl_state*,TYPE_8__*) ;
 int FUNC_2 (int ,int *,unsigned int) ;
 struct posix_acl* FUNC_3 (int,int ) ;

__attribute__((used)) static struct posix_acl *
FUNC_4(struct posix_acl_state *VAR_9, unsigned int VAR_10)
{
 struct posix_acl_entry *VAR_11;
 struct posix_acl *VAR_12;
 int VAR_13;
 int VAR_14;






 if (VAR_9->empty && (VAR_10 & VAR_8))
  return ((void*)0);






 if (!VAR_9->users->n && !VAR_9->groups->n)
  VAR_13 = 3;
 else
  VAR_13 = 4 + VAR_9->users->n + VAR_9->groups->n;
 VAR_12 = FUNC_3(VAR_13, VAR_7);
 if (!VAR_12)
  return FUNC_0(-VAR_6);

 VAR_11 = VAR_12->a_entries;
 VAR_11->e_tag = VAR_5;
 FUNC_2(VAR_9->owner.allow, &VAR_11->e_perm, VAR_10);

 for (VAR_14=0; VAR_14 < VAR_9->users->n; VAR_14++) {
  VAR_11++;
  VAR_11->e_tag = VAR_4;
  FUNC_2(VAR_9->users->aces[VAR_14].perms.allow,
     &VAR_11->e_perm, VAR_10);
  VAR_11->e_uid = VAR_9->users->aces[VAR_14].uid;
  FUNC_1(VAR_9, &VAR_9->users->aces[VAR_14].perms);
 }

 VAR_11++;
 VAR_11->e_tag = VAR_1;
 FUNC_2(VAR_9->group.allow, &VAR_11->e_perm, VAR_10);
 FUNC_1(VAR_9, &VAR_9->group);

 for (VAR_14=0; VAR_14 < VAR_9->groups->n; VAR_14++) {
  VAR_11++;
  VAR_11->e_tag = VAR_0;
  FUNC_2(VAR_9->groups->aces[VAR_14].perms.allow,
     &VAR_11->e_perm, VAR_10);
  VAR_11->e_gid = VAR_9->groups->aces[VAR_14].gid;
  FUNC_1(VAR_9, &VAR_9->groups->aces[VAR_14].perms);
 }

 if (VAR_9->users->n || VAR_9->groups->n) {
  VAR_11++;
  VAR_11->e_tag = VAR_2;
  FUNC_2(VAR_9->mask.allow, &VAR_11->e_perm, VAR_10);
 }

 VAR_11++;
 VAR_11->e_tag = VAR_3;
 FUNC_2(VAR_9->other.allow, &VAR_11->e_perm, VAR_10);

 return VAR_12;
}
