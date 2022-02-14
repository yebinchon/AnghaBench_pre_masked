
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct smb_rqst {int rq_nvec; struct kvec* rq_iov; } ;
struct TYPE_5__ {int ProcessId; } ;
struct smb2_lock_req {int VolatileFileId; int PersistentFileId; int LockCount; TYPE_1__ sync_hdr; } ;
struct smb2_lock_element {int dummy; } ;
struct kvec {char* iov_base; unsigned int iov_len; } ;
struct TYPE_6__ {int num_locks; } ;
struct TYPE_7__ {TYPE_2__ cifs_stats; } ;
struct cifs_tcon {TYPE_4__* ses; int tid; TYPE_3__ stats; } ;
typedef int __u64 ;
typedef int __u32 ;
struct TYPE_8__ {int Suid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int const) ;
 int FUNC_1 (unsigned int const,TYPE_4__*,struct smb_rqst*,int*,int,struct kvec*) ;
 int FUNC_2 (struct smb2_lock_req*) ;
 int FUNC_3 (struct cifs_tcon*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int const) ;
 int FUNC_6 (int const) ;
 int FUNC_7 (struct smb_rqst*,int ,int) ;
 int FUNC_8 (int ,struct cifs_tcon*,void**,unsigned int*) ;
 scalar_t__ FUNC_9 (struct cifs_tcon*) ;
 int FUNC_10 (unsigned int const,int const,int ,int ,int) ;

int
FUNC_11(const unsigned int VAR_5, struct cifs_tcon *VAR_6,
    const __u64 VAR_7, const __u64 VAR_8, const __u32 VAR_9,
    const __u32 VAR_10, struct smb2_lock_element *VAR_11)
{
 struct smb_rqst VAR_12;
 int VAR_13 = 0;
 struct smb2_lock_req *VAR_14 = ((void*)0);
 struct kvec VAR_15[2];
 struct kvec VAR_16;
 int VAR_17;
 unsigned int VAR_18;
 int VAR_19 = VAR_0;
 unsigned int VAR_20;

 FUNC_0(VAR_2, "smb2_lockv num lock %d\n", VAR_10);

 VAR_13 = FUNC_8(VAR_3, VAR_6, (void **) &VAR_14, &VAR_20);
 if (VAR_13)
  return VAR_13;

 if (FUNC_9(VAR_6))
  VAR_19 |= VAR_1;

 VAR_14->sync_hdr.ProcessId = FUNC_6(VAR_9);
 VAR_14->LockCount = FUNC_5(VAR_10);

 VAR_14->PersistentFileId = VAR_7;
 VAR_14->VolatileFileId = VAR_8;

 VAR_18 = VAR_10 * sizeof(struct smb2_lock_element);

 VAR_15[0].iov_base = (char *)VAR_14;
 VAR_15[0].iov_len = VAR_20 - sizeof(struct smb2_lock_element);
 VAR_15[1].iov_base = (char *)VAR_11;
 VAR_15[1].iov_len = VAR_18;

 FUNC_4(&VAR_6->stats.cifs_stats.num_locks);

 FUNC_7(&VAR_12, 0, sizeof(struct smb_rqst));
 VAR_12.rq_iov = VAR_15;
 VAR_12.rq_nvec = 2;

 VAR_13 = FUNC_1(VAR_5, VAR_6->ses, &VAR_12, &VAR_17, VAR_19,
       &VAR_16);
 FUNC_2(VAR_14);
 if (VAR_13) {
  FUNC_0(VAR_2, "Send error in smb2_lockv = %d\n", VAR_13);
  FUNC_3(VAR_6, VAR_4);
  FUNC_10(VAR_5, VAR_7, VAR_6->tid,
        VAR_6->ses->Suid, VAR_13);
 }

 return VAR_13;
}
