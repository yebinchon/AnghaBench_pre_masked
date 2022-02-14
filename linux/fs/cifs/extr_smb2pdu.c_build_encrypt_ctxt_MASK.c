
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb2_encryption_neg_context {int * Ciphers; void* CipherCount; void* DataLength; int ContextType; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(struct smb2_encryption_neg_context *VAR_3)
{
 VAR_3->ContextType = VAR_2;
 VAR_3->DataLength = FUNC_0(6);
 VAR_3->CipherCount = FUNC_0(2);
 VAR_3->Ciphers[0] = VAR_1;
 VAR_3->Ciphers[1] = VAR_0;
}
