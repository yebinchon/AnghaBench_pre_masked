
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb2_create_req {int CreateContextsLength; scalar_t__ CreateContextsOffset; } ;
struct kvec {int iov_len; struct smb2_create_req* iov_base; } ;
struct create_durable {int dummy; } ;
struct cifs_open_parms {int reconnect; int fid; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvec*,unsigned int*,struct cifs_open_parms*) ;
 int FUNC_1 (struct kvec*,unsigned int*,struct cifs_open_parms*) ;
 scalar_t__ FUNC_2 (int) ;
 struct smb2_create_req* FUNC_3 () ;
 struct smb2_create_req* FUNC_4 (int ) ;
 int FUNC_5 (int *,int) ;

__attribute__((used)) static int
FUNC_6(struct kvec *VAR_1, unsigned int *VAR_2,
      struct cifs_open_parms *VAR_3, bool VAR_4)
{
 struct smb2_create_req *VAR_5 = VAR_1[0].iov_base;
 unsigned int VAR_6 = *VAR_2;

 if (VAR_4) {
  if (VAR_3->reconnect)
   return FUNC_0(VAR_1, VAR_2,
        VAR_3);
  else
   return FUNC_1(VAR_1, VAR_2, VAR_3);
 }

 if (VAR_3->reconnect) {
  VAR_1[VAR_6].iov_base = FUNC_4(VAR_3->fid);

  VAR_3->reconnect = 0;
 } else
  VAR_1[VAR_6].iov_base = FUNC_3();
 if (VAR_1[VAR_6].iov_base == ((void*)0))
  return -VAR_0;
 VAR_1[VAR_6].iov_len = sizeof(struct create_durable);
 if (!VAR_5->CreateContextsOffset)
  VAR_5->CreateContextsOffset =
   FUNC_2(sizeof(struct smb2_create_req) +
        VAR_1[1].iov_len);
 FUNC_5(&VAR_5->CreateContextsLength, sizeof(struct create_durable));
 *VAR_2 = VAR_6 + 1;
 return 0;
}
