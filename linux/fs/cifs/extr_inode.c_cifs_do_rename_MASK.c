
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tcon_link {int dummy; } ;
struct TYPE_8__ {scalar_t__ name; } ;
struct dentry {scalar_t__ d_parent; TYPE_4__ d_name; int d_sb; } ;
struct cifs_tcon {TYPE_1__* ses; } ;
struct cifs_sb_info {int local_nls; } ;
struct cifs_open_parms {char const* path; int reconnect; struct cifs_fid* fid; int disposition; int create_options; int desired_access; struct cifs_sb_info* cifs_sb; struct cifs_tcon* tcon; } ;
struct cifs_fid {int netfid; } ;
struct TCP_Server_Info {TYPE_3__* vals; TYPE_2__* ops; } ;
struct TYPE_7__ {scalar_t__ protocol_id; } ;
struct TYPE_6__ {int (* rename ) (unsigned int const,struct cifs_tcon*,char const*,char const*,struct cifs_sb_info*) ;} ;
struct TYPE_5__ {struct TCP_Server_Info* server; } ;


 int FUNC_0 (unsigned int const,struct cifs_tcon*,int ) ;
 int FUNC_1 (unsigned int const,struct cifs_tcon*,int ,char const*,int ,int ) ;
 struct cifs_sb_info* FUNC_2 (int ) ;
 int FUNC_3 (unsigned int const,struct cifs_open_parms*,int*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (struct tcon_link*) ;
 int FUNC_5 (struct tcon_link*) ;
 int FUNC_6 (struct tcon_link*) ;
 int FUNC_7 (struct cifs_sb_info*) ;
 struct tcon_link* FUNC_8 (struct cifs_sb_info*) ;
 int FUNC_9 (unsigned int const,struct cifs_tcon*,char const*,char const*,struct cifs_sb_info*) ;
 struct cifs_tcon* FUNC_10 (struct tcon_link*) ;

__attribute__((used)) static int
FUNC_11(const unsigned int VAR_5, struct dentry *VAR_6,
        const char *VAR_7, struct dentry *VAR_8,
        const char *VAR_9)
{
 struct cifs_sb_info *VAR_10 = FUNC_2(VAR_6->d_sb);
 struct tcon_link *VAR_11;
 struct cifs_tcon *VAR_12;
 struct TCP_Server_Info *VAR_13;
 struct cifs_fid VAR_14;
 struct cifs_open_parms VAR_15;
 int VAR_16, VAR_17;

 VAR_11 = FUNC_8(VAR_10);
 if (FUNC_4(VAR_11))
  return FUNC_5(VAR_11);
 VAR_12 = FUNC_10(VAR_11);
 VAR_13 = VAR_12->ses->server;

 if (!VAR_13->ops->rename)
  return -VAR_3;


 VAR_17 = VAR_13->ops->rename(VAR_5, VAR_12, VAR_7, VAR_9, VAR_10);






 if (VAR_17 == 0 || VAR_17 != -VAR_2)
  goto do_rename_exit;


 if (VAR_13->vals->protocol_id != 0)
  goto do_rename_exit;


 if (VAR_8->d_parent != VAR_6->d_parent)
  goto do_rename_exit;

 VAR_15.tcon = VAR_12;
 VAR_15.cifs_sb = VAR_10;

 VAR_15.desired_access = VAR_1;
 VAR_15.create_options = VAR_0;
 VAR_15.disposition = VAR_4;
 VAR_15.path = VAR_7;
 VAR_15.fid = &VAR_14;
 VAR_15.reconnect = 0;

 VAR_17 = FUNC_3(VAR_5, &VAR_15, &VAR_16, ((void*)0));
 if (VAR_17 == 0) {
  VAR_17 = FUNC_1(VAR_5, VAR_12, VAR_14.netfid,
    (const char *) VAR_8->d_name.name,
    VAR_10->local_nls, FUNC_7(VAR_10));
  FUNC_0(VAR_5, VAR_12, VAR_14.netfid);
 }
do_rename_exit:
 FUNC_6(VAR_11);
 return VAR_17;
}
