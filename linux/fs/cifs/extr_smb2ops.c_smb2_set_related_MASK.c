
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smb_rqst {TYPE_1__* rq_iov; } ;
struct smb2_sync_hdr {int Flags; } ;
struct TYPE_2__ {scalar_t__ iov_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;

void
FUNC_1(struct smb_rqst *VAR_2)
{
 struct smb2_sync_hdr *VAR_3;

 VAR_3 = (struct smb2_sync_hdr *)(VAR_2->rq_iov[0].iov_base);
 if (VAR_3 == ((void*)0)) {
  FUNC_0(VAR_0, "shdr NULL in smb2_set_related\n");
  return;
 }
 VAR_3->Flags |= VAR_1;
}
