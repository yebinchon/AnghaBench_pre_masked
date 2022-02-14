
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sockaddr_in6 {int sin6_addr; } ;
struct TYPE_7__ {int s_addr; } ;
struct sockaddr_in {TYPE_2__ sin_addr; } ;
struct sockaddr {scalar_t__ sa_family; } ;
struct seq_file {int dummy; } ;
struct dentry {TYPE_5__* d_sb; } ;
struct cifs_tcon {int snapshot_time; int handle_timeout; TYPE_3__* ses; scalar_t__ unix_ext; scalar_t__ posix_extensions; scalar_t__ use_resilient; scalar_t__ use_persistent; scalar_t__ retry; scalar_t__ local_lease; scalar_t__ nocase; scalar_t__ seal; scalar_t__ no_lease; } ;
struct cifs_sb_info {int mnt_cifs_flags; int rsize; int wsize; int bsize; int actimeo; int mnt_backupgid; int mnt_backupuid; int local_nls; int mnt_dir_mode; int mnt_file_mode; int mnt_gid; int mnt_uid; } ;
struct TYPE_10__ {int s_flags; } ;
struct TYPE_9__ {int min_offload; int echo_interval; int max_credits; TYPE_1__* vals; int srcaddr; } ;
struct TYPE_8__ {scalar_t__* user_name; scalar_t__* domainName; TYPE_4__* server; } ;
struct TYPE_6__ {scalar_t__* version_string; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 struct cifs_sb_info* FUNC_0 (TYPE_5__*) ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 struct cifs_tcon* FUNC_1 (struct cifs_sb_info*) ;
 int FUNC_2 (struct seq_file*,TYPE_4__*) ;
 int FUNC_3 (struct seq_file*,struct cifs_sb_info*) ;
 int FUNC_4 (struct seq_file*,int ) ;
 int FUNC_5 (struct seq_file*,TYPE_3__*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int VAR_31 ;
 int FUNC_8 (struct seq_file*,char*,int,...) ;
 int FUNC_9 (struct seq_file*,char*) ;
 int FUNC_10 (struct seq_file*,char*,scalar_t__*) ;

__attribute__((used)) static int
FUNC_11(struct seq_file *VAR_32, struct dentry *VAR_33)
{
 struct cifs_sb_info *VAR_34 = FUNC_0(VAR_33->d_sb);
 struct cifs_tcon *VAR_35 = FUNC_1(VAR_34);
 struct sockaddr *VAR_36;
 VAR_36 = (struct sockaddr *)&VAR_35->ses->server->srcaddr;

 FUNC_10(VAR_32, "vers", VAR_35->ses->server->vals->version_string);
 FUNC_5(VAR_32, VAR_35->ses);
 FUNC_3(VAR_32, VAR_34);

 if (VAR_35->no_lease)
  FUNC_9(VAR_32, ",nolease");
 if (VAR_34->mnt_cifs_flags & VAR_12)
  FUNC_9(VAR_32, ",multiuser");
 else if (VAR_35->ses->user_name)
  FUNC_10(VAR_32, "username", VAR_35->ses->user_name);

 if (VAR_35->ses->domainName && VAR_35->ses->domainName[0] != 0)
  FUNC_10(VAR_32, "domain", VAR_35->ses->domainName);

 if (VAR_36->sa_family != VAR_2) {
  struct sockaddr_in *VAR_37;
  struct sockaddr_in6 *VAR_38;
  VAR_37 = (struct sockaddr_in *)VAR_36;
  VAR_38 = (struct sockaddr_in6 *)VAR_36;
  if (VAR_36->sa_family == VAR_1)
   FUNC_8(VAR_32, ",srcaddr=%pI6c",
       VAR_38->sin6_addr);
  else if (VAR_36->sa_family == VAR_0)
   FUNC_8(VAR_32, ",srcaddr=%pI4",
       VAR_37->sin_addr.s_addr);
  else
   FUNC_8(VAR_32, ",srcaddr=BAD-AF:%i",
       (int)(VAR_36->sa_family));
 }

 FUNC_8(VAR_32, ",uid=%u",
     FUNC_7(&VAR_31, VAR_34->mnt_uid));
 if (VAR_34->mnt_cifs_flags & VAR_21)
  FUNC_9(VAR_32, ",forceuid");
 else
  FUNC_9(VAR_32, ",noforceuid");

 FUNC_8(VAR_32, ",gid=%u",
     FUNC_6(&VAR_31, VAR_34->mnt_gid));
 if (VAR_34->mnt_cifs_flags & VAR_20)
  FUNC_9(VAR_32, ",forcegid");
 else
  FUNC_9(VAR_32, ",noforcegid");

 FUNC_2(VAR_32, VAR_35->ses->server);

 if (!VAR_35->unix_ext)
  FUNC_8(VAR_32, ",file_mode=0%ho,dir_mode=0%ho",
        VAR_34->mnt_file_mode,
        VAR_34->mnt_dir_mode);

 FUNC_4(VAR_32, VAR_34->local_nls);

 if (VAR_35->seal)
  FUNC_9(VAR_32, ",seal");
 if (VAR_35->nocase)
  FUNC_9(VAR_32, ",nocase");
 if (VAR_35->local_lease)
  FUNC_9(VAR_32, ",locallease");
 if (VAR_35->retry)
  FUNC_9(VAR_32, ",hard");
 else
  FUNC_9(VAR_32, ",soft");
 if (VAR_35->use_persistent)
  FUNC_9(VAR_32, ",persistenthandles");
 else if (VAR_35->use_resilient)
  FUNC_9(VAR_32, ",resilienthandles");
 if (VAR_35->posix_extensions)
  FUNC_9(VAR_32, ",posix");
 else if (VAR_35->unix_ext)
  FUNC_9(VAR_32, ",unix");
 else
  FUNC_9(VAR_32, ",nounix");
 if (VAR_34->mnt_cifs_flags & VAR_16)
  FUNC_9(VAR_32, ",nodfs");
 if (VAR_34->mnt_cifs_flags & VAR_22)
  FUNC_9(VAR_32, ",posixpaths");
 if (VAR_34->mnt_cifs_flags & VAR_25)
  FUNC_9(VAR_32, ",setuids");
 if (VAR_34->mnt_cifs_flags & VAR_26)
  FUNC_9(VAR_32, ",idsfromsid");
 if (VAR_34->mnt_cifs_flags & VAR_24)
  FUNC_9(VAR_32, ",serverino");
 if (VAR_34->mnt_cifs_flags & VAR_23)
  FUNC_9(VAR_32, ",rwpidforward");
 if (VAR_34->mnt_cifs_flags & VAR_13)
  FUNC_9(VAR_32, ",forcemand");
 if (VAR_34->mnt_cifs_flags & VAR_19)
  FUNC_9(VAR_32, ",nouser_xattr");
 if (VAR_34->mnt_cifs_flags & VAR_9)
  FUNC_9(VAR_32, ",mapchars");
 if (VAR_34->mnt_cifs_flags & VAR_8)
  FUNC_9(VAR_32, ",mapposix");
 if (VAR_34->mnt_cifs_flags & VAR_27)
  FUNC_9(VAR_32, ",sfu");
 if (VAR_34->mnt_cifs_flags & VAR_15)
  FUNC_9(VAR_32, ",nobrl");
 if (VAR_34->mnt_cifs_flags & VAR_17)
  FUNC_9(VAR_32, ",nohandlecache");
 if (VAR_34->mnt_cifs_flags & VAR_11)
  FUNC_9(VAR_32, ",modefromsid");
 if (VAR_34->mnt_cifs_flags & VAR_3)
  FUNC_9(VAR_32, ",cifsacl");
 if (VAR_34->mnt_cifs_flags & VAR_6)
  FUNC_9(VAR_32, ",dynperm");
 if (VAR_33->d_sb->s_flags & VAR_29)
  FUNC_9(VAR_32, ",acl");
 if (VAR_34->mnt_cifs_flags & VAR_10)
  FUNC_9(VAR_32, ",mfsymlinks");
 if (VAR_34->mnt_cifs_flags & VAR_7)
  FUNC_9(VAR_32, ",fsc");
 if (VAR_34->mnt_cifs_flags & VAR_14)
  FUNC_9(VAR_32, ",nostrictsync");
 if (VAR_34->mnt_cifs_flags & VAR_18)
  FUNC_9(VAR_32, ",noperm");
 if (VAR_34->mnt_cifs_flags & VAR_5)
  FUNC_8(VAR_32, ",backupuid=%u",
      FUNC_7(&VAR_31,
         VAR_34->mnt_backupuid));
 if (VAR_34->mnt_cifs_flags & VAR_4)
  FUNC_8(VAR_32, ",backupgid=%u",
      FUNC_6(&VAR_31,
         VAR_34->mnt_backupgid));

 FUNC_8(VAR_32, ",rsize=%u", VAR_34->rsize);
 FUNC_8(VAR_32, ",wsize=%u", VAR_34->wsize);
 FUNC_8(VAR_32, ",bsize=%u", VAR_34->bsize);
 if (VAR_35->ses->server->min_offload)
  FUNC_8(VAR_32, ",esize=%u", VAR_35->ses->server->min_offload);
 FUNC_8(VAR_32, ",echo_interval=%lu",
   VAR_35->ses->server->echo_interval / VAR_28);


 if (VAR_35->ses->server->max_credits != VAR_30)
  FUNC_8(VAR_32, ",max_credits=%u", VAR_35->ses->server->max_credits);

 if (VAR_35->snapshot_time)
  FUNC_8(VAR_32, ",snapshot=%llu", VAR_35->snapshot_time);
 if (VAR_35->handle_timeout)
  FUNC_8(VAR_32, ",handletimeout=%u", VAR_35->handle_timeout);

 FUNC_8(VAR_32, ",actimeo=%lu", VAR_34->actimeo / VAR_28);

 return 0;
}
