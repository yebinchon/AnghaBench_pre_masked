
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct smb_rqst {int rq_nvec; struct kvec* rq_iov; } ;
struct TYPE_2__ {int CreditRequest; } ;
struct smb2_oplock_break {TYPE_1__ sync_hdr; int OplockLevel; int PersistentFid; int VolatileFid; } ;
struct kvec {char* iov_base; unsigned int iov_len; } ;
struct cifs_tcon {struct cifs_ses* ses; } ;
struct cifs_ses {int dummy; } ;
typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (unsigned int const,struct cifs_ses*,struct smb_rqst*,int*,int,struct kvec*) ;
 int FUNC_2 (struct smb2_oplock_break*) ;
 int FUNC_3 (struct cifs_tcon*,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct smb_rqst*,int ,int) ;
 int FUNC_6 (int ,struct cifs_tcon*,void**,unsigned int*) ;
 scalar_t__ FUNC_7 (struct cifs_tcon*) ;

int
FUNC_8(const unsigned int VAR_6, struct cifs_tcon *VAR_7,
    const u64 VAR_8, const u64 VAR_9,
    __u8 VAR_10)
{
 struct smb_rqst VAR_11;
 int VAR_12;
 struct smb2_oplock_break *VAR_13 = ((void*)0);
 struct cifs_ses *VAR_14 = VAR_7->ses;
 int VAR_15 = VAR_1;
 unsigned int VAR_16;
 struct kvec VAR_17[1];
 struct kvec VAR_18;
 int VAR_19;

 FUNC_0(VAR_3, "SMB2_oplock_break\n");
 VAR_12 = FUNC_6(VAR_4, VAR_7, (void **) &VAR_13,
        &VAR_16);
 if (VAR_12)
  return VAR_12;

 if (FUNC_7(VAR_7))
  VAR_15 |= VAR_2;

 VAR_13->VolatileFid = VAR_9;
 VAR_13->PersistentFid = VAR_8;
 VAR_13->OplockLevel = VAR_10;
 VAR_13->sync_hdr.CreditRequest = FUNC_4(1);

 VAR_15 |= VAR_0;

 VAR_17[0].iov_base = (char *)VAR_13;
 VAR_17[0].iov_len = VAR_16;

 FUNC_5(&VAR_11, 0, sizeof(struct smb_rqst));
 VAR_11.rq_iov = VAR_17;
 VAR_11.rq_nvec = 1;

 VAR_12 = FUNC_1(VAR_6, VAR_14, &VAR_11, &VAR_19, VAR_15, &VAR_18);
 FUNC_2(VAR_13);

 if (VAR_12) {
  FUNC_3(VAR_7, VAR_5);
  FUNC_0(VAR_3, "Send error in Oplock Break = %d\n", VAR_12);
 }

 return VAR_12;
}
