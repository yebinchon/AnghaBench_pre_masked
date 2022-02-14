
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
struct smb_rqst {struct kvec* rq_iov; } ;
struct smb2_flush_req {void* VolatileFileId; void* PersistentFileId; } ;
struct kvec {char* iov_base; unsigned int iov_len; } ;
struct cifs_tcon {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct cifs_tcon*,void**,unsigned int*) ;

int
FUNC_1(const unsigned int VAR_1, struct smb_rqst *VAR_2,
  struct cifs_tcon *VAR_3, u64 VAR_4, u64 VAR_5)
{
 struct smb2_flush_req *VAR_6;
 struct kvec *VAR_7 = VAR_2->rq_iov;
 unsigned int VAR_8;
 int VAR_9;

 VAR_9 = FUNC_0(VAR_0, VAR_3, (void **) &VAR_6, &VAR_8);
 if (VAR_9)
  return VAR_9;

 VAR_6->PersistentFileId = VAR_4;
 VAR_6->VolatileFileId = VAR_5;

 VAR_7[0].iov_base = (char *)VAR_6;
 VAR_7[0].iov_len = VAR_8;

 return 0;
}
