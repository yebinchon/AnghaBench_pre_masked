
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u64 ;
struct smb2_query_info_rsp {int dummy; } ;
struct smb2_query_info_req {int FileInfoClass; int OutputBufferLength; int InputBufferOffset; void* VolatileFileId; void* PersistentFileId; int InfoType; } ;
struct kvec {char* iov_base; unsigned int iov_len; } ;
struct cifs_tcon {TYPE_1__* ses; } ;
struct TYPE_2__ {int * server; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,struct cifs_tcon*,void**,unsigned int*) ;

__attribute__((used)) static int
FUNC_4(struct kvec *VAR_4, struct cifs_tcon *VAR_5, int VAR_6,
     int VAR_7, u64 VAR_8, u64 VAR_9)
{
 int VAR_10;
 struct smb2_query_info_req *VAR_11;
 unsigned int VAR_12;

 FUNC_0(VAR_1, "Query FSInfo level %d\n", VAR_6);

 if ((VAR_5->ses == ((void*)0)) || (VAR_5->ses->server == ((void*)0)))
  return -VAR_0;

 VAR_10 = FUNC_3(VAR_3, VAR_5, (void **) &VAR_11,
        &VAR_12);
 if (VAR_10)
  return VAR_10;

 VAR_11->InfoType = VAR_2;
 VAR_11->FileInfoClass = VAR_6;
 VAR_11->PersistentFileId = VAR_8;
 VAR_11->VolatileFileId = VAR_9;

 VAR_11->InputBufferOffset =
   FUNC_1(sizeof(struct smb2_query_info_req) - 1);
 VAR_11->OutputBufferLength = FUNC_2(
  VAR_7 + sizeof(struct smb2_query_info_rsp) - 1);

 VAR_4->iov_base = (char *)VAR_11;
 VAR_4->iov_len = VAR_12;
 return 0;
}
