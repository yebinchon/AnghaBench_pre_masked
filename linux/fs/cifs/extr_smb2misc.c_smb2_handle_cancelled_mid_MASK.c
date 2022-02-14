
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smb2_sync_hdr {scalar_t__ Command; scalar_t__ Status; int TreeId; int SessionId; } ;
struct smb2_create_rsp {int VolatileFileId; int PersistentFileId; } ;
struct TYPE_2__ {int volatile_fid; int persistent_fid; } ;
struct close_cancelled_open {int work; struct cifs_tcon* tcon; TYPE_1__ fid; } ;
struct cifs_tcon {int dummy; } ;
struct TCP_Server_Info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct close_cancelled_open*) ;
 struct close_cancelled_open* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int *) ;
 int VAR_6 ;
 struct cifs_tcon* FUNC_4 (struct TCP_Server_Info*,int ,int ) ;

int
FUNC_5(char *VAR_7, struct TCP_Server_Info *VAR_8)
{
 struct smb2_sync_hdr *VAR_9 = (struct smb2_sync_hdr *)VAR_7;
 struct smb2_create_rsp *VAR_10 = (struct smb2_create_rsp *)VAR_7;
 struct cifs_tcon *VAR_11;
 struct close_cancelled_open *VAR_12;

 if (VAR_9->Command != VAR_3 ||
     VAR_9->Status != VAR_4)
  return 0;

 VAR_12 = FUNC_2(sizeof(*VAR_12), VAR_2);
 if (!VAR_12)
  return -VAR_1;

 VAR_11 = FUNC_4(VAR_8, VAR_9->SessionId,
      VAR_9->TreeId);
 if (!VAR_11) {
  FUNC_1(VAR_12);
  return -VAR_0;
 }

 VAR_12->fid.persistent_fid = VAR_10->PersistentFileId;
 VAR_12->fid.volatile_fid = VAR_10->VolatileFileId;
 VAR_12->tcon = VAR_11;
 FUNC_0(&VAR_12->work, VAR_6);
 FUNC_3(VAR_5, &VAR_12->work);

 return 0;
}
