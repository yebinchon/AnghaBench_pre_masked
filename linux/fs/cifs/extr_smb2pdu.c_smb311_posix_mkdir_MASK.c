
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wchar_t ;
typedef int umode_t ;
struct smb_rqst {unsigned int rq_nvec; struct kvec* rq_iov; } ;
struct smb2_create_rsp {int VolatileFileId; int PersistentFileId; } ;
struct TYPE_2__ {int Flags; } ;
struct smb2_create_req {int RequestedOplockLevel; void* NameLength; TYPE_1__ sync_hdr; void* NameOffset; void* CreateOptions; void* CreateDisposition; int ShareAccess; void* FileAttributes; void* DesiredAccess; int ImpersonationLevel; } ;
struct kvec {char* iov_base; unsigned int iov_len; int member_1; int * member_0; } ;
struct inode {int dummy; } ;
struct cifs_tcon {int share_flags; int tid; scalar_t__ posix_extensions; int treeName; struct cifs_ses* ses; } ;
struct cifs_ses {int Suid; int server; } ;
struct cifs_sb_info {int dummy; } ;
typedef int __u32 ;
typedef char __le16 ;


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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (unsigned int const,struct cifs_tcon*,int ,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct kvec*,unsigned int*,int ) ;
 int FUNC_3 (char**,int*,int*,int ,char*) ;
 char* FUNC_4 (char const*,struct cifs_sb_info*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (unsigned int const,struct cifs_ses*,struct smb_rqst*,int*,int,struct kvec*) ;
 int FUNC_7 (struct smb2_create_req*) ;
 int FUNC_8 (struct cifs_tcon*,int ) ;
 void* FUNC_9 (int) ;
 void* FUNC_10 (int ) ;
 int FUNC_11 (int,struct smb2_create_rsp*) ;
 int FUNC_12 (char*) ;
 char* FUNC_13 (int,int ) ;
 int FUNC_14 (char*,char const*,int) ;
 int FUNC_15 (struct smb_rqst*,int ,int) ;
 int FUNC_16 (int,int) ;
 int FUNC_17 (int ,struct cifs_tcon*,void**,unsigned int*) ;
 scalar_t__ FUNC_18 (struct cifs_tcon*) ;
 int FUNC_19 (unsigned int const,int ,int ,int ,int ,int ) ;
 int FUNC_20 (unsigned int const,int ,int ,int ,int ) ;
 int FUNC_21 (unsigned int const,int ,int ,int ,int ,int) ;

int FUNC_22(const unsigned int VAR_16, struct inode *VAR_17,
          umode_t VAR_18, struct cifs_tcon *VAR_19,
          const char *VAR_20,
          struct cifs_sb_info *VAR_21)
{
 struct smb_rqst VAR_22;
 struct smb2_create_req *VAR_23;
 struct smb2_create_rsp *VAR_24 = ((void*)0);
 struct cifs_ses *VAR_25 = VAR_19->ses;
 struct kvec VAR_26[3];
 struct kvec VAR_27 = {((void*)0), 0};
 int VAR_28;
 int VAR_29;
 __le16 *VAR_30 = ((void*)0);
 int VAR_31;
 int VAR_32 = 0;
 unsigned int VAR_33 = 2;
 __u32 VAR_34 = 0;
 char *VAR_35 = ((void*)0);
 int VAR_36 = 0;
 unsigned int VAR_37;
 __le16 *VAR_38 = ((void*)0);

 FUNC_5(VAR_7, "mkdir\n");


 VAR_38 = FUNC_4(VAR_20, VAR_21);
 if (!VAR_38)
  return -VAR_3;

 if (!VAR_25 || !(VAR_25->server)) {
  VAR_32 = -VAR_2;
  goto err_free_path;
 }


 VAR_32 = FUNC_17(VAR_12, VAR_19, (void **) &VAR_23, &VAR_37);
 if (VAR_32)
  goto err_free_path;


 if (FUNC_18(VAR_19))
  VAR_36 |= VAR_0;

 VAR_23->ImpersonationLevel = VAR_9;
 VAR_23->DesiredAccess = FUNC_10(VAR_6);

 VAR_23->FileAttributes = FUNC_10(VAR_34);
 VAR_23->ShareAccess = VAR_5;
 VAR_23->CreateDisposition = FUNC_10(VAR_4);
 VAR_23->CreateOptions = FUNC_10(VAR_1);

 VAR_26[0].iov_base = (char *)VAR_23;

 VAR_26[0].iov_len = VAR_37 - 1;

 VAR_23->NameOffset = FUNC_9(sizeof(struct smb2_create_req));
 if (VAR_19->share_flags & VAR_11) {
  int VAR_39;

  VAR_23->sync_hdr.Flags |= VAR_14;
  VAR_32 = FUNC_3(&VAR_30, &VAR_31,
       &VAR_39,
       VAR_19->treeName, VAR_38);
  if (VAR_32)
   goto err_free_req;

  VAR_23->NameLength = FUNC_9(VAR_39 * 2);
  VAR_29 = VAR_31;

  FUNC_12(VAR_38);
  VAR_38 = VAR_30;
 } else {
  VAR_29 = (2 * FUNC_1((wchar_t *)VAR_38, VAR_10)) + 2;

  VAR_23->NameLength = FUNC_9(VAR_29 - 2);
  if (VAR_29 % 8 != 0) {
   VAR_31 = FUNC_16(VAR_29, 8);
   VAR_30 = FUNC_13(VAR_31, VAR_8);
   if (!VAR_30) {
    VAR_32 = -VAR_3;
    goto err_free_req;
   }
   FUNC_14((char *)VAR_30, (const char *)VAR_38,
          VAR_29);
   VAR_29 = VAR_31;

   FUNC_12(VAR_38);
   VAR_38 = VAR_30;
  }
 }

 VAR_26[1].iov_len = VAR_29;
 VAR_26[1].iov_base = VAR_38;
 VAR_23->RequestedOplockLevel = VAR_15;

 if (VAR_19->posix_extensions) {

  VAR_32 = FUNC_2(VAR_26, &VAR_33, VAR_18);
  if (VAR_32)
   goto err_free_req;
  VAR_35 = VAR_26[VAR_33-1].iov_base;
 }


 FUNC_15(&VAR_22, 0, sizeof(struct smb_rqst));
 VAR_22.rq_iov = VAR_26;
 VAR_22.rq_nvec = VAR_33;


 FUNC_20(VAR_16, VAR_19->tid, VAR_25->Suid, VAR_1,
        VAR_6);

 VAR_32 = FUNC_6(VAR_16, VAR_25, &VAR_22, &VAR_28, VAR_36, &VAR_27);
 if (VAR_32) {
  FUNC_8(VAR_19, VAR_13);
  FUNC_21(VAR_16, VAR_19->tid, VAR_25->Suid,
        VAR_1,
        VAR_6, VAR_32);
  goto err_free_rsp_buf;
 }

 VAR_24 = (struct smb2_create_rsp *)VAR_27.iov_base;
 FUNC_19(VAR_16, VAR_24->PersistentFileId, VAR_19->tid,
        VAR_25->Suid, VAR_1,
        VAR_6);

 FUNC_0(VAR_16, VAR_19, VAR_24->PersistentFileId, VAR_24->VolatileFileId);



err_free_rsp_buf:
 FUNC_11(VAR_28, VAR_24);
 FUNC_12(VAR_35);
err_free_req:
 FUNC_7(VAR_23);
err_free_path:
 FUNC_12(VAR_38);
 return VAR_32;
}
