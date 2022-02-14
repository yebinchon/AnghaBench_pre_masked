
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct smb_rqst {int rq_nvec; struct kvec* rq_iov; } ;
struct smb2_read_rsp {int DataOffset; int DataLength; } ;
struct smb2_read_plain_req {int PersistentFileId; } ;
struct kvec {char* iov_base; unsigned int iov_len; } ;
struct cifs_ses {int Suid; } ;
struct cifs_io_parms {unsigned int length; int offset; TYPE_1__* tcon; } ;
struct TYPE_3__ {int tid; struct cifs_ses* ses; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,char*,unsigned int,...) ;
 int FUNC_1 (unsigned int const,struct cifs_ses*,struct smb_rqst*,int*,int,struct kvec*) ;
 int FUNC_2 (struct smb2_read_plain_req*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (int,char*) ;
 unsigned int FUNC_5 (int ) ;
 int FUNC_6 (char*,char*,unsigned int) ;
 int FUNC_7 (struct smb_rqst*,int ,int) ;
 int FUNC_8 (void**,unsigned int*,struct cifs_io_parms*,int *,int ,int ) ;
 scalar_t__ FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (unsigned int const,int ,int ,int ,int ,unsigned int) ;
 int FUNC_11 (unsigned int const,int ,int ,int ,int ,unsigned int,int) ;

int
FUNC_12(const unsigned int VAR_11, struct cifs_io_parms *VAR_12,
   unsigned int *VAR_13, char **VAR_14, int *VAR_15)
{
 struct smb_rqst VAR_16;
 int VAR_17, VAR_18;
 struct smb2_read_plain_req *VAR_19 = ((void*)0);
 struct smb2_read_rsp *VAR_20 = ((void*)0);
 struct kvec VAR_21[1];
 struct kvec VAR_22;
 unsigned int VAR_23;
 int VAR_24 = VAR_1;
 struct cifs_ses *VAR_25 = VAR_12->tcon->ses;

 *VAR_13 = 0;
 VAR_18 = FUNC_8((void **)&VAR_19, &VAR_23, VAR_12, ((void*)0), 0, 0);
 if (VAR_18)
  return VAR_18;

 if (FUNC_9(VAR_12->tcon))
  VAR_24 |= VAR_5;

 VAR_21[0].iov_base = (char *)VAR_19;
 VAR_21[0].iov_len = VAR_23;

 FUNC_7(&VAR_16, 0, sizeof(struct smb_rqst));
 VAR_16.rq_iov = VAR_21;
 VAR_16.rq_nvec = 1;

 VAR_18 = FUNC_1(VAR_11, VAR_25, &VAR_16, &VAR_17, VAR_24, &VAR_22);
 VAR_20 = (struct smb2_read_rsp *)VAR_22.iov_base;

 if (VAR_18) {
  if (VAR_18 != -VAR_7) {
   FUNC_3(VAR_12->tcon, VAR_9);
   FUNC_0(VAR_10, "Send error in read = %d\n", VAR_18);
   FUNC_11(VAR_11, VAR_19->PersistentFileId,
         VAR_12->tcon->tid, VAR_25->Suid,
         VAR_12->offset, VAR_12->length,
         VAR_18);
  } else
   FUNC_10(VAR_11, VAR_19->PersistentFileId,
        VAR_12->tcon->tid, VAR_25->Suid,
        VAR_12->offset, 0);
  FUNC_4(VAR_17, VAR_22.iov_base);
  FUNC_2(VAR_19);
  return VAR_18 == -VAR_7 ? 0 : VAR_18;
 } else
  FUNC_10(VAR_11, VAR_19->PersistentFileId,
        VAR_12->tcon->tid, VAR_25->Suid,
        VAR_12->offset, VAR_12->length);

 FUNC_2(VAR_19);

 *VAR_13 = FUNC_5(VAR_20->DataLength);
 if ((*VAR_13 > VAR_2) ||
     (*VAR_13 > VAR_12->length)) {
  FUNC_0(VAR_8, "bad length %d for count %d\n",
    *VAR_13, VAR_12->length);
  VAR_18 = -VAR_6;
  *VAR_13 = 0;
 }

 if (*VAR_14) {
  FUNC_6(*VAR_14, (char *)VAR_20 + VAR_20->DataOffset, *VAR_13);
  FUNC_4(VAR_17, VAR_22.iov_base);
 } else if (VAR_17 != VAR_3) {
  *VAR_14 = VAR_22.iov_base;
  if (VAR_17 == VAR_4)
   *VAR_15 = VAR_4;
  else if (VAR_17 == VAR_0)
   *VAR_15 = VAR_0;
 }
 return VAR_18;
}
