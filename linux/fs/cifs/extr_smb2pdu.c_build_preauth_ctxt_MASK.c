
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb2_preauth_neg_context {int HashAlgorithms; int Salt; void* SaltLength; void* HashAlgorithmCount; void* DataLength; int ContextType; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void
FUNC_2(struct smb2_preauth_neg_context *VAR_3)
{
 VAR_3->ContextType = VAR_0;
 VAR_3->DataLength = FUNC_0(38);
 VAR_3->HashAlgorithmCount = FUNC_0(1);
 VAR_3->SaltLength = FUNC_0(VAR_2);
 FUNC_1(VAR_3->Salt, VAR_2);
 VAR_3->HashAlgorithms = VAR_1;
}
