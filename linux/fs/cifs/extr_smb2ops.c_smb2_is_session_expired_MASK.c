
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb2_sync_hdr {scalar_t__ Status; int MessageId; int Command; int SessionId; int TreeId; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static bool
FUNC_4(char *VAR_3)
{
 struct smb2_sync_hdr *VAR_4 = (struct smb2_sync_hdr *)VAR_3;

 if (VAR_4->Status != VAR_1 &&
     VAR_4->Status != VAR_2)
  return 0;

 FUNC_3(VAR_4->TreeId, VAR_4->SessionId,
          FUNC_1(VAR_4->Command),
          FUNC_2(VAR_4->MessageId));
 FUNC_0(VAR_0, "Session expired or deleted\n");

 return 1;
}
