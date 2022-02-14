
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
struct smb_rqst {struct kvec* rq_iov; } ;
struct smb2_close_req {void* VolatileFileId; void* PersistentFileId; } ;
struct kvec {char* iov_base; unsigned int iov_len; } ;
struct cifs_tcon {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct cifs_tcon*,void**,unsigned int*) ;

int
FUNC_1(struct cifs_tcon *VAR_1, struct smb_rqst *VAR_2,
  u64 VAR_3, u64 VAR_4)
{
 struct smb2_close_req *VAR_5;
 struct kvec *VAR_6 = VAR_2->rq_iov;
 unsigned int VAR_7;
 int VAR_8;

 VAR_8 = FUNC_0(VAR_0, VAR_1, (void **) &VAR_5, &VAR_7);
 if (VAR_8)
  return VAR_8;

 VAR_5->PersistentFileId = VAR_3;
 VAR_5->VolatileFileId = VAR_4;
 VAR_6[0].iov_base = (char *)VAR_5;
 VAR_6[0].iov_len = VAR_7;

 return 0;
}
