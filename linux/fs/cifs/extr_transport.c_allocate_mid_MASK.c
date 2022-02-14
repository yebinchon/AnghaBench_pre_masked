
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smb_hdr {scalar_t__ Command; } ;
struct mid_q_entry {int qhead; } ;
struct cifs_ses {scalar_t__ status; TYPE_1__* server; } ;
struct TYPE_2__ {scalar_t__ tcpStatus; int pending_mid_q; } ;


 struct mid_q_entry* FUNC_0 (struct smb_hdr*,TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct cifs_ses *VAR_11, struct smb_hdr *VAR_12,
   struct mid_q_entry **VAR_13)
{
 if (VAR_11->server->tcpStatus == VAR_0) {
  return -VAR_4;
 }

 if (VAR_11->server->tcpStatus == VAR_1) {
  FUNC_1(VAR_6, "tcp session dead - return to caller to retry\n");
  return -VAR_3;
 }

 if (VAR_11->status == VAR_2) {
  if ((VAR_12->Command != VAR_10) &&
   (VAR_12->Command != VAR_9))
   return -VAR_3;

 }

 if (VAR_11->status == VAR_0) {

  if (VAR_12->Command != VAR_8)
   return -VAR_3;

 }

 *VAR_13 = FUNC_0(VAR_12, VAR_11->server);
 if (*VAR_13 == ((void*)0))
  return -VAR_5;
 FUNC_3(&VAR_7);
 FUNC_2(&(*VAR_13)->qhead, &VAR_11->server->pending_mid_q);
 FUNC_4(&VAR_7);
 return 0;
}
