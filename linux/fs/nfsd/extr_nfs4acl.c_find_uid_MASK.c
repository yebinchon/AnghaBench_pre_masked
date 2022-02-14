
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int deny; int allow; } ;
struct posix_acl_state {TYPE_3__ everyone; struct posix_ace_state_array* users; } ;
struct posix_ace_state_array {int n; TYPE_2__* aces; } ;
typedef int kuid_t ;
struct TYPE_4__ {int deny; int allow; } ;
struct TYPE_5__ {TYPE_1__ perms; int uid; } ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct posix_acl_state *VAR_0, kuid_t VAR_1)
{
 struct posix_ace_state_array *VAR_2 = VAR_0->users;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->n; VAR_3++)
  if (FUNC_0(VAR_2->aces[VAR_3].uid, VAR_1))
   return VAR_3;

 VAR_2->n++;
 VAR_2->aces[VAR_3].uid = VAR_1;
 VAR_2->aces[VAR_3].perms.allow = VAR_0->everyone.allow;
 VAR_2->aces[VAR_3].perms.deny = VAR_0->everyone.deny;

 return VAR_3;
}
