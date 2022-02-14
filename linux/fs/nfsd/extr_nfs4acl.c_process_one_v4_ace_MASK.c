
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int deny; } ;
struct posix_acl_state {TYPE_2__* groups; TYPE_2__* users; TYPE_3__ everyone; TYPE_3__ other; TYPE_3__ group; TYPE_3__ owner; scalar_t__ empty; } ;
struct nfs4_ace {int type; int who_gid; int who_uid; int access_mask; } ;
struct TYPE_7__ {TYPE_1__* aces; } ;
struct TYPE_6__ {TYPE_3__ perms; } ;







 int VAR_0 ;
 int FUNC_0 (struct nfs4_ace*) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (struct posix_acl_state*,int ) ;
 int FUNC_6 (struct posix_acl_state*,int ) ;

__attribute__((used)) static void FUNC_7(struct posix_acl_state *VAR_1,
    struct nfs4_ace *VAR_2)
{
 u32 VAR_3 = VAR_2->access_mask;
 int VAR_4;

 VAR_1->empty = 0;

 switch (FUNC_0(VAR_2)) {
 case 128:
  if (VAR_2->type == VAR_0) {
   FUNC_1(&VAR_1->owner, VAR_3);
  } else {
   FUNC_3(&VAR_1->owner, VAR_3);
  }
  break;
 case 129:
  VAR_4 = FUNC_6(VAR_1, VAR_2->who_uid);
  if (VAR_2->type == VAR_0) {
   FUNC_1(&VAR_1->users->aces[VAR_4].perms, VAR_3);
  } else {
   FUNC_3(&VAR_1->users->aces[VAR_4].perms, VAR_3);
   VAR_3 = VAR_1->users->aces[VAR_4].perms.deny;
   FUNC_3(&VAR_1->owner, VAR_3);
  }
  break;
 case 131:
  if (VAR_2->type == VAR_0) {
   FUNC_1(&VAR_1->group, VAR_3);
  } else {
   FUNC_3(&VAR_1->group, VAR_3);
   VAR_3 = VAR_1->group.deny;
   FUNC_3(&VAR_1->owner, VAR_3);
   FUNC_3(&VAR_1->everyone, VAR_3);
   FUNC_4(VAR_1->users, VAR_3);
   FUNC_4(VAR_1->groups, VAR_3);
  }
  break;
 case 132:
  VAR_4 = FUNC_5(VAR_1, VAR_2->who_gid);
  if (VAR_2->type == VAR_0) {
   FUNC_1(&VAR_1->groups->aces[VAR_4].perms, VAR_3);
  } else {
   FUNC_3(&VAR_1->groups->aces[VAR_4].perms, VAR_3);
   VAR_3 = VAR_1->groups->aces[VAR_4].perms.deny;
   FUNC_3(&VAR_1->owner, VAR_3);
   FUNC_3(&VAR_1->group, VAR_3);
   FUNC_3(&VAR_1->everyone, VAR_3);
   FUNC_4(VAR_1->users, VAR_3);
   FUNC_4(VAR_1->groups, VAR_3);
  }
  break;
 case 130:
  if (VAR_2->type == VAR_0) {
   FUNC_1(&VAR_1->owner, VAR_3);
   FUNC_1(&VAR_1->group, VAR_3);
   FUNC_1(&VAR_1->other, VAR_3);
   FUNC_1(&VAR_1->everyone, VAR_3);
   FUNC_2(VAR_1->users, VAR_3);
   FUNC_2(VAR_1->groups, VAR_3);
  } else {
   FUNC_3(&VAR_1->owner, VAR_3);
   FUNC_3(&VAR_1->group, VAR_3);
   FUNC_3(&VAR_1->other, VAR_3);
   FUNC_3(&VAR_1->everyone, VAR_3);
   FUNC_4(VAR_1->users, VAR_3);
   FUNC_4(VAR_1->groups, VAR_3);
  }
 }
}
