
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb2_create_req {int CreateContextsLength; scalar_t__ CreateContextsOffset; } ;
struct kvec {int iov_len; struct smb2_create_req* iov_base; } ;
struct crt_query_id_ctxt {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 struct smb2_create_req* FUNC_1 () ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static int
FUNC_3(struct kvec *VAR_1, unsigned int *VAR_2)
{
 struct smb2_create_req *VAR_3 = VAR_1[0].iov_base;
 unsigned int VAR_4 = *VAR_2;

 VAR_1[VAR_4].iov_base = FUNC_1();
 if (VAR_1[VAR_4].iov_base == ((void*)0))
  return -VAR_0;
 VAR_1[VAR_4].iov_len = sizeof(struct crt_query_id_ctxt);
 if (!VAR_3->CreateContextsOffset)
  VAR_3->CreateContextsOffset = FUNC_0(
    sizeof(struct smb2_create_req) +
    VAR_1[VAR_4 - 1].iov_len);
 FUNC_2(&VAR_3->CreateContextsLength, sizeof(struct crt_query_id_ctxt));
 *VAR_2 = VAR_4 + 1;
 return 0;
}
