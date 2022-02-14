
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smb2_sync_hdr {scalar_t__ Command; } ;
struct mid_q_entry {int qhead; } ;
struct cifs_ses {scalar_t__ status; TYPE_1__* server; } ;
struct TYPE_2__ {scalar_t__ tcpStatus; int pending_mid_q; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,int *) ;
 struct mid_q_entry* FUNC_2 (struct smb2_sync_hdr*,TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(struct cifs_ses *VAR_12, struct smb2_sync_hdr *VAR_13,
     struct mid_q_entry **VAR_14)
{
 if (VAR_12->server->tcpStatus == VAR_0)
  return -VAR_5;

 if (VAR_12->server->tcpStatus == VAR_2) {
  FUNC_0(VAR_7, "tcp session dead - return to caller to retry\n");
  return -VAR_4;
 }

 if (VAR_12->server->tcpStatus == VAR_1 &&
    VAR_13->Command != VAR_10)
  return -VAR_4;

 if (VAR_12->status == VAR_3) {
  if ((VAR_13->Command != VAR_11) &&
      (VAR_13->Command != VAR_10))
   return -VAR_4;

 }

 if (VAR_12->status == VAR_0) {
  if (VAR_13->Command != VAR_9)
   return -VAR_4;

 }

 *VAR_14 = FUNC_2(VAR_13, VAR_12->server);
 if (*VAR_14 == ((void*)0))
  return -VAR_6;
 FUNC_3(&VAR_8);
 FUNC_1(&(*VAR_14)->qhead, &VAR_12->server->pending_mid_q);
 FUNC_4(&VAR_8);

 return 0;
}
