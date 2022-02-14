
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tcon_link {int dummy; } ;
struct cifs_tcon {TYPE_3__* ses; } ;
struct cifs_sb_info {int dummy; } ;
struct cifs_open_parms {char const* path; int reconnect; struct cifs_fid* fid; int disposition; int create_options; int desired_access; struct cifs_sb_info* cifs_sb; struct cifs_tcon* tcon; } ;
struct cifs_io_parms {int length; scalar_t__ offset; struct cifs_tcon* tcon; int pid; int netfid; } ;
struct cifs_fid {int netfid; } ;
struct cifs_fattr {int cf_eof; void* cf_dtype; int cf_mode; void* cf_rdev; } ;
typedef int __u64 ;
typedef scalar_t__ __u32 ;
typedef int __le64 ;
struct TYPE_8__ {int tgid; } ;
struct TYPE_7__ {TYPE_2__* server; } ;
struct TYPE_6__ {TYPE_1__* ops; scalar_t__ oplocks; } ;
struct TYPE_5__ {int (* open ) (unsigned int,struct cifs_open_parms*,scalar_t__*,int *) ;int (* sync_read ) (unsigned int,struct cifs_fid*,struct cifs_io_parms*,unsigned int*,char**,int*) ;int (* close ) (unsigned int,struct cifs_tcon*,struct cifs_fid*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_0 (struct tcon_link*) ;
 void* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct tcon_link*) ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_3 (struct cifs_sb_info*) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (struct tcon_link*) ;
 struct tcon_link* FUNC_6 (struct cifs_sb_info*) ;
 TYPE_4__* VAR_20 ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (char*,char*,int) ;
 int FUNC_9 (unsigned int,struct cifs_open_parms*,scalar_t__*,int *) ;
 int FUNC_10 (unsigned int,struct cifs_fid*,struct cifs_io_parms*,unsigned int*,char**,int*) ;
 int FUNC_11 (unsigned int,struct cifs_tcon*,struct cifs_fid*) ;
 struct cifs_tcon* FUNC_12 (struct tcon_link*) ;

__attribute__((used)) static int
FUNC_13(struct cifs_fattr *VAR_21, const char *VAR_22,
       struct cifs_sb_info *VAR_23, unsigned int VAR_24)
{
 int VAR_25;
 __u32 VAR_26;
 struct tcon_link *VAR_27;
 struct cifs_tcon *VAR_28;
 struct cifs_fid VAR_29;
 struct cifs_open_parms VAR_30;
 struct cifs_io_parms VAR_31;
 char VAR_32[24];
 unsigned int VAR_33;
 char *VAR_34;
 int VAR_35 = VAR_0;

 VAR_34 = VAR_32;

 VAR_21->cf_mode &= ~VAR_18;

 if (VAR_21->cf_eof == 0) {
  VAR_21->cf_mode |= VAR_16;
  VAR_21->cf_dtype = VAR_5;
  return 0;
 } else if (VAR_21->cf_eof < 8) {
  VAR_21->cf_mode |= VAR_19;
  VAR_21->cf_dtype = VAR_7;
  return -VAR_8;
 }

 VAR_27 = FUNC_6(VAR_23);
 if (FUNC_0(VAR_27))
  return FUNC_2(VAR_27);
 VAR_28 = FUNC_12(VAR_27);

 VAR_30.tcon = VAR_28;
 VAR_30.cifs_sb = VAR_23;
 VAR_30.desired_access = VAR_12;
 VAR_30.create_options = VAR_1;
 if (FUNC_3(VAR_23))
  VAR_30.create_options |= VAR_2;
 VAR_30.disposition = VAR_10;
 VAR_30.path = VAR_22;
 VAR_30.fid = &VAR_29;
 VAR_30.reconnect = 0;

 if (VAR_28->ses->server->oplocks)
  VAR_26 = VAR_13;
 else
  VAR_26 = 0;
 VAR_25 = VAR_28->ses->server->ops->open(VAR_24, &VAR_30, &VAR_26, ((void*)0));
 if (VAR_25) {
  FUNC_4(VAR_11, "check sfu type of %s, open rc = %d\n", VAR_22, VAR_25);
  FUNC_5(VAR_27);
  return VAR_25;
 }


 VAR_31.netfid = VAR_29.netfid;
 VAR_31.pid = VAR_20->tgid;
 VAR_31.tcon = VAR_28;
 VAR_31.offset = 0;
 VAR_31.length = 24;

 VAR_25 = VAR_28->ses->server->ops->sync_read(VAR_24, &VAR_29, &VAR_31,
     &VAR_33, &VAR_34, &VAR_35);
 if ((VAR_25 == 0) && (VAR_33 >= 8)) {
  if (FUNC_8("IntxBLK", VAR_34, 8) == 0) {
   FUNC_4(VAR_11, "Block device\n");
   VAR_21->cf_mode |= VAR_14;
   VAR_21->cf_dtype = VAR_3;
   if (VAR_33 == 24) {

    __u64 VAR_36;
    __u64 VAR_37;
    VAR_36 = FUNC_7(*(__le64 *)(VAR_34+8));
    VAR_37 = FUNC_7(*(__le64 *)(VAR_34+16));
    VAR_21->cf_rdev = FUNC_1(VAR_36, VAR_37);
   }
  } else if (FUNC_8("IntxCHR", VAR_34, 8) == 0) {
   FUNC_4(VAR_11, "Char device\n");
   VAR_21->cf_mode |= VAR_15;
   VAR_21->cf_dtype = VAR_4;
   if (VAR_33 == 24) {

    __u64 VAR_38;
    __u64 VAR_39;
    VAR_38 = FUNC_7(*(__le64 *)(VAR_34+8));
    VAR_39 = FUNC_7(*(__le64 *)(VAR_34+16));
    VAR_21->cf_rdev = FUNC_1(VAR_38, VAR_39);
   }
  } else if (FUNC_8("IntxLNK", VAR_34, 7) == 0) {
   FUNC_4(VAR_11, "Symlink\n");
   VAR_21->cf_mode |= VAR_17;
   VAR_21->cf_dtype = VAR_6;
  } else {
   VAR_21->cf_mode |= VAR_19;
   VAR_21->cf_dtype = VAR_7;
   VAR_25 = -VAR_9;
  }
 } else {
  VAR_21->cf_mode |= VAR_19;
  VAR_21->cf_dtype = VAR_7;
  VAR_25 = -VAR_9;
 }

 VAR_28->ses->server->ops->close(VAR_24, VAR_28, &VAR_29);
 FUNC_5(VAR_27);
 return VAR_25;
}
