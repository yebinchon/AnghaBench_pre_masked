
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb2_transform_hdr {int OriginalMessageSize; } ;
struct smb2_sync_hdr {scalar_t__ ProtocolId; int NextCommand; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(char *VAR_1)
{
 struct smb2_sync_hdr *VAR_2 = (struct smb2_sync_hdr *)VAR_1;
 struct smb2_transform_hdr *VAR_3 = (struct smb2_transform_hdr *)VAR_1;

 if (VAR_2->ProtocolId == VAR_0)
  return sizeof(struct smb2_transform_hdr) +
    FUNC_0(VAR_3->OriginalMessageSize);

 return FUNC_0(VAR_2->NextCommand);
}
