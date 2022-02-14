
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_rqst {int rq_nvec; struct kvec* rq_iov; } ;
struct kvec {int dummy; } ;
struct TCP_Server_Info {int dummy; } ;
typedef int __u32 ;


 int FUNC_0 (struct smb_rqst*,struct TCP_Server_Info*,int *) ;

int FUNC_1(struct kvec *VAR_0, int VAR_1, struct TCP_Server_Info *VAR_2,
     __u32 *VAR_3)
{
 struct smb_rqst VAR_4 = { .rq_iov = VAR_0,
     .rq_nvec = VAR_1 };

 return FUNC_0(&VAR_4, VAR_2, VAR_3);
}
