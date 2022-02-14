
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef void* u64 ;
typedef size_t u32 ;
struct smb_rqst {struct kvec* rq_iov; } ;
struct smb2_query_info_req {int Buffer; int InputBufferOffset; void* InputBufferLength; void* OutputBufferLength; void* AdditionalInformation; void* VolatileFileId; void* PersistentFileId; void* FileInfoClass; void* InfoType; } ;
struct kvec {char* iov_base; unsigned int iov_len; } ;
struct cifs_tcon {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 void* FUNC_1 (size_t) ;
 int FUNC_2 (int ,void*,size_t) ;
 int FUNC_3 (int ,struct cifs_tcon*,void**,unsigned int*) ;

int
FUNC_4(struct cifs_tcon *VAR_1, struct smb_rqst *VAR_2,
       u64 VAR_3, u64 VAR_4,
       u8 VAR_5, u8 VAR_6, u32 VAR_7,
       size_t VAR_8, size_t VAR_9, void *VAR_10)
{
 struct smb2_query_info_req *VAR_11;
 struct kvec *VAR_12 = VAR_2->rq_iov;
 unsigned int VAR_13;
 int VAR_14;

 VAR_14 = FUNC_3(VAR_0, VAR_1, (void **) &VAR_11,
        &VAR_13);
 if (VAR_14)
  return VAR_14;

 VAR_11->InfoType = VAR_6;
 VAR_11->FileInfoClass = VAR_5;
 VAR_11->PersistentFileId = VAR_3;
 VAR_11->VolatileFileId = VAR_4;
 VAR_11->AdditionalInformation = FUNC_1(VAR_7);

 VAR_11->OutputBufferLength = FUNC_1(VAR_8);
 if (VAR_9) {
  VAR_11->InputBufferLength = FUNC_1(VAR_9);

  VAR_11->InputBufferOffset = FUNC_0(VAR_13 - 1);
  FUNC_2(VAR_11->Buffer, VAR_10, VAR_9);
 }

 VAR_12[0].iov_base = (char *)VAR_11;

 VAR_12[0].iov_len = VAR_13 - 1 + VAR_9;
 return 0;
}
