
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct smb2_create_req {int CreateContextsLength; scalar_t__ CreateContextsOffset; int RequestedOplockLevel; } ;
struct kvec {scalar_t__ iov_len; struct smb2_create_req* iov_base; } ;
struct TCP_Server_Info {TYPE_2__* vals; TYPE_1__* ops; } ;
typedef int __u8 ;
struct TYPE_4__ {scalar_t__ create_lease_size; } ;
struct TYPE_3__ {struct smb2_create_req* (* create_lease_buf ) (int *,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,scalar_t__) ;
 struct smb2_create_req* FUNC_2 (int *,int ) ;

__attribute__((used)) static int
FUNC_3(struct TCP_Server_Info *VAR_2, struct kvec *VAR_3,
    unsigned int *VAR_4, u8 *VAR_5, __u8 *VAR_6)
{
 struct smb2_create_req *VAR_7 = VAR_3[0].iov_base;
 unsigned int VAR_8 = *VAR_4;

 VAR_3[VAR_8].iov_base = VAR_2->ops->create_lease_buf(VAR_5, *VAR_6);
 if (VAR_3[VAR_8].iov_base == ((void*)0))
  return -VAR_0;
 VAR_3[VAR_8].iov_len = VAR_2->vals->create_lease_size;
 VAR_7->RequestedOplockLevel = VAR_1;
 if (!VAR_7->CreateContextsOffset)
  VAR_7->CreateContextsOffset = FUNC_0(
    sizeof(struct smb2_create_req) +
    VAR_3[VAR_8 - 1].iov_len);
 FUNC_1(&VAR_7->CreateContextsLength,
       VAR_2->vals->create_lease_size);
 *VAR_4 = VAR_8 + 1;
 return 0;
}
