
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb2_sync_hdr {int MessageId; int CreditCharge; } ;
struct TCP_Server_Info {int dummy; } ;


 int FUNC_0 (struct TCP_Server_Info*) ;
 int FUNC_1 (struct TCP_Server_Info*) ;
 unsigned int FUNC_2 (int ) ;

__attribute__((used)) static inline void
FUNC_3(struct TCP_Server_Info *VAR_0,
        struct smb2_sync_hdr *VAR_1)
{
 unsigned int VAR_2, VAR_3 = FUNC_2(VAR_1->CreditCharge);

 VAR_1->MessageId = FUNC_1(VAR_0);

 for (VAR_2 = 1; VAR_2 < VAR_3; VAR_2++)
  FUNC_0(VAR_0);
}
