
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nfs_access_entry {int mask; struct cred const* cred; } ;
struct nfs4_state {TYPE_2__* inode; } ;
struct TYPE_3__ {scalar_t__ access_supported; int access_result; } ;
struct nfs4_opendata {TYPE_1__ o_res; int file_created; } ;
struct cred {int dummy; } ;
typedef int fmode_t ;
struct TYPE_4__ {int i_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (TYPE_2__*,struct nfs_access_entry*) ;
 int FUNC_2 (struct nfs_access_entry*,int ) ;

__attribute__((used)) static int FUNC_3(const struct cred *VAR_6,
    struct nfs4_opendata *VAR_7,
    struct nfs4_state *VAR_8, fmode_t VAR_9,
    int VAR_10)
{
 struct nfs_access_entry VAR_11;
 u32 VAR_12, VAR_13;



 if (VAR_7->o_res.access_supported == 0)
  return 0;

 VAR_12 = 0;




 if (VAR_10 & VAR_5) {

  if (FUNC_0(VAR_8->inode->i_mode))
   VAR_12 = VAR_3;
  else
   VAR_12 = VAR_2;
 } else if ((VAR_9 & VAR_1) && !VAR_7->file_created)
  VAR_12 = VAR_4;

 VAR_11.cred = VAR_6;
 FUNC_2(&VAR_11, VAR_7->o_res.access_result);
 FUNC_1(VAR_8->inode, &VAR_11);

 VAR_13 = VAR_4 | VAR_2 | VAR_3;
 if ((VAR_12 & ~VAR_11.mask & VAR_13) == 0)
  return 0;

 return -VAR_0;
}
