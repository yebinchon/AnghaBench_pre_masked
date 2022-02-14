
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfs4_state {int dummy; } ;
struct nfs4_lock_state {int dummy; } ;
struct TYPE_3__ {struct nfs4_lock_state* owner; } ;
struct TYPE_4__ {TYPE_1__ nfs4_fl; } ;
struct file_lock {int * fl_ops; TYPE_2__ fl_u; int fl_owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nfs4_lock_state* FUNC_0 (struct nfs4_state*,int ) ;

int FUNC_1(struct nfs4_state *VAR_2, struct file_lock *VAR_3)
{
 struct nfs4_lock_state *VAR_4;

 if (VAR_3->fl_ops != ((void*)0))
  return 0;
 VAR_4 = FUNC_0(VAR_2, VAR_3->fl_owner);
 if (VAR_4 == ((void*)0))
  return -VAR_0;
 VAR_3->fl_u.nfs4_fl.owner = VAR_4;
 VAR_3->fl_ops = &VAR_1;
 return 0;
}
