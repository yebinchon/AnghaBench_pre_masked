
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ umode_t ;
struct smb2_create_req {int CreateContextsLength; scalar_t__ CreateContextsOffset; } ;
struct kvec {int iov_len; struct smb2_create_req* iov_base; } ;
struct create_posix {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int) ;
 struct smb2_create_req* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static int
FUNC_4(struct kvec *VAR_3, unsigned int *VAR_4, umode_t VAR_5)
{
 struct smb2_create_req *VAR_6 = VAR_3[0].iov_base;
 unsigned int VAR_7 = *VAR_4;

 VAR_3[VAR_7].iov_base = FUNC_2(VAR_5);
 if (VAR_5 == VAR_0)
  FUNC_0(VAR_2, "illegal mode\n");
 if (VAR_3[VAR_7].iov_base == ((void*)0))
  return -VAR_1;
 VAR_3[VAR_7].iov_len = sizeof(struct create_posix);
 if (!VAR_6->CreateContextsOffset)
  VAR_6->CreateContextsOffset = FUNC_1(
    sizeof(struct smb2_create_req) +
    VAR_3[VAR_7 - 1].iov_len);
 FUNC_3(&VAR_6->CreateContextsLength, sizeof(struct create_posix));
 *VAR_4 = VAR_7 + 1;
 return 0;
}
