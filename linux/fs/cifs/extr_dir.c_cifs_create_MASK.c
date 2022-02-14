
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int umode_t ;
struct tcon_link {int dummy; } ;
struct inode {int i_sb; } ;
struct dentry {int dummy; } ;
struct cifs_tcon {TYPE_1__* ses; } ;
struct cifs_fid {int dummy; } ;
struct TCP_Server_Info {TYPE_2__* ops; } ;
typedef int __u32 ;
struct TYPE_4__ {int (* close ) (unsigned int,struct cifs_tcon*,struct cifs_fid*) ;int (* new_lease_key ) (struct cifs_fid*) ;} ;
struct TYPE_3__ {struct TCP_Server_Info* server; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct tcon_link*) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_2 (struct tcon_link*) ;
 int FUNC_3 (int ,char*,struct inode*,struct dentry*,struct dentry*) ;
 int FUNC_4 (struct inode*,struct dentry*,unsigned int,struct tcon_link*,unsigned int,int ,int *,struct cifs_fid*) ;
 int FUNC_5 (struct tcon_link*) ;
 struct tcon_link* FUNC_6 (int ) ;
 int FUNC_7 (unsigned int) ;
 unsigned int FUNC_8 () ;
 int FUNC_9 (struct cifs_fid*) ;
 int FUNC_10 (unsigned int,struct cifs_tcon*,struct cifs_fid*) ;
 struct cifs_tcon* FUNC_11 (struct tcon_link*) ;

int FUNC_12(struct inode *VAR_4, struct dentry *VAR_5, umode_t VAR_6,
  bool VAR_7)
{
 int VAR_8;
 unsigned int VAR_9 = FUNC_8();







 unsigned VAR_10 = VAR_2 | VAR_1 | VAR_3;
 struct tcon_link *VAR_11;
 struct cifs_tcon *VAR_12;
 struct TCP_Server_Info *VAR_13;
 struct cifs_fid VAR_14;
 __u32 VAR_15;

 FUNC_3(VAR_0, "cifs_create parent inode = 0x%p name is: %pd and dentry = 0x%p\n",
   VAR_4, VAR_5, VAR_5);

 VAR_11 = FUNC_6(FUNC_0(VAR_4->i_sb));
 VAR_8 = FUNC_2(VAR_11);
 if (FUNC_1(VAR_11))
  goto out_free_xid;

 VAR_12 = FUNC_11(VAR_11);
 VAR_13 = VAR_12->ses->server;

 if (VAR_13->ops->new_lease_key)
  VAR_13->ops->new_lease_key(&VAR_14);

 VAR_8 = FUNC_4(VAR_4, VAR_5, VAR_9, VAR_11, VAR_10, VAR_6,
       &VAR_15, &VAR_14);
 if (!VAR_8 && VAR_13->ops->close)
  VAR_13->ops->close(VAR_9, VAR_12, &VAR_14);

 FUNC_5(VAR_11);
out_free_xid:
 FUNC_7(VAR_9);
 return VAR_8;
}
