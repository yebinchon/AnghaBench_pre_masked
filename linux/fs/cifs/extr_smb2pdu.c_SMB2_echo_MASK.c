
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smb_rqst {int rq_nvec; struct kvec* rq_iov; } ;
struct TYPE_2__ {int CreditRequest; } ;
struct smb2_echo_req {TYPE_1__ sync_hdr; } ;
struct kvec {unsigned int iov_len; char* iov_base; } ;
struct TCP_Server_Info {scalar_t__ tcpStatus; int reconnect; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct TCP_Server_Info*,struct smb_rqst*,int *,int ,int *,struct TCP_Server_Info*,int ,int *) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct smb2_echo_req*) ;
 int VAR_4 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int *,int ) ;
 int VAR_5 ;
 int FUNC_5 (int ,int *,void**,unsigned int*) ;

int
FUNC_6(struct TCP_Server_Info *VAR_6)
{
 struct smb2_echo_req *VAR_7;
 int VAR_8 = 0;
 struct kvec VAR_9[1];
 struct smb_rqst VAR_10 = { .rq_iov = VAR_9,
     .rq_nvec = 1 };
 unsigned int VAR_11;

 FUNC_1(VAR_2, "In echo request\n");

 if (VAR_6->tcpStatus == VAR_1) {

  FUNC_4(VAR_4, &VAR_6->reconnect, 0);
  return VAR_8;
 }

 VAR_8 = FUNC_5(VAR_3, ((void*)0), (void **)&VAR_7, &VAR_11);
 if (VAR_8)
  return VAR_8;

 VAR_7->sync_hdr.CreditRequest = FUNC_3(1);

 VAR_9[0].iov_len = VAR_11;
 VAR_9[0].iov_base = (char *)VAR_7;

 VAR_8 = FUNC_0(VAR_6, &VAR_10, ((void*)0), VAR_5, ((void*)0),
        VAR_6, VAR_0, ((void*)0));
 if (VAR_8)
  FUNC_1(VAR_2, "Echo request failed: %d\n", VAR_8);

 FUNC_2(VAR_7);
 return VAR_8;
}
