
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ cl_id; scalar_t__ cl_boot; } ;
struct TYPE_8__ {int * data; scalar_t__ len; } ;
struct nfsd4_lock_denied {scalar_t__ ld_start; scalar_t__ ld_length; int ld_type; TYPE_3__ ld_clientid; TYPE_4__ ld_owner; } ;
struct TYPE_6__ {TYPE_1__* so_client; int so_owner; } ;
struct nfs4_lockowner {TYPE_2__ lo_owner; } ;
struct file_lock {scalar_t__ fl_start; scalar_t__ fl_end; scalar_t__ fl_type; scalar_t__ fl_owner; int * fl_lmops; } ;
struct TYPE_5__ {TYPE_3__ cl_clientid; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_4__*,int *,int ) ;

__attribute__((used)) static inline void
FUNC_1(struct file_lock *VAR_6, struct nfsd4_lock_denied *VAR_7)
{
 struct nfs4_lockowner *VAR_8;

 if (VAR_6->fl_lmops == &VAR_5) {
  VAR_8 = (struct nfs4_lockowner *) VAR_6->fl_owner;
  FUNC_0(&VAR_7->ld_owner, &VAR_8->lo_owner.so_owner,
      VAR_1);
  if (!VAR_7->ld_owner.data)

   goto nevermind;
  VAR_7->ld_clientid = VAR_8->lo_owner.so_client->cl_clientid;
 } else {
nevermind:
  VAR_7->ld_owner.len = 0;
  VAR_7->ld_owner.data = ((void*)0);
  VAR_7->ld_clientid.cl_boot = 0;
  VAR_7->ld_clientid.cl_id = 0;
 }
 VAR_7->ld_start = VAR_6->fl_start;
 VAR_7->ld_length = VAR_2;
 if (VAR_6->fl_end != VAR_2)
  VAR_7->ld_length = VAR_6->fl_end - VAR_6->fl_start + 1;
 VAR_7->ld_type = VAR_3;
 if (VAR_6->fl_type != VAR_0)
  VAR_7->ld_type = VAR_4;
}
