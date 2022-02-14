
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smb_rqst {TYPE_1__* rq_iov; } ;
struct smb2_sync_hdr {scalar_t__ Command; } ;
struct mid_q_entry {int dummy; } ;
struct TCP_Server_Info {scalar_t__ tcpStatus; } ;
struct TYPE_2__ {scalar_t__ iov_base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mid_q_entry*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct mid_q_entry* FUNC_1 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct TCP_Server_Info*,struct smb2_sync_hdr*) ;
 struct mid_q_entry* FUNC_3 (struct smb2_sync_hdr*,struct TCP_Server_Info*) ;
 int FUNC_4 (struct TCP_Server_Info*,struct smb2_sync_hdr*) ;
 int FUNC_5 (struct smb_rqst*,struct TCP_Server_Info*) ;

struct mid_q_entry *
FUNC_6(struct TCP_Server_Info *VAR_4, struct smb_rqst *VAR_5)
{
 int VAR_6;
 struct smb2_sync_hdr *VAR_7 =
   (struct smb2_sync_hdr *)VAR_5->rq_iov[0].iov_base;
 struct mid_q_entry *VAR_8;

 if (VAR_4->tcpStatus == VAR_0 &&
    VAR_7->Command != VAR_3)
  return FUNC_1(-VAR_1);

 FUNC_4(VAR_4, VAR_7);

 VAR_8 = FUNC_3(VAR_7, VAR_4);
 if (VAR_8 == ((void*)0)) {
  FUNC_2(VAR_4, VAR_7);
  return FUNC_1(-VAR_2);
 }

 VAR_6 = FUNC_5(VAR_5, VAR_4);
 if (VAR_6) {
  FUNC_2(VAR_4, VAR_7);
  FUNC_0(VAR_8);
  return FUNC_1(VAR_6);
 }

 return VAR_8;
}
