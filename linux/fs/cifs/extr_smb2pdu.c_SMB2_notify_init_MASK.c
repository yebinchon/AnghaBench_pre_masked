
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
typedef scalar_t__ u32 ;
struct smb_rqst {struct kvec* rq_iov; } ;
struct smb2_change_notify_req {scalar_t__ Flags; void* CompletionFilter; void* OutputBufferLength; void* VolatileFileId; void* PersistentFileId; } ;
struct kvec {char* iov_base; unsigned int iov_len; } ;
struct cifs_tcon {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,struct cifs_tcon*,void**,unsigned int*) ;

__attribute__((used)) static int
FUNC_3(const unsigned int VAR_4, struct smb_rqst *VAR_5,
  struct cifs_tcon *VAR_6, u64 VAR_7, u64 VAR_8,
  u32 VAR_9, bool VAR_10)
{
 struct smb2_change_notify_req *VAR_11;
 struct kvec *VAR_12 = VAR_5->rq_iov;
 unsigned int VAR_13;
 int VAR_14;

 VAR_14 = FUNC_2(VAR_1, VAR_6, (void **) &VAR_11, &VAR_13);
 if (VAR_14)
  return VAR_14;

 VAR_11->PersistentFileId = VAR_7;
 VAR_11->VolatileFileId = VAR_8;
 VAR_11->OutputBufferLength =
  FUNC_1(VAR_2 - VAR_0);
 VAR_11->CompletionFilter = FUNC_1(VAR_9);
 if (VAR_10)
  VAR_11->Flags = FUNC_0(VAR_3);
 else
  VAR_11->Flags = 0;

 VAR_12[0].iov_base = (char *)VAR_11;
 VAR_12[0].iov_len = VAR_13;

 return 0;
}
