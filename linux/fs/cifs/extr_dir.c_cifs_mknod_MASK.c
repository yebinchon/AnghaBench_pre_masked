
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int umode_t ;
struct tcon_link {int dummy; } ;
struct inode {int i_sb; } ;
struct dentry {int dummy; } ;
struct cifs_tcon {TYPE_3__* ses; } ;
struct cifs_sb_info {int dummy; } ;
typedef int dev_t ;
struct TYPE_6__ {TYPE_2__* server; } ;
struct TYPE_5__ {TYPE_1__* ops; } ;
struct TYPE_4__ {int (* make_node ) (unsigned int,struct inode*,struct dentry*,struct cifs_tcon*,char*,int ,int ) ;} ;


 struct cifs_sb_info* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct tcon_link*) ;
 int FUNC_2 (struct tcon_link*) ;
 char* FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct tcon_link*) ;
 struct tcon_link* FUNC_5 (struct cifs_sb_info*) ;
 int FUNC_6 (unsigned int) ;
 unsigned int FUNC_7 () ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (unsigned int,struct inode*,struct dentry*,struct cifs_tcon*,char*,int ,int ) ;
 struct cifs_tcon* FUNC_11 (struct tcon_link*) ;

int FUNC_12(struct inode *VAR_3, struct dentry *VAR_4, umode_t VAR_5,
  dev_t VAR_6)
{
 int VAR_7 = -VAR_2;
 unsigned int VAR_8;
 struct cifs_sb_info *VAR_9;
 struct tcon_link *VAR_10;
 struct cifs_tcon *VAR_11;
 char *VAR_12 = ((void*)0);

 if (!FUNC_9(VAR_6))
  return -VAR_0;

 VAR_9 = FUNC_0(VAR_3->i_sb);
 VAR_10 = FUNC_5(VAR_9);
 if (FUNC_1(VAR_10))
  return FUNC_2(VAR_10);

 VAR_11 = FUNC_11(VAR_10);

 VAR_8 = FUNC_7();

 VAR_12 = FUNC_3(VAR_4);
 if (VAR_12 == ((void*)0)) {
  VAR_7 = -VAR_1;
  goto mknod_out;
 }

 VAR_7 = VAR_11->ses->server->ops->make_node(VAR_8, VAR_3, VAR_4, VAR_11,
            VAR_12, VAR_5,
            VAR_6);

mknod_out:
 FUNC_8(VAR_12);
 FUNC_6(VAR_8);
 FUNC_4(VAR_10);
 return VAR_7;
}
