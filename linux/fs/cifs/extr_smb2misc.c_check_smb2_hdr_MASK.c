
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb2_sync_hdr {scalar_t__ ProtocolId; int Flags; scalar_t__ Command; int MessageId; } ;
typedef scalar_t__ __u64 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct smb2_sync_hdr *VAR_4, __u64 VAR_5)
{
 __u64 VAR_6 = FUNC_2(VAR_4->MessageId);





 if ((VAR_4->ProtocolId == VAR_2) &&
     (VAR_5 == VAR_6)) {
  if (VAR_4->Flags & VAR_0)
   return 0;
  else {

   if (VAR_4->Command == VAR_1)
    return 0;
   else
    FUNC_0(VAR_3, "Received Request not response\n");
  }
 } else {
  if (VAR_4->ProtocolId != VAR_2)
   FUNC_0(VAR_3, "Bad protocol string signature header %x\n",
     FUNC_1(VAR_4->ProtocolId));
  if (VAR_5 != VAR_6)
   FUNC_0(VAR_3, "Mids do not match: %llu and %llu\n",
     VAR_5, VAR_6);
 }
 FUNC_0(VAR_3, "Bad SMB detected. The Mid=%llu\n", VAR_6);
 return 1;
}
