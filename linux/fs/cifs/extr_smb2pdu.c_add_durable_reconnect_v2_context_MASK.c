
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb2_create_req {int CreateContextsLength; scalar_t__ CreateContextsOffset; } ;
struct kvec {int iov_len; struct smb2_create_req* iov_base; } ;
struct create_durable_handle_reconnect_v2 {int dummy; } ;
struct cifs_open_parms {int reconnect; int fid; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 struct smb2_create_req* FUNC_1 (int ) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static int
FUNC_3(struct kvec *VAR_1, unsigned int *VAR_2,
      struct cifs_open_parms *VAR_3)
{
 struct smb2_create_req *VAR_4 = VAR_1[0].iov_base;
 unsigned int VAR_5 = *VAR_2;


 VAR_3->reconnect = 0;

 VAR_1[VAR_5].iov_base = FUNC_1(VAR_3->fid);
 if (VAR_1[VAR_5].iov_base == ((void*)0))
  return -VAR_0;
 VAR_1[VAR_5].iov_len = sizeof(struct create_durable_handle_reconnect_v2);
 if (!VAR_4->CreateContextsOffset)
  VAR_4->CreateContextsOffset =
   FUNC_0(sizeof(struct smb2_create_req) +
        VAR_1[1].iov_len);
 FUNC_2(&VAR_4->CreateContextsLength,
   sizeof(struct create_durable_handle_reconnect_v2));
 *VAR_2 = VAR_5 + 1;
 return 0;
}
