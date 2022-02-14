
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
typedef void* u64 ;
typedef unsigned int u32 ;
struct smb_rqst {unsigned int rq_nvec; struct kvec* rq_iov; } ;
struct TYPE_2__ {void* ProcessId; } ;
struct smb2_set_info_req {void* BufferLength; int Buffer; int BufferOffset; void* AdditionalInformation; void* VolatileFileId; void* PersistentFileId; void* FileInfoClass; void* InfoType; TYPE_1__ sync_hdr; } ;
struct kvec {char* iov_base; unsigned int iov_len; } ;
struct cifs_tcon {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (unsigned int) ;
 int FUNC_2 (void**,unsigned int) ;
 int FUNC_3 (int ,void*,unsigned int) ;
 int FUNC_4 (int ,struct cifs_tcon*,void**,unsigned int*) ;

int
FUNC_5(struct cifs_tcon *VAR_1, struct smb_rqst *VAR_2,
        u64 VAR_3, u64 VAR_4, u32 VAR_5, u8 VAR_6,
        u8 VAR_7, u32 VAR_8,
  void **VAR_9, unsigned int *VAR_10)
{
 struct smb2_set_info_req *VAR_11;
 struct kvec *VAR_12 = VAR_2->rq_iov;
 unsigned int VAR_13, VAR_14;
 int VAR_15;

 VAR_15 = FUNC_4(VAR_0, VAR_1, (void **) &VAR_11, &VAR_14);
 if (VAR_15)
  return VAR_15;

 VAR_11->sync_hdr.ProcessId = FUNC_1(VAR_5);
 VAR_11->InfoType = VAR_7;
 VAR_11->FileInfoClass = VAR_6;
 VAR_11->PersistentFileId = VAR_3;
 VAR_11->VolatileFileId = VAR_4;
 VAR_11->AdditionalInformation = FUNC_1(VAR_8);

 VAR_11->BufferOffset =
   FUNC_0(sizeof(struct smb2_set_info_req) - 1);
 VAR_11->BufferLength = FUNC_1(*VAR_10);

 FUNC_3(VAR_11->Buffer, *VAR_9, *VAR_10);
 VAR_14 += *VAR_10;

 VAR_12[0].iov_base = (char *)VAR_11;

 VAR_12[0].iov_len = VAR_14 - 1;

 for (VAR_13 = 1; VAR_13 < VAR_2->rq_nvec; VAR_13++) {
  FUNC_2(&VAR_11->BufferLength, VAR_10[VAR_13]);
  VAR_12[VAR_13].iov_base = (char *)VAR_9[VAR_13];
  VAR_12[VAR_13].iov_len = VAR_10[VAR_13];
 }

 return 0;
}
