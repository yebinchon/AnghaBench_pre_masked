
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct cifs_tcon {scalar_t__ unix_ext; TYPE_1__* ses; } ;
struct cifs_sb_info {int dummy; } ;
struct cifs_open_parms {int desired_access; int create_options; int disposition; char* path; int reconnect; struct cifs_fid* fid; struct cifs_sb_info* cifs_sb; struct cifs_tcon* tcon; } ;
struct cifs_fid {int dummy; } ;
struct TCP_Server_Info {TYPE_2__* ops; } ;
typedef int __u32 ;
struct TYPE_4__ {int (* open ) (unsigned int,struct cifs_open_parms*,int *,int *) ;int (* close ) (unsigned int,struct cifs_tcon*,struct cifs_fid*) ;} ;
struct TYPE_3__ {struct TCP_Server_Info* server; } ;
typedef int FILE_ALL_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 scalar_t__ FUNC_0 (struct cifs_sb_info*) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (struct inode**,char*,int *,int ,unsigned int,struct cifs_fid*) ;
 int FUNC_4 (struct inode**,char*,int ,unsigned int) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int,int ) ;
 int FUNC_7 (unsigned int,struct cifs_open_parms*,int *,int *) ;
 int FUNC_8 (unsigned int,struct cifs_tcon*,struct cifs_fid*) ;

__attribute__((used)) static int
FUNC_9(char *VAR_11, struct inode *VAR_12, struct cifs_sb_info *VAR_13,
      struct cifs_tcon *VAR_14, unsigned int VAR_15, __u32 *VAR_16,
      struct cifs_fid *VAR_17, unsigned int VAR_18)
{
 int VAR_19;
 int VAR_20;
 int VAR_21;
 int VAR_22 = VAR_0;
 FILE_ALL_INFO *VAR_23;
 struct TCP_Server_Info *VAR_24 = VAR_14->ses->server;
 struct cifs_open_parms VAR_25;

 if (!VAR_24->ops->open)
  return -VAR_5;

 VAR_20 = FUNC_1(VAR_15);
 VAR_21 = FUNC_2(VAR_15);



 VAR_23 = FUNC_6(sizeof(FILE_ALL_INFO), VAR_8);
 if (!VAR_23)
  return -VAR_4;

 if (FUNC_0(VAR_13))
  VAR_22 |= VAR_2;


 if (VAR_15 & VAR_10)
  VAR_22 |= VAR_3;

 if (VAR_15 & VAR_9)
  VAR_22 |= VAR_1;

 VAR_25.tcon = VAR_14;
 VAR_25.cifs_sb = VAR_13;
 VAR_25.desired_access = VAR_20;
 VAR_25.create_options = VAR_22;
 VAR_25.disposition = VAR_21;
 VAR_25.path = VAR_11;
 VAR_25.fid = VAR_17;
 VAR_25.reconnect = 0;

 VAR_19 = VAR_24->ops->open(VAR_18, &VAR_25, VAR_16, VAR_23);

 if (VAR_19)
  goto out;

 if (VAR_14->unix_ext)
  VAR_19 = FUNC_4(&VAR_12, VAR_11, VAR_12->i_sb,
           VAR_18);
 else
  VAR_19 = FUNC_3(&VAR_12, VAR_11, VAR_23, VAR_12->i_sb,
      VAR_18, VAR_17);

 if (VAR_19) {
  VAR_24->ops->close(VAR_18, VAR_14, VAR_17);
  if (VAR_19 == -VAR_7)
   VAR_19 = -VAR_6;
 }

out:
 FUNC_5(VAR_23);
 return VAR_19;
}
