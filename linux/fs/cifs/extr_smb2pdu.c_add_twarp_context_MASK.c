
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb2_create_req {int CreateContextsLength; scalar_t__ CreateContextsOffset; } ;
struct kvec {int iov_len; struct smb2_create_req* iov_base; } ;
struct crt_twarp_ctxt {int dummy; } ;
typedef int __u64 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 struct smb2_create_req* FUNC_1 (int ) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static int
FUNC_3(struct kvec *VAR_1, unsigned int *VAR_2, __u64 VAR_3)
{
 struct smb2_create_req *VAR_4 = VAR_1[0].iov_base;
 unsigned int VAR_5 = *VAR_2;

 VAR_1[VAR_5].iov_base = FUNC_1(VAR_3);
 if (VAR_1[VAR_5].iov_base == ((void*)0))
  return -VAR_0;
 VAR_1[VAR_5].iov_len = sizeof(struct crt_twarp_ctxt);
 if (!VAR_4->CreateContextsOffset)
  VAR_4->CreateContextsOffset = FUNC_0(
    sizeof(struct smb2_create_req) +
    VAR_1[VAR_5 - 1].iov_len);
 FUNC_2(&VAR_4->CreateContextsLength, sizeof(struct crt_twarp_ctxt));
 *VAR_2 = VAR_5 + 1;
 return 0;
}
