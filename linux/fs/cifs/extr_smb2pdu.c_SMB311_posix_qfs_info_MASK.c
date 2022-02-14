
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct smb_rqst {int rq_nvec; struct kvec* rq_iov; } ;
struct smb2_query_info_rsp {int OutputBufferLength; int OutputBufferOffset; } ;
struct kvec {scalar_t__ iov_base; } ;
struct kstatfs {int dummy; } ;
struct cifs_tcon {struct cifs_ses* ses; } ;
struct cifs_ses {int dummy; } ;
typedef int FILE_SYSTEM_POSIX_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kvec*,struct cifs_tcon*,int ,int,int ,int ) ;
 int FUNC_1 (unsigned int const,struct cifs_ses*,struct smb_rqst*,int*,int,struct kvec*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct cifs_tcon*,int ) ;
 int FUNC_4 (int *,struct kstatfs*) ;
 int FUNC_5 (int,scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct smb_rqst*,int ,int) ;
 int FUNC_9 (int,int ,struct kvec*,int) ;
 scalar_t__ FUNC_10 (struct cifs_tcon*) ;

int
FUNC_11(const unsigned int VAR_3, struct cifs_tcon *VAR_4,
       u64 VAR_5, u64 VAR_6, struct kstatfs *VAR_7)
{
 struct smb_rqst VAR_8;
 struct smb2_query_info_rsp *VAR_9 = ((void*)0);
 struct kvec VAR_10;
 struct kvec VAR_11;
 int VAR_12 = 0;
 int VAR_13;
 struct cifs_ses *VAR_14 = VAR_4->ses;
 FILE_SYSTEM_POSIX_INFO *VAR_15 = ((void*)0);
 int VAR_16 = 0;

 VAR_12 = FUNC_0(&VAR_10, VAR_4, VAR_1,
    sizeof(FILE_SYSTEM_POSIX_INFO),
    VAR_5, VAR_6);
 if (VAR_12)
  return VAR_12;

 if (FUNC_10(VAR_4))
  VAR_16 |= VAR_0;

 FUNC_8(&VAR_8, 0, sizeof(struct smb_rqst));
 VAR_8.rq_iov = &VAR_10;
 VAR_8.rq_nvec = 1;

 VAR_12 = FUNC_1(VAR_3, VAR_14, &VAR_8, &VAR_13, VAR_16, &VAR_11);
 FUNC_2(VAR_10.iov_base);
 if (VAR_12) {
  FUNC_3(VAR_4, VAR_2);
  goto posix_qfsinf_exit;
 }
 VAR_9 = (struct smb2_query_info_rsp *)VAR_11.iov_base;

 VAR_15 = (FILE_SYSTEM_POSIX_INFO *)(
  FUNC_6(VAR_9->OutputBufferOffset) + (char *)VAR_9);
 VAR_12 = FUNC_9(FUNC_6(VAR_9->OutputBufferOffset),
          FUNC_7(VAR_9->OutputBufferLength), &VAR_11,
          sizeof(FILE_SYSTEM_POSIX_INFO));
 if (!VAR_12)
  FUNC_4(VAR_15, VAR_7);

posix_qfsinf_exit:
 FUNC_5(VAR_13, VAR_11.iov_base);
 return VAR_12;
}
