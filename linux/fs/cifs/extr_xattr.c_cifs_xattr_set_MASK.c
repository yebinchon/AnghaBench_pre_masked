
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct xattr_handler {int flags; } ;
struct tcon_link {int dummy; } ;
struct super_block {int s_flags; } ;
struct inode {int dummy; } ;
struct dentry {struct super_block* d_sb; } ;
struct cifs_tcon {TYPE_3__* ses; } ;
struct cifs_sb_info {int mnt_cifs_flags; int local_nls; } ;
typedef char cifs_ntsd ;
typedef int __u16 ;
struct TYPE_8__ {int time; } ;
struct TYPE_7__ {TYPE_2__* server; } ;
struct TYPE_6__ {TYPE_1__* ops; } ;
struct TYPE_5__ {int (* set_EA ) (unsigned int,struct cifs_tcon*,char*,char const*,void const*,int ,int ,struct cifs_sb_info*) ;int (* set_acl ) (char*,size_t,struct inode*,char*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int,struct cifs_tcon*,char*,void const*,int const,int ,int ,int ) ;
 int VAR_2 ;
 TYPE_4__* FUNC_1 (struct inode*) ;
 int VAR_3 ;
 struct cifs_sb_info* FUNC_2 (struct super_block*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (struct tcon_link*) ;
 size_t VAR_8 ;
 int FUNC_4 (struct tcon_link*) ;
 int VAR_9 ;




 char* FUNC_5 (struct dentry*) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (struct tcon_link*) ;
 int FUNC_8 (struct cifs_sb_info*) ;
 struct tcon_link* FUNC_9 (struct cifs_sb_info*) ;
 int FUNC_10 (unsigned int) ;
 unsigned int FUNC_11 () ;
 int FUNC_12 (char*) ;
 char* FUNC_13 (size_t,int ) ;
 int FUNC_14 (char*,void const*,size_t) ;
 int FUNC_15 (unsigned int,struct cifs_tcon*,char*,char const*,void const*,int ,int ,struct cifs_sb_info*) ;
 int FUNC_16 (char*,size_t,struct inode*,char*,int ) ;
 struct cifs_tcon* FUNC_17 (struct tcon_link*) ;

__attribute__((used)) static int FUNC_18(const struct xattr_handler *VAR_10,
     struct dentry *VAR_11, struct inode *VAR_12,
     const char *VAR_13, const void *VAR_14,
     size_t VAR_15, int VAR_16)
{
 int VAR_17 = -VAR_5;
 unsigned int VAR_18;
 struct super_block *VAR_19 = VAR_11->d_sb;
 struct cifs_sb_info *VAR_20 = FUNC_2(VAR_19);
 struct tcon_link *VAR_21;
 struct cifs_tcon *VAR_22;
 char *VAR_23;

 VAR_21 = FUNC_9(VAR_20);
 if (FUNC_3(VAR_21))
  return FUNC_4(VAR_21);
 VAR_22 = FUNC_17(VAR_21);

 VAR_18 = FUNC_11();

 VAR_23 = FUNC_5(VAR_11);
 if (VAR_23 == ((void*)0)) {
  VAR_17 = -VAR_4;
  goto out;
 }






 if (VAR_15 > VAR_8) {
  FUNC_6(VAR_6, "size of EA value too large\n");
  VAR_17 = -VAR_5;
  goto out;
 }

 switch (VAR_10->flags) {
 case 128:
  if (VAR_20->mnt_cifs_flags & VAR_3)
   goto out;

  if (VAR_22->ses->server->ops->set_EA)
   VAR_17 = VAR_22->ses->server->ops->set_EA(VAR_18, VAR_22,
    VAR_23, VAR_13, VAR_14, (__u16)VAR_15,
    VAR_20->local_nls, VAR_20);
  break;

 case 129: {
  struct cifs_ntsd *VAR_24;

  if (!VAR_14)
   goto out;
  VAR_24 = FUNC_13(VAR_15, VAR_7);
  if (!VAR_24) {
   VAR_17 = -VAR_4;
  } else {
   FUNC_14(VAR_24, VAR_14, VAR_15);
   if (VAR_14 &&
       VAR_22->ses->server->ops->set_acl)
    VAR_17 = VAR_22->ses->server->ops->set_acl(VAR_24,
      VAR_15, VAR_12,
      VAR_23, VAR_2);
   else
    VAR_17 = -VAR_5;
   if (VAR_17 == 0)
    FUNC_1(VAR_12)->time = 0;
   FUNC_12(VAR_24);
  }
  break;
 }

 case 131:
  break;

 case 130:
  break;
 }

out:
 FUNC_12(VAR_23);
 FUNC_10(VAR_18);
 FUNC_7(VAR_21);
 return VAR_17;
}
