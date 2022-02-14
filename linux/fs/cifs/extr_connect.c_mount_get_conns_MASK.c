
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct smb_vol {int max_credits; int persistent; } ;
struct TYPE_10__ {int DeviceCharacteristics; } ;
struct TYPE_9__ {int Capability; } ;
struct cifs_tcon {int max_credits; TYPE_5__* ops; TYPE_4__ fsDevInfo; int pipe; scalar_t__ unix_ext; TYPE_3__ fsUnixInfo; TYPE_6__* ses; scalar_t__ posix_extensions; TYPE_1__* server; } ;
struct cifs_ses {int max_credits; TYPE_5__* ops; TYPE_4__ fsDevInfo; int pipe; scalar_t__ unix_ext; TYPE_3__ fsUnixInfo; TYPE_6__* ses; scalar_t__ posix_extensions; TYPE_1__* server; } ;
struct cifs_sb_info {int mnt_cifs_flags; int rsize; int wsize; } ;
struct TCP_Server_Info {int max_credits; TYPE_5__* ops; TYPE_4__ fsDevInfo; int pipe; scalar_t__ unix_ext; TYPE_3__ fsUnixInfo; TYPE_6__* ses; scalar_t__ posix_extensions; TYPE_1__* server; } ;
struct TYPE_12__ {TYPE_2__* server; } ;
struct TYPE_11__ {int (* negotiate_rsize ) (struct cifs_tcon*,struct smb_vol*) ;int (* negotiate_wsize ) (struct cifs_tcon*,struct smb_vol*) ;int (* qfs_tcon ) (unsigned int,struct cifs_tcon*) ;} ;
struct TYPE_8__ {scalar_t__ tcpStatus; } ;
struct TYPE_7__ {int capabilities; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct cifs_tcon*) ;
 int FUNC_1 (struct cifs_tcon*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (int ,char*) ;
 struct cifs_tcon* FUNC_4 (struct cifs_tcon*,struct smb_vol*) ;
 struct cifs_tcon* FUNC_5 (struct cifs_tcon*,struct smb_vol*) ;
 struct cifs_tcon* FUNC_6 (struct smb_vol*) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ) ;
 unsigned int FUNC_9 () ;
 int FUNC_10 (int ) ;
 int FUNC_11 (unsigned int,struct cifs_tcon*,struct cifs_sb_info*,struct smb_vol*) ;
 int FUNC_12 (unsigned int,struct cifs_tcon*) ;
 int FUNC_13 (struct cifs_tcon*,struct smb_vol*) ;
 int FUNC_14 (struct cifs_tcon*,struct smb_vol*) ;

__attribute__((used)) static int FUNC_15(struct smb_vol *VAR_11, struct cifs_sb_info *VAR_12,
      unsigned int *VAR_13,
      struct TCP_Server_Info **VAR_14,
      struct cifs_ses **VAR_15, struct cifs_tcon **VAR_16)
{
 int VAR_17 = 0;
 struct TCP_Server_Info *VAR_18;
 struct cifs_ses *VAR_19;
 struct cifs_tcon *VAR_20;

 *VAR_14 = ((void*)0);
 *VAR_15 = ((void*)0);
 *VAR_16 = ((void*)0);

 *VAR_13 = FUNC_9();


 VAR_18 = FUNC_6(VAR_11);
 if (FUNC_0(VAR_18)) {
  VAR_17 = FUNC_1(VAR_18);
  return VAR_17;
 }

 *VAR_14 = VAR_18;

 if ((VAR_11->max_credits < 20) || (VAR_11->max_credits > 60000))
  VAR_18->max_credits = VAR_9;
 else
  VAR_18->max_credits = VAR_11->max_credits;


 VAR_19 = FUNC_4(VAR_18, VAR_11);
 if (FUNC_0(VAR_19)) {
  VAR_17 = FUNC_1(VAR_19);
  return VAR_17;
 }

 *VAR_15 = VAR_19;

 if ((VAR_11->persistent == 1) && (!(VAR_19->server->capabilities &
         VAR_8))) {
  FUNC_7(VAR_10, "persistent handles not supported by server\n");
  return -VAR_6;
 }


 VAR_20 = FUNC_5(VAR_19, VAR_11);
 if (FUNC_0(VAR_20)) {
  VAR_17 = FUNC_1(VAR_20);
  return VAR_17;
 }

 *VAR_16 = VAR_20;


 if (VAR_20->posix_extensions)
  VAR_12->mnt_cifs_flags |= VAR_0;


 if (FUNC_2(VAR_20->ses)) {




  FUNC_11(*VAR_13, VAR_20, VAR_12, VAR_11);
  if ((VAR_20->ses->server->tcpStatus == VAR_4) &&
      (FUNC_10(VAR_20->fsUnixInfo.Capability) &
       VAR_3))
   return -VAR_5;
 } else
  VAR_20->unix_ext = 0;


 if (!VAR_20->pipe && VAR_18->ops->qfs_tcon) {
  VAR_18->ops->qfs_tcon(*VAR_13, VAR_20);
  if (VAR_12->mnt_cifs_flags & VAR_1) {
   if (VAR_20->fsDevInfo.DeviceCharacteristics &
       FUNC_8(VAR_7))
    FUNC_3(VAR_10, "mounted to read only share\n");
   else if ((VAR_12->mnt_cifs_flags &
      VAR_2) == 0)
    FUNC_3(VAR_10, "read only mount of RW share\n");

  }
 }

 VAR_12->wsize = VAR_18->ops->negotiate_wsize(VAR_20, VAR_11);
 VAR_12->rsize = VAR_18->ops->negotiate_rsize(VAR_20, VAR_11);

 return 0;
}
