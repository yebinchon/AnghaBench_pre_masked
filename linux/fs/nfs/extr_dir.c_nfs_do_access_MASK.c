
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfs_access_entry {int mask; struct cred const* cred; } ;
struct inode {int i_mode; } ;
struct cred {int dummy; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {int (* access ) (struct inode*,struct nfs_access_entry*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_2__* FUNC_0 (struct inode*) ;
 int VAR_13 ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct inode*,struct nfs_access_entry*) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (struct inode*,struct cred const*,struct nfs_access_entry*,int) ;
 int FUNC_6 (struct inode*,struct cred const*,struct nfs_access_entry*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (struct inode*,struct nfs_access_entry*) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct inode*,int) ;

__attribute__((used)) static int FUNC_12(struct inode *VAR_14, const struct cred *VAR_15, int VAR_16)
{
 struct nfs_access_entry VAR_17;
 bool VAR_18 = (VAR_16 & VAR_4) == 0;
 int VAR_19;
 int VAR_20;

 FUNC_10(VAR_14);

 VAR_20 = FUNC_6(VAR_14, VAR_15, &VAR_17);
 if (VAR_20 != 0)
  VAR_20 = FUNC_5(VAR_14, VAR_15, &VAR_17, VAR_18);
 if (VAR_20 == 0)
  goto out_cached;

 VAR_20 = -VAR_1;
 if (!VAR_18)
  goto out;




 VAR_17.mask = VAR_12 | VAR_11 | VAR_9;
 if (FUNC_2(VAR_14->i_mode))
  VAR_17.mask |= VAR_7 | VAR_10;
 else
  VAR_17.mask |= VAR_8;
 VAR_17.cred = VAR_15;
 VAR_20 = FUNC_1(VAR_14)->access(VAR_14, &VAR_17);
 if (VAR_20 != 0) {
  if (VAR_20 == -VAR_2) {
   FUNC_7(VAR_14);
   if (!FUNC_2(VAR_14->i_mode))
    FUNC_8(VAR_13, &FUNC_0(VAR_14)->flags);
  }
  goto out;
 }
 FUNC_3(VAR_14, &VAR_17);
out_cached:
 VAR_19 = FUNC_4(VAR_17.mask, VAR_14->i_mode);
 if ((VAR_16 & ~VAR_19 & (VAR_5 | VAR_6 | VAR_3)) != 0)
  VAR_20 = -VAR_0;
out:
 FUNC_11(VAR_14, VAR_20);
 return VAR_20;
}
