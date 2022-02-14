
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smb_rqst {TYPE_1__* rq_iov; } ;
struct smb2_transform_hdr {int SessionId; int Nonce; int Flags; int OriginalMessageSize; int ProtocolId; } ;
struct smb2_sync_hdr {int SessionId; } ;
typedef scalar_t__ __le16 ;
struct TYPE_2__ {scalar_t__ iov_base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (struct smb2_transform_hdr*,int ,int) ;

__attribute__((used)) static void
FUNC_5(struct smb2_transform_hdr *VAR_4, unsigned int VAR_5,
     struct smb_rqst *VAR_6, __le16 VAR_7)
{
 struct smb2_sync_hdr *VAR_8 =
   (struct smb2_sync_hdr *)VAR_6->rq_iov[0].iov_base;

 FUNC_4(VAR_4, 0, sizeof(struct smb2_transform_hdr));
 VAR_4->ProtocolId = VAR_1;
 VAR_4->OriginalMessageSize = FUNC_1(VAR_5);
 VAR_4->Flags = FUNC_0(0x01);
 if (VAR_7 == VAR_0)
  FUNC_2(&VAR_4->Nonce, VAR_3);
 else
  FUNC_2(&VAR_4->Nonce, VAR_2);
 FUNC_3(&VAR_4->SessionId, &VAR_8->SessionId, 8);
}
