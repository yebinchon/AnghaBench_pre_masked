
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb2_sync_hdr {int CreditCharge; } ;
struct TCP_Server_Info {int dummy; } ;


 unsigned int FUNC_0 (int ) ;
 void FUNC_1 (struct TCP_Server_Info*,unsigned int) ;

__attribute__((used)) static inline void
FUNC_2(struct TCP_Server_Info *VAR_0,
       const struct smb2_sync_hdr *VAR_1)
{
 unsigned int VAR_2 = FUNC_0(VAR_1->CreditCharge);

 return FUNC_1(VAR_0, VAR_2 > 0 ? VAR_2 : 1);
}
