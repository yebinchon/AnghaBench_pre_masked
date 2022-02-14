
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smb_rqst {int rq_nvec; struct kvec* rq_iov; } ;
struct TYPE_2__ {void* CreditRequest; } ;
struct smb2_lease_ack {int LeaseState; int LeaseKey; void* StructureSize; TYPE_1__ sync_hdr; } ;
struct kvec {char* iov_base; unsigned int iov_len; } ;
struct cifs_tcon {int tid; struct cifs_ses* ses; } ;
struct cifs_ses {int Suid; } ;
typedef int __u8 ;
typedef int __u64 ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (unsigned int const,struct cifs_ses*,struct smb_rqst*,int*,int,struct kvec*) ;
 int FUNC_2 (struct smb2_lease_ack*) ;
 int FUNC_3 (struct cifs_tcon*,int ) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (int const) ;
 int FUNC_6 (int ,int *,int) ;
 int FUNC_7 (struct smb_rqst*,int ,int) ;
 int FUNC_8 (int ,struct cifs_tcon*,void**,unsigned int*) ;
 scalar_t__ FUNC_9 (struct cifs_tcon*) ;
 int FUNC_10 (int ,int ,int ,int ,int ) ;
 int FUNC_11 (int ,int ,int ,int ,int ,int) ;

int
FUNC_12(const unsigned int VAR_6, struct cifs_tcon *VAR_7,
   __u8 *VAR_8, const __le32 VAR_9)
{
 struct smb_rqst VAR_10;
 int VAR_11;
 struct smb2_lease_ack *VAR_12 = ((void*)0);
 struct cifs_ses *VAR_13 = VAR_7->ses;
 int VAR_14 = VAR_1;
 unsigned int VAR_15;
 struct kvec VAR_16[1];
 struct kvec VAR_17;
 int VAR_18;
 __u64 *VAR_19;
 __u64 *VAR_20;

 FUNC_0(VAR_3, "SMB2_lease_break\n");
 VAR_11 = FUNC_8(VAR_4, VAR_7, (void **) &VAR_12,
        &VAR_15);
 if (VAR_11)
  return VAR_11;

 if (FUNC_9(VAR_7))
  VAR_14 |= VAR_2;

 VAR_12->sync_hdr.CreditRequest = FUNC_4(1);
 VAR_12->StructureSize = FUNC_4(36);
 VAR_15 += 12;

 FUNC_6(VAR_12->LeaseKey, VAR_8, 16);
 VAR_12->LeaseState = VAR_9;

 VAR_14 |= VAR_0;

 VAR_16[0].iov_base = (char *)VAR_12;
 VAR_16[0].iov_len = VAR_15;

 FUNC_7(&VAR_10, 0, sizeof(struct smb_rqst));
 VAR_10.rq_iov = VAR_16;
 VAR_10.rq_nvec = 1;

 VAR_11 = FUNC_1(VAR_6, VAR_13, &VAR_10, &VAR_18, VAR_14, &VAR_17);
 FUNC_2(VAR_12);

 VAR_20 = (__u64 *)VAR_8;
 VAR_19 = (__u64 *)(VAR_8+8);
 if (VAR_11) {
  FUNC_3(VAR_7, VAR_5);
  FUNC_11(FUNC_5(VAR_9), VAR_7->tid,
   VAR_13->Suid, *VAR_20, *VAR_19, VAR_11);
  FUNC_0(VAR_3, "Send error in Lease Break = %d\n", VAR_11);
 } else
  FUNC_10(FUNC_5(VAR_9), VAR_7->tid,
   VAR_13->Suid, *VAR_20, *VAR_19);

 return VAR_11;
}
